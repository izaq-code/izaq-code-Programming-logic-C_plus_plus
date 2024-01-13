#include <iostream>
#include <string>
#include <algorithm>
#include <locale>

using namespace std;

const int MAX_PRODUTOS = 10; // Aumente o tamanho máximo dos produtos, se necessário

struct Produto {
  string nome;
  int quantidade;
  double preco;
};

Produto produtos[MAX_PRODUTOS] = {{"Teclado", 20, 320.90},
                                  {"Mouse", 30, 450.0},
                                  {"Headset", 15, 419.99}};
int totalProdutos = 3; // Atualize o total de produtos

void cls() {
  system("cls");
}

void menu() {
  cls();
  cout << " _____________________" << endl;
  cout << "|         MENU        |" << endl;
  cout << "|---------------------|" << endl;
  cout << "|1. Ver Estoque       |" << endl;
  cout << "|2. Alterar Estoque   |" << endl;
  cout << "|3. Ver Totais        |" << endl;
  cout << "|4. Cadastrar Produto |" << endl; 
  cout << "|---------------------|" << endl;
  cout << "|5. Sair              |" << endl;
  cout << "|Escolha uma opção:   |" << endl;
  cout << "|_____________________|" << endl;
}

void verEstoque() {
  cls();
  cout << " ___________________ " << endl;
  cout << "|      Estoque      |" << endl;
  cout << "|___________________|" << endl;
  cout << " " << endl;
  for (int i = 0; i < totalProdutos; i++) {
    cout << "Nome: " << produtos[i].nome
         << ", Quantidade: " << produtos[i].quantidade
         << ", Preço: " << produtos[i].preco << endl;
  }
  cout << endl;
  cout << "Pressione Enter para continuar...";
  cin.ignore();
  cin.get();
}

void alterarEstoque() {
  cls();
  string nome;
  int alteracao;

  cout << "Digite o nome do produto: ";
  cin >> nome;
  transform(nome.begin(), nome.end(), nome.begin(), ::tolower);

  cout << "Digite a quantidade de alteração (positiva ou negativa): ";
  cin >> alteracao;

  for (int i = 0; i < totalProdutos; i++) {
    string nomeProduto = produtos[i].nome;
    transform(nomeProduto.begin(), nomeProduto.end(), nomeProduto.begin(), ::tolower);

    if (nomeProduto == nome) {
      produtos[i].quantidade += alteracao;
      cout << "Estoque alterado com sucesso!" << endl;
      cout << endl;
      cout << "Pressione Enter para continuar...";
      cin.ignore();
      cin.get();
      return;
    }
  }

  cout << "Produto não encontrado!" << endl;
  cout << endl;
  cout << "Pressione Enter para continuar...";
  cin.ignore();
  cin.get();
}

void verTotais() {
  cls();
  double totalValor = 0;

  for (int i = 0; i < totalProdutos; i++) {
    totalValor += produtos[i].quantidade * produtos[i].preco;
  }

  cout << "O valor total do estoque é: " << totalValor << endl;
  cout << endl;
  cout << "Pressione Enter para continuar...";
  cin.ignore();
  cin.get();
}

void cadastrarProduto() {
  if (totalProdutos >= MAX_PRODUTOS) {
    cout << "Limite de produtos atingido. Impossível cadastrar mais produtos." << endl;
    cout << "Pressione Enter para continuar...";
    cin.ignore();
    cin.get();
    return;
  }

  cls();
  cout << " __________________________" << endl;
  cout << "|   Cadastro de Produto    |" << endl;
  cout << "|__________________________|" << endl;

  Produto novoProduto;

  cout << "Digite o nome do produto: ";
  cin.ignore();
  getline(cin, novoProduto.nome);

  cout << "Digite a quantidade em estoque: ";
  cin >> novoProduto.quantidade;

  cout << "Digite o preço do produto: ";
  cin >> novoProduto.preco;

  produtos[totalProdutos] = novoProduto;
  totalProdutos++;

  cout << "Produto cadastrado com sucesso!" << endl;
  cout << endl;
  cout << "Pressione Enter para continuar...";
  cin.ignore();
  cin.get();
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  int escolha;

  while (true) {
    menu();
    cin >> escolha;

    switch (escolha) {
      case 1:
        verEstoque();
        break;
      case 2:
        alterarEstoque();
        break;
      case 3:
        verTotais();
        break;
      case 4:
        cadastrarProduto();
        break;
      case 5:
        return 0;
      default:
        cout << "Opção inválida!" << endl;
    }
  }

  return 0;
}

