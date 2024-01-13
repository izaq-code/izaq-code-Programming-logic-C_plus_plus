#include <cstdlib>
#include <cstring> 
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <ctime> 
#include <locale> 
#include <conio.h>
#include <fstream>
#include <sstream>

using namespace std;

struct Parceiro {
    string nome;
    string contato;
    string cnpj;
    string status;
};
struct FAQ {
    string question;
    string answer;
};

struct Avaliacao {
    string nomeCliente;
    int pontuacao;
    string comentario;
};


struct Fornecedor {
    string nome;
    
    string cnpj;
    string contato;
    string produto; 
    string status;
    int codigo;
};

struct Produto {
    string codigo;
    string nome;
    string fornecedor;
    string marca;
    string categoria;
    float preco;
    string status;
};

int atual = 0;  
int numFaqs = 0; 
int numAvaliacoes = 0;
const int NUM_FornecedorS = 100;

Parceiro parceiros[1000];
FAQ faqs[100]; 
Avaliacao avaliacoes[1000]; 
Fornecedor Fornecedors[NUM_FornecedorS];

int codigo =0;
int codigo1;
bool qwert;

time_t tempoAtual = time(nullptr);
struct tm *dataHora = localtime(&tempoAtual);
	
void criarCliente() {
    
	system("cls"); // Limpar tela anterior e exibir parte cadastrar clientes.
	
	cout << " __________________________________________________________________\n";
	cout << "|                                                                  |\n";
	cout << "|                      Cadastrar Novos Clientes                    |\n";
	cout << "|__________________________________________________________________| \n";
	    
    fstream fin, fout; // Biblioteca ou Classe que cria obejtos ou variaveis para manipular arquivos externos.
    				  // fin = file in = arquivo de entrada, fout = file out - arquivo de saida

    fin.open("clientes.txt", ios::in); // Abre e ler o arquivo se ele existir
    
    vector<string> linhas; // criado um vetor linhas do tipo string - ex. linhas[5]
    string linha, palavra, temp;
  
    int x = 0;
  
  	while(fin >> temp) { // Verifica e ler os dados do arquivo, retorna true enquanto tive dados e false se atingir seu limite.
	  
	    linhas.clear(); // Remove todos os dados do vetor. ex. linhas = 0 ou nULL
	
	    getline(fin, linha); // Busca os dados linha por linha
	
	    stringstream s(linha); // separa os dados por linha
	    
	    char virgula = ','; // Variavel recebe a virgula como separador dos dados

	    while (getline(s, palavra, virgula)) { // Cada linha tem variis dados que são sepadados por virgula e armazenado no vetor linhas.
			linhas.push_back(palavra); // ,1[0] , nome[1] , telefone[2] , email[3] , idade[4] , cpf[5] 
	    }
	    x = stoi(linhas[0]); // variavel x recebe o valor da posição [0] - código - como string convertido para inteiro.
	    // Esta parte tem como objetivo buscar o ultimo código, para quando precisar adcionar um novo cliente sempre com um id diferente dos existentes.
	}

    fout.open("clientes.txt", ios::out | ios::app); // Cria um novo arquivo se ele não existir.
    
    int n;
	    
    cout << " ________________________________________\n";
    cout << "| Voce deseja cadastrar quantos clientes?|\n";
    cout << "|________________________________________|\n";
    cout << "\n";
    cout << "--> ";
	cin >> n;
    cin.sync();
  system("cls");
    cout << " _________________________________________________________________\n";
    cout << "|     Informe os dados de " << n << " Clientes:" << "             |\n";
    cout << "|_________________________________________________________________|\n\n";
  
    int codigo, idade;
    string nome, telefone, email, cpf;

    codigo = x; // Objetivo da variavel x citada acima.

    for (int i = 0; i < n; i++) {
    	
    	codigo++;
    	cout << "<===============================================================================> \n\n";
  		cout << " ____________________________________________________________________\n";
  		cout << "|                                                                    |\n";
  		cout << "|                 -- Adicionar Cliente " << codigo << " --           |\n";
  		cout << "|____________________________________________________________________|\n\n";
  		
  		
  		
  		cout << " ___________________________\n";
  		cout << "|Informe o nome do cliente: |\n";
  		cout << "|___________________________|\n";
  		cout << "\n";
  		cout << "--> ";
        getline(cin, nome);
        cout << " _______________________________\n";
        cout << "|Informe o telefone do cliente: |\n";
        cout << "|_______________________________|\n";
        cout << "\n";
        cout << "--> ";
        getline(cin, telefone);
        cout << " _____________________________\n";
        cout << "|Informe o e-mail do cliente: |\n";
        cout << "|_____________________________|\n";
        cout << "\n";
        cout << "--> ";
        getline(cin, email);
        cout << " _____________________________\n";
        cout << "|Informe o idade do cliente:  |\n";
        cout << "|_____________________________|\n";
        cout << "\n";
        cout << "--> ";
        cin >> idade;
        cin.sync();
        cout << " ___________________________\n";
        cout << "|Informe o cpf do cliente:  |\n";
        cout << "|___________________________|\n";
        cout << "\n";
        cout << "--> ";
        getline(cin, cpf);
            cin.sync();
        cout << " ___________________________\n";
        cout << "|Informe o produto adquirido|\n";
        cout << "|___________________________|\n";
        cout << "\n";
        cout << "--> ";
        string produto;
        getline(cin, produto);
        cout << "\n";
        
    	cout << "<===============================================================================> \n\n";
  
        fout << ", " // Gravar os dados no arquivo criado ou lido anteriormente. 
			 << codigo << ", " // ,1[0] , nome[1] , telefone[2] , email[3] , idade[4] , cpf[5] 
             << nome << ", "
             << telefone << ", "
             << email << ", "
             << idade << ", "
             << cpf << ", "
             << produto
             << "\n";
    }
	cout << " ______________________________\n";
	cout << "|Dados Gravados com Sucesso!   |\n";
	cout << "|______________________________|\n";
	system("cls");
}

void buscar_dados() {
		 
	
system("cls");  // Limpar tela anterior e exibir parte buscar clientes.
	

  		cout << " ____________________________________________________________________\n";
  		cout << "|                                                                    |\n";
  		cout << "|                       -- Pesquisar Clientes  --                    |\n";
  		cout << "|____________________________________________________________________|\n\n";
    fstream fin; // Biblioteca ou Classe que cria obejtos ou variaveis para manipular arquivos externos.
    			// fin = file in = arquivo de entrada, fout = file out - arquivo de saida
    
    fin.open("clientes.txt", ios::in); // Abre e ler o arquivo se ele existir

    int linhan1, linhan2, cont = 0; // se cont manter-se 0 nenhum dado ou arquivo foi encontrado.
    cout << " _________________________________________________________\n";
    cout << "|Digite o codigo do cliente para visualizar seus dados:   |\n";
    cout << "|_________________________________________________________|\n";
    cout << "\n";
    cout << "--> ";
    cin >> linhan1;
  
    vector<string> linhas; // criado um vetor linhas do tipo string - ex. linhas[5]
    string linha, palavra, temp;
  
    while (fin >> temp) { // Verifica e ler os dados do arquivo, retorna true enquanto tive dados e false se atingir seu limite.
  
        linhas.clear(); // Remove todos os dados do vetor. ex. linhas = 0 ou nULL

        getline(fin, linha); // Busca os dados linha por linha
  
        stringstream s(linha); // separa os dados por linha
        
        char virgula = ','; // Variavel recebe a virgula como separador dos dados
  
        while (getline(s, palavra, virgula)) { // Cada linha tem variis dados que são sepadados por virgula e armazenado no vetor linhas.
			linhas.push_back(palavra); // ,1[0] , nome[1] , telefone[2] , email[3] , idade[4] , cpf[5]
        }
        
        linhan2 = stoi(linhas[0]); // variavel linhan2 recebe o valor da posição [0] - código - como string convertido para inteiro.
  
        if (linhan2 == linhan1) { // Se a variavel linhan2 for igual a variavel linhan1 informada pelo usuario, mostre o cliente correspondente a ela.
  
            cont = 1; // caso seja verdadeira a condição
            system("cls");
            cout << "==============> Cliente " << linhas[0] << " <================ \n\n";
            cout << "Codigo: " << linhas[0] << "\n";
            cout << "Nome: " << linhas[1] << "\n";
            cout << "Telefone: " << linhas[2] << "\n";
            cout << "E-mail: " << linhas[3] << "\n";
            cout << "Idade: " << linhas[4] << "\n";
            cout << "CPF: " << linhas[5] << "\n";
            cout << "Produto: " << linhas[6] << "\n";
            cout << "======================================================== \n\n";
            break;
        }
    }
    
    if (cont == 0) { // condição explicado acima.
    system("cls");
        cout << " ___________________________\n";
        cout << "|Dados nao encontrados...   |\n";
        cout << "|___________________________|\n";
        buscar_dados(); // retorna ao inicio da busca.
	}
	int op; // Opções de pesquisar novamente ou sair desta ação de busca.
	cout << " ___________________________________________\n";
	cout << "|Digite 1 :                                 |\n";
	cout << "|Se Deseja buscar outro cliente             |\n";
	cout << "|                                           |\n";
	cout << "|Digite 0 :                                 |\n";
	cout << "|Se Deseja sair?                            |\n";
	cout << "|___________________________________________|\n";
	cout << "\n";
	cout << "--> ";
	cin >> op;	
    
    switch(op) {
    	case 1:
			buscar_dados();
			break;
		case 0:
			system("pause");
			break;
		default:
			cout << " ________________\n";
			cout << "|Opçao Invalida! |\n";
			cout << "|________________|\n";
			buscar_dados();
			break;
	} 
} 

void listar_todos() {
	
	system("cls"); // Limpar tela anterior e exibir parte de listar todos os clientes.
	

	  	cout << " ____________________________________________________________________\n";
  		cout << "|                                                                    |\n";
  		cout << "|                   -- Listar todos os Clientes  --                  |\n";
  		cout << "|____________________________________________________________________|\n\n";
	
	fstream fin; // Biblioteca ou Classe que cria obejtos ou variaveis para manipular arquivos externos.
    			// fin = file in = arquivo de entrada, fout = file out - arquivo de saida
    
    fin.open("clientes.txt", ios::in); // Abre e ler o arquivo se ele existir

    vector<string> linhas; // criado um vetor linhas do tipo string - ex. linhas[5]
    string linha, palavra, temp;
    
	  	cout << " ____________________________________________________________________\n";
  		cout << "|                                                                    |\n";
  		cout << "|                -- Lista de Clientes Cadastrados  --                |\n";
  		cout << "|____________________________________________________________________|\n\n";    
  
    while (fin >> temp) { // Verifica e ler os dados do arquivo, retorna true enquanto tive dados e false se atingir seu limite.
  
        linhas.clear(); // Remove todos os dados do vetor. ex. linhas = 0 ou nULL

        getline(fin, linha); // Busca os dados linha por linha
  
        stringstream s(linha); // separa os dados por linha
        
        char virgula = ','; // Variavel recebe a virgula como separador dos dados
  
        while (getline(s, palavra, virgula)) { // Cada linha tem varios dados que são sepadados por virgula e armazenado no vetor linhas.
			linhas.push_back(palavra); // ,1[0] , nome[1] , telefone[2] , email[3] , idade[4] , cpf[5]
        }

		cout << "==============> Cliente " << linhas[0] << " <================ \n\n";		
            cout << "Nome: " << linhas[1] << "\n";
            cout << "Telefone: " << linhas[2] << "\n";
            cout << "E-mail: " << linhas[3] << "\n";
            cout << "Idade: " << linhas[4] << "\n";
            cout << "CPF: " << linhas[5] << "\n";
			cout << "Produto: " << linhas[6] << "\n";      
        cout << "======================================================== \n\n";

    }
	
}
  
void atualizar() {
	
	system("cls"); // Limpar tela anterior e exibir parte de atualizar dados dos clientes.
	
	  	cout << " ____________________________________________________________________\n";
  		cout << "|                                                                    |\n";
  		cout << "|                 -- Atualizar dados dos Clientes  --                |\n";
  		cout << "|____________________________________________________________________|\n\n"; 	
    fstream fin, fout; // Biblioteca ou Classe que cria obejtos ou variaveis para manipular arquivos externos.
    				  // fin = file in = arquivo de entrada, fout = file out - arquivo de saida

    fin.open("clientes.txt", ios::in); // Abre e ler o arquivo se ele existir

    fout.open("attclientes.txt", ios::out); // Cria um novo arquivo se ele não existir, neste caso temporariamente até que seja atualizado, backup.
  
    int linhan1, linhan2, indice, sub, cont = 0; // se cont manter-se 0 nenhum dado ou arquivo foi encontrado.
    string linha, palavra, novo, temp;
    vector<string> linhas; // criado um vetor linhas do tipo string - ex. linhas[5]

    cout << " _____________________________________________________________\n";
    cout << "|Digite o codigo do cliente que deseja atualizar os dados:    |\n";
    cout << "|_____________________________________________________________|\n";
    cout << "\n";
    cout << "--> ";
    cin >> linhan1;
    cin.sync();


	  	cout << " ____________________________________________________________________\n";
  		cout << "|                                                                    |\n";
  		cout << "|          -- Alterar dados do cliente " << linhan1 << "  --         |\n";
  		cout << "|____________________________________________________________________|\n";
  		cout << "|                                                                    |\n";
  		cout << "|Digite 1 : Para alterar o nome                                      |\n";
  		cout << "|Digite 2 : Para alterar o telefone                                  |\n";
  		cout << "|Digite 3 : Para alterar o e-mail                                    |\n";
  		cout << "|Digite 4 : Para alterar a idade                                     |\n";
  		cout << "|Digite 5 : Para alterar o cpf                                       |\n";
  		cout << "|____________________________________________________________________|\n";
  		cout << "\n";
    cout << "--> ";
    cin >> sub;
  	cin.sync();
  	
  	switch(sub) { // As alterações dependem da escolha do usuário, a variavel indice vai indicar qual valor será alterado.
  		case 1:
  		    cout << " ___________________________________________________________\n";
  		    cout << "|              -- Alterar nome do cliente --                |\n";
  		    cout << "|___________________________________________________________|\n\n";
  			indice = 1;
  			break;
  		case 2:
  			cout << " ___________________________________________________________\n";
  		    cout << "|             -- Alterar telefone do cliente --             |\n";
  		    cout << "|___________________________________________________________|\n\n";
  			indice = 2;
  			break;
  		case 3:
  			cout << " ___________________________________________________________\n";
  		    cout << "|              -- Alterar e-mail do cliente --              |\n";
  		    cout << "|___________________________________________________________|\n\n";
  			indice = 3;
  			break;
  		case 4:
  			cout << " ___________________________________________________________\n";
  		    cout << "|              -- Alterar idade do cliente --               |\n";
  		    cout << "|___________________________________________________________|\n\n";
  			indice = 4;
  			break;
  		case 5:
  			cout << " ___________________________________________________________\n";
  		    cout << "|               -- Alterar CPF do cliente --                |\n";
  		    cout << "|___________________________________________________________|\n\n";
  			indice = 5;
  			break;
  		default:
	        cout << "Opçao Invalida!! \n";
	        atualizar();
			break;  			
	  }

    cout << " _______________________\n"; // Variavel que armazena as novas informações do cliente
    cout << "|Informe o novo dado:   |\n"; // Variavel que armazena as novas informações do cliente
    cout << "|_______________________|\n"; // Variavel que armazena as novas informações do cliente
    cout << "\n"; // Variavel que armazena as novas informações do cliente
    cout << "--> "; // Variavel que armazena as novas informações do cliente
    getline(cin, novo);

    while (fin >> temp) { // Verifica e ler os dados do arquivo, retorna true enquanto tive dados e false se atingir seu limite.
  
        linhas.clear(); // Remove todos os dados do vetor. ex. linhas = 0 ou nULL
  
        getline(fin, linha); // Busca os dados linha por linha
        stringstream s(linha); // separa os dados por linha
        
        char virgula = ','; // Variavel recebe a virgula como separador dos dados
  
        while (getline(s, palavra, virgula)) { // Cada linha tem varios dados que são sepadados por virgula e armazenado no vetor linhas.
            linhas.push_back(palavra); // ,1[0] , nome[1] , telefone[2] , email[3] , idade[4] , cpf[5]
        }
  
        linhan2 = stoi(linhas[0]); // variavel linhan2 recebe o valor da posição [0] - código - como string convertido para inteiro.
        
        int row_size = linhas.size(); // A variavel row_size armazena quantas linhas de dados contém no arquivo.
  
        if (linhan2 == linhan1) { // Se a variavel linhan2 for igual a variavel linhan1 informada pelo usuario, atualize o cliente correspondente a ela.
            cont = 1; // caso seja verdadeira a condição
            stringstream convert; // A variavel convert é um objeto ou classe que passa o valor informado pelo o usuario para string.

            convert << novo; // Valor informado pelo usuario sendo convertido.

            linhas[indice] = convert.str(); // O valor é copiado para o indice informado e substituindo o valor anterior.
  
            if (!fin.eof()) { // Escreve o dado atualizado no arquivo temporario criado anteriomente attclientes.
            	
            	fout << ",";
            	
                for (int i = 0; i < row_size - 1; i++) {

                    fout << linhas[i] << ",";
                }
  
                fout << linhas[row_size - 1] << "\n";
            }
        }
        else {
            if (!fin.eof()) { // Escreve os dados existentes no arquivo temporario criado anteriomente attclientes.
            	
            	fout << ",";
            	
                for (int i = 0; i < row_size - 1; i++) {
  
                    fout << linhas[i] << ",";
                }
  
                fout << linhas[row_size - 1] << "\n";
            }
        }
        if (fin.eof()) { // Verifica e ler os dados do arquivo, retorna true enquanto tive dados e false se atingir seu limite.
            break;
		}
    }
    if (cont == 1) { // Caso condição verdadeira
        cout << " ________________________________\n";
        cout << "|Dados atualizados com Sucesso!! |\n";
        cout << "|________________________________|\n";
	} else if (cont == 0) { // Caso condição falsa
    	cout << " ____________________________________________________________\n";
    	cout << "|Dados nao encontrados!! Nao foi Possivel atualizar dados!   |\n";
    	cout << "|____________________________________________________________|\n\n";
    	atualizar(); // Retorna ao inicio da função 
	}

    fin.close(); // fecha a leitura do arquivo.
    fout.close(); // fecha a escrita no arquivo.

    remove("clientes.txt"); // Remove o arquivo
    rename("attclientes.txt", "clientes.txt"); // Renomeia o aquivo temporario para o nome do arquivo principal com os dados atualizados.
} 

void excluir() {
	
	system("cls"); // Limpar tela anterior e exibir parte de excluir dados dos clientes.
	

	  	cout << " ____________________________________________________________________\n";
  		cout << "|                                                                    |\n";
  		cout << "|                   -- Excluir dados de Clientes  --                 |\n";
  		cout << "|____________________________________________________________________|\n\n";
    fstream fin, fout; // Biblioteca ou Classe que cria obejtos ou variaveis para manipular arquivos externos.
    				  // fin = file in = arquivo de entrada, fout = file out - arquivo de saida

    fin.open("clientes.txt", ios::in); // Abre e ler o arquivo se ele existir

    fout.open("attclientes.txt", ios::out); // Cria um novo arquivo se ele não existir, neste caso temporariamente até que seja atualizado, backup.
  
    int linhan1, linhan2, cont = 0; // se cont manter-se 0 nenhum dado ou arquivo foi encontrado.
    string linha, palavra, temp;
    vector<string> linhas; // criado um vetor linhas do tipo string - ex. linhas[5]

	cout << " _________________________________________________________\n";
	cout << "|Digite o codigo do cliente que deseja excluir os dados:  |\n";
	cout << "|_________________________________________________________|\n";
	cout << "\n";
	cout << "--> ";
    cin >> linhan1;

    while (fin >> temp) { // Verifica e ler os dados do arquivo, retorna true enquanto tive dados e false se atingir seu limite.
  
        linhas.clear(); // Remove todos os dados do vetor. ex. linhas = 0 ou nULL
        getline(fin, linha); // Busca os dados linha por linha
        stringstream s(linha);  // separa os dados por linha
  
  		char virgula = ','; // Variavel recebe a virgula como separador dos dados
  		
        while (getline(s, palavra, virgula)) { // Cada linha tem varios dados que são sepadados por virgula e armazenado no vetor linhas.
            linhas.push_back(palavra); // ,1[0] , nome[1] , telefone[2] , email[3] , idade[4] , cpf[5]
        }
  
        int row_size = linhas.size(); // A variavel row_size armazena quantas linhas de dados contém no arquivo.
        linhan2 = stoi(linhas[0]); // variavel linhan2 recebe o valor da posição [0] - código - como string convertido para inteiro.

        if (linhan2 != linhan1) { // Se a variavel linhan2 for igual a variavel linhan1 informada pelo usuario, exclui o cliente correspondente a ela
        	
            if (!fin.eof()) { // Escreve os dados existentes, exceto o dado deletado, no arquivo temporario criado anteriomente attclientes.
            	
            	fout << ",";
            	
                for (int i = 0; i < row_size - 1; i++) {
                    fout << linhas[i] << ",";
                }
                fout << linhas[row_size - 1] << "\n";
            }
            
        } else {
            cont = 1;
        }
        if (fin.eof()) // Verifica e ler os dados do arquivo, retorna true enquanto tive dados e false se atingir seu limite.
            break;
    }
    if (cont == 1) {
        cout << " ________________________________\n";
        cout << "|Dados escluidos com Sucesso!!   |\n";
        cout << "|________________________________|\n";
    } else {
    	cout << " ____________________________________________________________\n";
    	cout << "|Dados nao encontrados!! Nao foi Possivel excluir dados!     |\n";
    	cout << "|____________________________________________________________|\n\n";
	}
		
    fin.close(); // fecha a leitura do arquivo.
    fout.close(); // fecha a escrita no arquivo.

    remove("clientes.txt"); // Remove o arquivo
    rename("attclientes.txt", "clientes.txt"); // Renomeia o aquivo temporario para o nome do arquivo principal com os dados atualizados.
    
    int opex; // Opções de excluir novamente ou sair desta ação de deletar dados.
	cout << "Deseja excluir outro cliente? Digite 1. \n";
	cout << "Deseja sair? Digite 0. \n";
	cout << "=> ";
	cin >> opex;	
    
    switch(opex) {
    	case 1:
			excluir();
			break;
		case 0:
			system("pause");
			break;
		default:
			cout << " _______________\n";
			cout << "|Opçao Invalida!|\n";
			cout << "|_______________|\n";
			break;
	} 
	
}

void criar(){
	
    std::ofstream database("database.txt", std::ios::app);

    if (!database.is_open()) {
        std::cout << " ________________________________\n";
        std::cout << "|Erro ao abrir o banco de dados. |\n";
        std::cout << "|________________________________|\n";
    
    }
bool t3;
t3 = true;
    while (t3 == true) {
    	int cadastro;
	int cadastro1;
	cadastro = 0;
	cadastro= cadastro1;
   
  

  
    int codigo, idade;
    string nome, telefone, email, cpf;

    int x2;
    string senhac[10];
    
    string usuarioc[10];
    bool tl;
	tl = false;
	int lc, x1, y1, z1,num5, usuarios; 
	usuarios = 4;
	bool tt, tt1, intt, ul, sl; 
	intt = 0;
	int cont = 3;
	string senhaadm = "5006";
	x1 = 1;
	y1 = 1;
	z1 = 1;
std::ifstream readDatabase("database.txt");
string codin;
int codin1; 
    std::string line;
   while (std::getline(readDatabase, line)) {
        std::istringstream ss(line);
        std::string codigo;

        std::getline(ss, codigo, ',');
        codin = codigo;
    }
    std::istringstream(codin) >> codin1;
    
	 cout <<"---------------------------------------\n";
     cout <<"-      Digite um nome de usuário:     -\n" << "                ";
     cin >> usuarioc[x1];
     x2 = x1;
     intt = 1;
     
    system("cls");
    cout <<"---------------------------------------\n";
    cout <<"-   Digite uma senha para o usuário   -\n" << "                 ";
        const char BACKSPACE2 = 8;
    const char ENTER2 = 13;
     senhac[x1] = "";
    char ch2;
    
    while ((ch2 = _getch()) != ENTER2) {
        if (ch2 == BACKSPACE2) {
            if (senhac[x1].length() > 0) {
                cout << "\b \b";
                
            }
        } else {
            cout << '*';
            senhac[x1] += ch2;
        }
        
}

usuarios++;

    system("cls");
	do{
	cout << endl <<"---------------------------------------\n";
    cout <<"-  informe a senha de administrador   -\n"<< "                 ";
    
        const char BACKSPACE1 = 8;
    const char ENTER1 = 13;
    string senhateste = "";
    char ch1;
    
    while ((ch1 = _getch()) != ENTER1) {
        if (ch1 == BACKSPACE1) {
            if (senhateste.length() > 0) {
                cout << "\b \b";
                
            }
        } else {
            cout << '*';
            senhateste += ch1;
        }
    }

codigo1=codigo;
qwert =true;
    system("cls");
    
    if (senhateste == senhaadm){
    	    system("cls");
        cout <<"---------------------------------------\n";
	    cout <<"-   Usuário adicionado com sucesso !  -\n";
        cout <<"---------------------------------------\n";
       codin1 ++;
        cout << "Seu código é " << codin1 << endl << "Guarde ele! Será necessário para o login\n\n";


     tt=true;
	 tt1 = true;
	 system("pause");
	 	
	} else{
		
		if (cont > 0){
		    system("cls");
	    cout <<"---------------------------------------\n";
	    cout <<"-  Senha de administrador incorreta ! -\n";
	    cout <<"-            Tente novamente          -\n";
        cout <<"---------------------------------------\n";
        tt=false;
        cont --;
        
	} else{
		    system("cls");
	    cout <<"---------------------------------------\n";
	    cout <<"-  Senha de administrador incorreta ! -\n";
	    cout <<"- O programa encerrará por segurança  -\n";
        cout <<"---------------------------------------\n";
        break;
        system("pause");
    
		
	}
	}
}while(tt==false);
        

        

        database << codin1 << "," << usuarioc[x1] << "," << senhac[x1] << "," << endl; // Usamos uma vírgula para separar as entradas
        x1++;
   t3 = false;
    }

    database.close();
}
string usuario, senha;
void login(){


  std::ifstream readDatabase("database.txt");

    if (!readDatabase.is_open()) {
    	    system("cls");
        std::cout << "Erro ao abrir o banco de dados.\n";
        //return 1; // Encerrar o programa com código de erro
    }
        system("cls");
    cout <<"---------------------------------------\n";
     cout <<"-      Digite o nome de usuário:      -\n" << "                ";
     string inputUsuario;
	 cin>> inputUsuario;
	     system("cls");
	 cout <<"---------------------------------------\n";
    cout <<"-           Digite a senha:           -\n" << "                 ";
    
    const char BACKSPACE = 8;
    const char ENTER = 13;
    string inputSenha = "";
    char ch;
    
    while ((ch = _getch()) != ENTER) {
        if (ch == BACKSPACE) {
            if (inputSenha.length() > 0) {
                cout << "\b \b";
                
            }
        } else {
            cout << '*';
            inputSenha += ch;
        }
    }
        system("cls");
     cout << "\n---------------------------------------\n";
     cout << "-           Digite seu código         -\n" << "                ";
     string linhan1;
     cin >> linhan1;

    std::vector<std::string> usuarios;
    std::vector<std::string> codigos;
    std::vector<std::string> senhas;

    std::string line;
string w;
bool t5 = true;
    while (std::getline(readDatabase, line)) {
        std::istringstream ss(line);
        std::string usuario, senha, codigo;

        std::getline(ss, codigo, ',');
        std::getline(ss, usuario, ',');
        std::getline(ss, senha, ',');

        codigos.push_back(codigo);
        usuarios.push_back(usuario);
        senhas.push_back(senha);
    }
    for (size_t i = 0; i < 10000; ++i) {
    	
    	if (linhan1 == codigos[i]){
    		w = codigos[i];
    		t5 = true;
    		break;
		} else {
		t5=false;
		} 
}
system("pause");

if (t5 == false){
	    system("cls");
	cout << " _______________________________________\n";
	cout << "|código não encontrado, tente novamente |\n";
	cout << "|_______________________________________|\n";
	login();
}
int q;
std::istringstream(w) >> q;
    readDatabase.close();


    std::cout << "Conteudo do banco de dados:\n";
    
        if(inputUsuario!=usuarios[q-1]){
        cout << "-           usuário incorreto         -\n";
        cout << "-            tente novamente          -\n";
        login();
		}else{
			if(inputSenha != senhas[q-1]){
				
			    cout << "senha incorreta";
			    login();
        } else {
            cout << "Login bem-sucedido!" << endl;
        }
		
    }

 
}
void comprarProduto(vector<Produto>& produtos) {
    system("cls");
    string nomeProduto;
    cout << " _____________________________________________\n";
    cout << "|Digite o nome do produto que deseja comprar: |\n";
    cout << "|_____________________________________________|\n";
    cout << "\n";
    cout << "--> ";
    cin.ignore();
    getline(cin, nomeProduto);

    bool encontrado = false;

    // Abra o arquivo de banco de dados existente
    ifstream readDatabase("produto.txt");

    if (!readDatabase.is_open()) {
        cout << "Erro ao abrir o banco de dados.\n";
        return;
    }

    // Crie um novo arquivo temporário para reescrever os dados
    ofstream tempFile("temp_produto.txt");

    if (!tempFile.is_open()) {
        cout << "Erro ao criar arquivo temporário.\n";
        readDatabase.close();
        return;
    }

    string line;

    while (getline(readDatabase, line)) {
        istringstream ss(line);
        string codigo, nome, fornecedor, marca, preco, status;

        getline(ss, codigo, ',');
        getline(ss, nome, ',');
        getline(ss, fornecedor, ',');
        getline(ss, marca, ',');
        getline(ss, preco, ',');
        getline(ss, status, ',');

        if (nomeProduto == nome && status == "disponível") {
            status = "comprado";
            encontrado = true;
        }

        tempFile << codigo << "," << nome << "," << fornecedor << "," << marca << "," << preco << "," << status << "," << endl;
    }

    readDatabase.close();
    tempFile.close();

    // Se o produto foi encontrado e atualizado, renomeie o arquivo temporário para o nome original
    if (encontrado) {
        if (remove("produto.txt") != 0) {
            cout << "Erro ao atualizar o status do produto no banco de dados.\n";
            return;
        }
        if (rename("temp_produto.txt", "produto.txt") != 0) {
            cout << "Erro ao renomear arquivo temporário.\n";
        } else {
            cout << "Produto comprado com sucesso e status atualizado no banco de dados!" << endl;
        }
    } else {
        cout << "Produto não encontrado ou já foi comprado." << endl;
    }
}
void removerProduto(std::vector<Produto>& produtos) {
    system("cls");
    string codigoParaRemover;
    
    cout << "Insira um código para remover: ";
    cin >> codigoParaRemover;

    bool encontrado = false;

    // Abra o arquivo de banco de dados existente
    ifstream readDatabase("produto.txt");

    if (!readDatabase.is_open()) {
        cout << "Erro ao abrir o banco de dados.\n";
        return;
    }

    // Crie um novo arquivo temporário para reescrever os dados
    ofstream tempFile("temp_produto.txt");

    if (!tempFile.is_open()) {
        cout << "Erro ao criar arquivo temporário.\n";
        readDatabase.close();
        return;
    }

    string line;

    while (getline(readDatabase, line)) {
        istringstream ss(line);
        string codigo, nome, fornecedor, marca, preco, status;

        getline(ss, codigo, ',');
        getline(ss, nome, ',');
        getline(ss, fornecedor, ',');
        getline(ss, marca, ',');
        getline(ss, preco, ',');
        getline(ss, status, ',');

        if (codigoParaRemover == codigo) {
            encontrado = true;
            continue; // Não copie a linha do produto a ser removido para o arquivo temporário
        }

        tempFile << codigo << "," << nome << "," << fornecedor << "," << marca << "," << preco << "," << status << "," << endl;
    }

    readDatabase.close();
    tempFile.close();

    // Se o produto foi encontrado e removido, renomeie o arquivo temporário para o nome original
    if (encontrado) {
        if (remove("produto.txt") != 0) {
            cout << "Erro ao remover o produto do banco de dados.\n";
            return;
        }
        if (rename("temp_produto.txt", "produto.txt") != 0) {
            cout << "Erro ao renomear arquivo temporário.\n";
        } else {
            cout << "Produto removido com sucesso do banco de dados!" << endl;
        }
    } else {
        cout << "Produto não encontrado." << endl;
    }
}




void imprimirProdutosPorCategoria(const vector<Produto>& produtos) {
    system("cls");

    std::ifstream readDatabase("produto.txt");

    if (!readDatabase.is_open()) {
        std::cout << "Erro ao abrir o banco de dados.\n";
        return; // Encerrar o programa com código de erro
    }

    std::vector<std::string> nomes;
    std::vector<std::string> codigos;
    std::vector<std::string> fornecedors;
    std::vector<std::string> marcass;
    std::vector<std::string> precos;
    std::vector<std::string> statuss;

    std::string line;

    while (std::getline(readDatabase, line)) {
        std::istringstream ss(line);
        std::string codigo, nome, fornecedor, marca, preco, status;

        std::getline(ss, codigo, ',');
        std::getline(ss, nome, ',');
        std::getline(ss, fornecedor, ',');
        std::getline(ss, marca, ',');
        std::getline(ss, preco, ',');
        std::getline(ss, status, ',');

        codigos.push_back(codigo); // Adicione o código aos vetores
        nomes.push_back(nome);
        fornecedors.push_back(fornecedor);
        marcass.push_back(marca);
        precos.push_back(preco);
        statuss.push_back(status);
    }

    readDatabase.close();

    size_t totalProdutos = codigos.size(); // Obter o número total de produtos

    cout << " ______________________________________________________________________________________________________________________________________\n";
    cout << "|" << setw(5) << "Numero" << setw(9) << "|" << setw(15) << "Produto" << setw(9) << "|" << setw(15) << "Fornecedor" << setw(9) << "|" << setw(15) << "Marca" << setw(9) << "|" << setw(15) << "Preço" << setw(9) << "|" << setw(15) << "Status" << setw(0) << "        |\n";
    for (size_t i = 0; i < totalProdutos; i++) {
        cout << "|--------------------------------------------------------------------------------------------------------------------------------------|\n";
        cout << "|" << setw(6) << codigos[i] << setw(9) << "|" << setw(15) << nomes[i] << setw(9) << "|" << setw(15) << fornecedors[i] << setw(9) << "|" << setw(15) << marcass[i];
        cout << setw(9) << "|" << setw(15) << precos[i] << setw(9) << "|" << setw(15) << statuss[i] << setw(0) << "        |\n";
    }
    cout << "|______________________________________________________________________________________________________________________________________|\n";
}



set<string> codigosUtilizados;

void cadastrarProduto(vector<Produto>& produtos, const string& produto, set<string>& codigosUtilizados) {
    
    
    
	Produto novoProduto;
    	system("cls");
    /*novoProduto.codigo = gerarCodigoUnico(codigosUtilizados);
    codigosUtilizados.insert(novoProduto.codigo);*/
    
    std::ifstream readDatabase("produto.txt"); // Lê o arquivo de produto existente
    string codi;
    int codi1 = 0; // Inicializa com zero para o caso de não haver registros ainda

    string line;
    while (getline(readDatabase, line)) {
        istringstream ss(line);
        string codigo;

        getline(ss, codigo, ',');
        codi = codigo;
        
         istringstream(codi) >> codi1;
          
    }
   
    readDatabase.close();

    ofstream fout("produto.txt", ios::app); // Abre o arquivo para adicionar dados

    if (!fout.is_open()) {
        cout << "Erro ao abrir o arquivo.\n";
        return;
    }
    
    
    int codigoNovo; // Incremento do contador para obter o próximo código
    codi1++;

    cout << "===========> Adicionar Produto " << codi1 << " <==============\n\n";
    cout << "Digite o nome do novo produto: ";
    cin.ignore();
    getline(cin, novoProduto.nome);
    
    cout << "Digite o nome do fornecedor: ";
    getline(cin, novoProduto.fornecedor);
    
    cout << "Digite a marca do novo produto: ";
    getline(cin, novoProduto.marca);
    
    
    cout << "Digite o preço do novo produto: ";
    cin >> novoProduto.preco;
    
    novoProduto.status = "disponível";
    
    fout << codi1 << "," << novoProduto.nome << "," << novoProduto.fornecedor << "," << novoProduto.marca << ","<< novoProduto.preco << "," << novoProduto.status << "," <<endl;

    fout.close();
        
    //produtos.push_back(novoProduto);
    cout << "Produto cadastrado com sucesso!" << endl;
}
void exibirMenu() {
	system("cls");
    system("cls");
    cout << " __________________________________ \n";
    cout << "|-------------LISTAGEM-------------|\n";
    cout << "|                                  |\n";
    cout << "|             DIGITE:              |\n";
    cout << "|                                  |\n";
    cout << "|         1- para listar           |" << endl;
    cout << "|                                  |" << endl;
    cout << "|__________________________________|\n";
    cout << "\n";
    cout << "Digite o número aqui: \n";
    cout << "--> ";
}

void imprimirSubcategoriasHardware(){
		system("cls");
	   system("cls");
    cout << " __________________________________ \n";
    cout << "|-------------LISTAGEM-------------|\n";
    cout << "|                                  |\n";
    cout << "|             DIGITE:              |\n";
    cout << "|                                  |\n";
    cout << "|         1- para listar           |" << endl;
    cout << "|__________________________________|\n";
    cout << "\n";
    cout << "Digite o número aqui: \n";
    cout << "--> ";
}

void escolha(){
	
	   system("cls");
    cout << " _________________________________ \n";
    cout << "|-------------PRODUTOS------------|\n";
    cout << "|                                 |\n";
    cout << "|              DIGITE:            |\n";
    cout << "|                                 |\n";
    cout << "|1. Listar produtos               |" << endl;
    cout << "|2. Remover produto               |" << endl;
    cout << "|3. Cadastrar produto             |" << endl;
    cout << "|4. Comprar produto               |" << endl;
    cout << "|                                 |" << endl;
    cout << "|5. Voltar                        |" << endl;
    cout << "|_________________________________|\n";
    cout << "\n";
    cout << "Digite o número aqui: \n";
    cout << "--> ";

}

void clearScreen() {
    system("cls");
}
void MenuFornecedores() {

    int escolha_fornecedor;
    int atual = 1;  
    
    std::ifstream readDatabase("fornecedores.txt");
	string codin;
 	Fornecedor l;
    std::string line;
   	while (std::getline(readDatabase, line)) {
        std::istringstream ss(line);
        std::string codigo;

        std::getline(ss, codigo, ',');
        codin = codigo;
    }
    std::istringstream(codin) >> l.codigo;
    
    
	//sistema para repetir o menu.
    do {
   	    system("cls");
	    cout << " __________________________________ " << endl;
		cout << "|-----------FORNECEDORES-----------|" << endl;
		cout << "|                                  |" << endl;
		cout << "|             DIGITE:              |" << endl;
 		cout << "|                                  |" << endl;
    	cout << "|1. Cadastrar Fornecedor           |" << endl;
    	cout << "|2. Listar Fornecedores            |" << endl;
    	cout << "|3. Pesquisar Fornecedor           |" << endl;
    	cout << "|4. Excluir Fornecedor             |" << endl;
 	    cout << "|                                  |" << endl;
 	    cout << "|5. Voltar                         |" << endl;
	    cout << "|__________________________________|" << endl;
   		cout << "Digite o número aqui: \n";
    	cout << "--> ";
        cin >> escolha_fornecedor;
        cin.ignore();

		//coleta da opção desejada
        switch(escolha_fornecedor) {
        	//caso o usuário escolha cadastrar um Fornecedor.
            case 1: {
            	
            	system("cls");
                
                
                cout << " ___________________________________ " << endl;
                cout << "|                                   | " << endl;                
                cout << "|    Insira o nome do Fornecedor :  | " << endl;
                cout << "|___________________________________| " << endl;
                cout<<"\n";
                cout<<"-> ";
                getline(cin, l.nome);
                 	system("cls");
                cout << " ___________________________________ " << endl;
                cout << "|                                   | " << endl;
                cout << "|    Insira o CNPJ do Fornecedor :  | " << endl;
                cout << "|___________________________________| " << endl;
                                cout<<"\n";
                cout<<"-> ";
                getline(cin, l.cnpj); 
                 	system("cls");
                cout << " ___________________________________ " << endl;
                cout << "|                                   | " << endl;
                cout << "|  Insira o contato do Fornecedor : | " << endl;
                cout << "|___________________________________| " << endl;
                                cout<<"\n";
                cout<<"-> ";
                getline(cin, l.contato); 
                 	system("cls");
                cout << " ___________________________________ " << endl;
                cout << "|                                   | " << endl;
                cout << "|  Insira o Produto do Fornecedor  :| " << endl;
                cout << "|___________________________________| " << endl;
                                cout<<"\n";
                cout<<"-> ";
                getline(cin, l.produto); 
                
                l.codigo ++;
                
                 std::ofstream database("fornecedores.txt", std::ios::app);

    if (!database.is_open()) {
        std::cout << "Erro ao abrir o banco de dados.\n";
    
    }
    
    
    database << l.codigo << "," << l.nome << "," << l.cnpj << "," << l.contato << "," << l.produto << endl ; // Usamos uma vírgula para separar as entradas
    
    database.close();
                
                
                
                
                
                
                
                
                Sleep(1000);
                
               if (atual < NUM_FornecedorS) {
                    Fornecedors[atual++] = l;
                    
                //se tiver 100 fornecedores, retorna erro.
                } else {
                    cout << "Limite de Fornecedors atingido!" << endl;
                    Sleep(2000); 
                } 
                
                break;
            }
           	//caso o usuário escolha listar Fornecedors.
            case 2: {
            	
            	system("cls");
            	     
				string voltar;
					       	
				//caso não tenha sido cadastrado nenhum fornecedor.
            	if(l.codigo < 1){
            		cout << " ______________________________" << endl;
            		cout << "|                              |" << endl;
            		cout << "| NENHUM FORNECEDOR CADASTRADO |" << endl;
            		cout << "|        ATÉ O MOMENTO!        |" << endl;
            		cout << "|______________________________|" << endl << endl;
            		
					cout << "Pressione qualquer para retornar";
					system("pause > nul");
						
				//listagem de fornecedores.
				} else {
					
					
								 std::ifstream readDatabase("fornecedores.txt");

		    if (!readDatabase.is_open()) {
		        std::cout << "Erro ao abrir o banco de dados.\n";
		        //return 1; // Encerrar o programa com código de erro
		    }
						
			std::vector<std::string> nomes;
		    std::vector<std::string> codigos;
		    std::vector<std::string> cnpjs;
		    std::vector<std::string> contatos;
		    std::vector<std::string> produtos;
		
		    std::string line;
		string w;
		bool t5 = true;
		    while (std::getline(readDatabase, line)) {
		        std::istringstream ss(line);
		        std::string codigo, nome, cnpj,contato, produto;
		
		        std::getline(ss, codigo, ',');
		        std::getline(ss, nome, ',');
		        std::getline(ss, cnpj, ',');
				std::getline(ss, contato, ',');
		        std::getline(ss, produto, ',');
		
		        codigos.push_back(codigo);
		        nomes.push_back(nome);
		        cnpjs.push_back(cnpj);
		        contatos.push_back(contato);
		        produtos.push_back(produto);
		    } 
				
				//procurar o fornecedor informado.
                
					cout << " _______________________________________________________________________________________________________\n";
					cout << "|" << setw(6) << "Cod." << setw(9) << "|" << setw(15) << setw(9)<< "Nome" << setw(9)<<"|"<<setw(15) << "CNPJ" << setw(9)<<"|"<<setw(15) << "Contato" << setw(9)<<"|"<<setw(15) << "Produto" << setw(9)<<"|\n";
					for (int i = 0; i < l.codigo; i++) { 
				 	cout << "|-------------------------------------------------------------------------------------------------------|\n";
					cout << "|" << setw(7) << codigos[i] << setw(8) << "|" << setw(9) << nomes[i] << setw(9) << "|" << setw(15) << cnpjs[i] << setw(9) << "|" << setw(15) << contatos[i] << setw(9) << "|" << setw(15) << produtos[i] << "       |\n";
				    }
				    cout << "|_______________________________________________________________________________________________________|\n\n";
            	
            		cout << "Pressione qualquer para retornar";
                	system("pause > nul");
                
				break;	
				}
			}
            //caso o usuário escolha emprestar um Fornecedor.
            case 3: {
            	
            	system("cls");
            	
                string nome1;
                bool encontrado = false;
                
                cout << " Digite o nome ou cnpj do fornecedor que você deseja encontrar: ";
                getline(cin, nome1);
                cin.sync();
				
				
				
				 std::ifstream readDatabase("fornecedores.txt");

    if (!readDatabase.is_open()) {
        std::cout << "Erro ao abrir o banco de dados.\n";
        //return 1; // Encerrar o programa com código de erro
    }
				
	std::vector<std::string> nomes;
    std::vector<std::string> codigos;
    std::vector<std::string> cnpjs;
    std::vector<std::string> contatos;
    std::vector<std::string> produtos;

    std::string line;
string w;
bool t5 = true;
    while (std::getline(readDatabase, line)) {
        std::istringstream ss(line);
        std::string codigo, nome, cnpj,contato, produto;

        std::getline(ss, codigo, ',');
        std::getline(ss, nome, ',');
        std::getline(ss, cnpj, ',');
		std::getline(ss, contato, ',');
        std::getline(ss, produto, ',');

        codigos.push_back(codigo);
        nomes.push_back(nome);
        cnpjs.push_back(cnpj);
        contatos.push_back(contato);
        produtos.push_back(produto);
    }
				
				//procurar o fornecedor informado.
                for (int i = 0; i < 1000000; i++) {
                    if (nome1 == nomes[i] || nome1 == cnpjs[i]) {
                        encontrado = true;
                        cout << "| " << nomes[i] << " | " << cnpjs[i] << " | " << contatos[i] << " | " << produtos[i] << endl;
         break;
					
						system("pause > nul");
                    }
                }
                system("pause");
                //se o Fornecedor não for encontrado, é retornado erro.
                if (!encontrado) {
                    cout << " Fornecedor não encontrado!" << endl;
                    Sleep(2000);
                }
                
                break;
            }
            //caso o usuário deseje excluir um Fornecedor.
            case 4: {
            	
            	system("cls");
            	
            	//solicitado o título do Fornecedor.
                string nome;
                cout << " Digite o nome do Fornecedor que você deseja excluir: ";
                getline(cin, nome);
                
                //conferir o Fornecedor.
                int indice = -1;
                
                for (int i = 0; i < atual; i++) {
                    if (Fornecedors[i].nome == nome) {
                        indice = i;
                    }
                }
                
                if (indice != -1) {
                    for (int i = indice; i < atual - 1; i++) {
                        Fornecedors[i] = Fornecedors[i + 1];
                    }
                    
                    atual--;
                    cout << " Fornecedor excluído com sucesso!" << endl;
                    
                } else {
                    cout << " Fornecedor não encontrado!" << endl;
                }
                Sleep(2000);
                break;
            }
            //caso o usuário deseje sair do sistema.
            case 5: {
                break;
            }
            //caso o usuário digite uma opção inválida, é retornado erro.
            default:
                cout << " Opção inválida!" << endl;
                Sleep(2000);
        }
    //encerrar caso seja digitado 5.
    } while(escolha_fornecedor != 5);

}

void exibirParceiros() {
    system("cls");
    cout << " _________________________\n";
    cout << "|         ______          |\n";
    cout << "|          MENU           |\n";
    cout << "|_________________________|\n";
    cout << "|                         |\n";
    cout << "|1. Produtos              |" << endl;
    cout << "|2. Clientes              |" << endl;
    cout << "|3. Fornecedores          |" << endl; 
    cout << "|4. Parceiros             |" << endl;
    cout << "|5. Ajuda                 |" << endl;
    cout << "|6. Sobre                 |" << endl;
    cout << "|                         |" << endl;
    cout << "|7. Sair                  |" << endl;
    cout << "|_________________________|\n";
    cout << "Digite o número aqui: \n";
    cout << "--> ";
}

void exibirParceirosHardware() {
    system("cls");
      

    cout << " __________________________________ " << endl;
	cout << "|-------------PARCEIROS------------|" << endl;
	cout << "|                                  |" << endl;
	cout << "|             DIGITE:              |" << endl;
 	cout << "|                                  |" << endl;
   	cout << "|1. Cadastrar Parceiro             |" << endl;
   	cout << "|2. Listar Parceiros               |" << endl;
   	cout << "|3. Pesquisar Parceiros            |" << endl;
   	cout << "|4. Listar Produtos                |" << endl;
   	cout << "|5. Excluir Fornecedor             |" << endl;
    cout << "|                                  |" << endl;
    cout << "|6. Voltar                         |" << endl;
    cout << "|__________________________________|" << endl;
    cout << "Digite o número aqui: \n";
    cout << "--> ";
}

void adicionarAvaliacao() {
    system("cls");
    Avaliacao avaliacao;
    
    cout << "AVALIAÇÃO\n";
    cout << "Nome do cliente: ";
    getline(cin, avaliacao.nomeCliente);
    cout << "Pontuação (de 1 a 5): ";
    cin >> avaliacao.pontuacao;
    
    switch (avaliacao.pontuacao) {
    	case 1:
    		cout << "(Sua avaliação: *)\n";
    	break;
       	case 2:
    		cout << "(Sua avaliação: **)\n";
    	break;
  	   	case 3:
    		cout << "(Sua avaliação: ***)\n";
    	break;
       	case 4:
    		cout << "(Sua avaliação: ****)\n";
    	break;
       	case 5:
   		 	cout << "(Sua avaliação: *****)\n";
    	break;
    	default:
    		cout << "Avaliação fora do limite.\n";
    	break;
    	
	}
    
    cin.ignore();
    cout << "Comentário: ";
    getline(cin, avaliacao.comentario);
    
    avaliacoes[numAvaliacoes++] = avaliacao;
    cout << "Avaliação adicionada com sucesso!\n";
    cout << "Aperte a tecla enter para voltar ao menu...\n";
    system("pause > nul");
}

void exibirFAQ() {
	system("cls");
	cout << " _____________________________\n";
    cout << "| Q?: Sua pergunta aqui      |\n";
    cout << "| A?: Digite sua pergunta    |\n";
    cout << "|     abaixo e informe seu   |\n";
    cout << "|     email para receber     |\n";
    cout << "|     uma resposta breve.    |\n";
    cout << "|____________________________|\n";
    
    string pergunta;
    cout << "Digite o a sua dúvida: \n";
    cout << "--> ";
    getline(cin, pergunta);
    
    string email;
    cout << "Informe seu email: ";
    cout << "--> ";
    cin >> email;
    
  

    cout << "\nPergunta enviada! Aguarde uma resposta no seu email.\n";
    Sleep(2000);
}

void comoUsarSistema() {
    system("cls");
    cout << " _____________________________\n";
    cout << "|         COMO USAR O         |\n";
    cout << "|           SISTEMA           |\n";
    cout << "|_____________________________|\n";
    
    cout << "1. Selecione uma opção do menu principal digitando o número correspondente.\n";
    cout << "2. Em cada submenu, siga as instruções para realizar as operações desejadas.\n";
    cout << "3. Para retornar ao menu anterior, selecione a opção 'Voltar'.\n";
    cout << "4. Você pode navegar pelo sistema e utilizar suas funcionalidades.\n";
    
    system("pause > nul");
}

void exibirSobre() {
    system("cls");
    cout << " _________________________\n";
    cout << "|          SOBRE          |\n";
    cout << "|_________________________|\n";
    cout << "                         \n";
    cout << "  Versão do Sistema: 1.0               \n";
    cout << "                         \n";
    cout << "                         \n";
    cout << "                         \n";
    cout << "    Desenvolvido por:       \n";
    cout << "                                  \n";
    cout << " - André Cardoso Pereira \n";
    cout << " - Eduarda Vieira Gonçalves \n";
    cout << " - Ian Dos Reis Novais  \n";
    cout << " - Isaque Gomes Azevedo \n";
    cout << " - Tiago Gonçalves Alcântara \n";
    cout << "                         \n";
    cout << " Sobre o Sistema:        \n";
    cout << "   O sistema GGHARDWARE foi criado para atender à necessidade urgente de automatizar o gerenciamento de informações devido ao crescente volume de notas e documentos acumulados. A empresa enfrentava dificuldades em localizar informações específicas devido à lentidão nas buscas e processamento manual.\n";
    cout << "                         \n";
    cout << "   Diante deste cenário, os desenvolvedores reconheceram a importância de uma solução eficiente e funcional. O Sistema GGHARDWARE foi projetado para superar esses desafios, proporcionando um ambiente de gerenciamento de informações mais ágil, intuitivo e amigável para os usuários.\n";
    cout << "                         \n";
    cout << " Funcionalidades em Geral:\n";
    cout << "   O Sistema GGHARDWARE oferece um conjunto de funcionalidades destinadas a otimizar o gerenciamento de informações, permitindo uma manipulação mais eficaz e rápida dos dados acumulados.\n";
    cout << "   Nele você se cadastra inicialmente para acessar o sistema.\n";
    cout << "   É direcionado a tela de boas-vindas e em seguida ao menu principal.\n";
    cout << "  No Menu Principal você tem acesso a Produtos, Clientes, Fornecedores, Parceiros, Ajuda e Sobre.\n";
    cout << "  A cada submenu você é direcionado às funcionalidades indicadas nele, que vão desde visualizar/pesquisar/excluir produtos, fornecedores, parceiros a cadastros e informações de contato e histórico de compras entre outros.\n";
    cout << "                         \n";
    cout << " Direitos Reservados:    \n";
    cout << "   Os direitos autorais e de propriedade intelectual deste sistema são reservados aos desenvolvedores listados acima. Qualquer reprodução, distribuição ou uso não autorizado do sistema ou de suas funcionalidades está sujeito a ações legais.\n";
    cout << "   O Sistema GGHARDWARE é um exemplo de inovação direcionada a resolver problemas reais nas operações empresariais. Sua versatilidade e eficiência têm como objetivo melhorar a produtividade e a eficácia no gerenciamento de informações.\n";
    cout << "                         \n";
    cout << "Pressione a tecla Enter para retornar ao Menu Principal...";
    cin.get();
}


int main() {
    setlocale(LC_ALL, "Portuguese");



while(true){
	
	
	

    int opcaoPrincipal;

    const int animationDelay = 100; // Em milissegundos
    const int numPoints = 10;
    const int maxDots = 3;
    const int animationTime = 5000; // 10 segundos em milissegundos

    clearScreen();

    clock_t startTime = clock();

    while (!_kbhit()) {
        clock_t currentTime = clock();
        if (static_cast<double>(currentTime - startTime) / CLOCKS_PER_SEC * 1000 > animationTime) {
            break;
        }

        for (int i = 0; i < numPoints; ++i) {
            clearScreen();

            cout<<"\n";
            cout << "Carregando ";

            
            for (int j = 0; j < numPoints; ++j) {
                if (j == i) {
                    cout << string(maxDots, '.');
                } else {
                    cout << " ";
                }
            }

            Sleep(animationDelay);
        }
    }

Sleep(300);
    cout << "     " << endl;
    cout << "     " << endl;
    cout << "     " << endl;
    cout << "     " << endl;
    cout << "_____________ o ____" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

    	system("cls");
    cout << "     " << endl;
    cout << "     " << endl;
    cout << "     " << endl;
    cout << "     " << endl;
    cout << "_____________ o ___<" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

    	system("cls");
    cout << "     " << endl;
    cout << "     " << endl;
    cout << "     " << endl;
    cout << "     " << endl;
    cout << "_____________ o ___<" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

    	system("cls");
    cout << "                   o" << endl;
    cout << "_____________ o __<(" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

   		system("cls");
    cout << "                   _" << endl;
    cout << "                  o)" << endl;
    cout << "_____________ o _<(_" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
    	Sleep(300);

    	system("cls");
    cout << "                   ." << endl;
    cout << "                  __" << endl;
    cout << "                 o)_" << endl;
    cout << "_____________ o <(__" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

    	system("cls");
    cout << "                  .-" << endl;
    cout << "                 __|" << endl;
    cout << "                o)__" << endl;
    cout << "_____________ o (__(" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
       Sleep(300);

   		system("cls");
    cout << "                   (" << endl;
    cout << "                 .--" << endl;
    cout << "                __||" << endl;
    cout << "               o)__" << endl;
    cout << "_____________ o __(*" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);
 
   		system("cls");
    cout << "                   (" << endl;
    cout << "                  ()" << endl;
    cout << "                .--." << endl;
    cout << "               __||_" << endl;
    cout << "              ~)__ |" << endl;
    cout << "_____________.o _(*)" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

   		system("cls");
    cout << "                  (" << endl;
    cout << "                 (  " << endl;
    cout << "               .--. " << endl;
    cout << "              __||__" << endl;
    cout << "             o)__ |_" << endl;
    cout << "____________< o (*)_" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
     	Sleep(300);

    	system("cls");
    cout << "                  (" << endl;
    cout << "                  ) " << endl;
    cout << "              .--.  " << endl;
    cout << "             __||___" << endl;
    cout << "            o)__ |_ " << endl;
    cout << "___________<( o *)_(" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

  	    system("cls");
    cout << "                   (" << endl;
    cout << "                (   " << endl;
    cout << "               ()   " << endl;
    cout << "             .--.  -" << endl;
    cout << "            __||___|" << endl;
    cout << "           o)__ |_ |" << endl;
    cout << "__________<(  o )_(*" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

    	system("cls");
    cout << "                  (" << endl;
    cout << "                 ) )" << endl;
    cout << "              (     " << endl;
    cout << "            .--.  --" << endl;
    cout << "           __||___|[" << endl;
    cout << "          o)__ |_ | " << endl;
    cout << "_________<(_  o _(*)" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

   		system("cls");
    cout << "                 ) )" << endl;
    cout << "              ()    " << endl;
    cout << "           .--.  ---" << endl;
    cout << "          __||___|[_" << endl;
    cout << "         o)__ |_ | ." << endl;
    cout << "________<(_ ( o (*)_" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

   		system("cls");
    cout << "                  (" << endl;
    cout << "                (  )" << endl;
    cout << "             ( ) )  " << endl;
    cout << "            ()      " << endl;
    cout << "          .--.  ----" << endl;
    cout << "         __||___|[_]" << endl;
    cout << "        o)__ |_ | .." << endl;
    cout << "_______<(__(* o *)_~" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

    	system("cls");
    cout << "                  (" << endl;
    cout << "                   )" << endl;
    cout << "             (   )  " << endl;
    cout << "            (       " << endl;
    cout << "         .--.  -----" << endl;
    cout << "        __||___|[_]|" << endl;
    cout << "       o)__ |_ | ..|" << endl;
    cout << "______<(__(*) o )_~_" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

   		system("cls");
    cout << "              (  )" << endl;
    cout << "           ( )      " << endl;
    cout << "          (         " << endl;
    cout << "        .--.  ----- " << endl;
    cout << "       __||___|[_]| " << endl;
    cout << "      o)__ |_ | ..|=" << endl;
    cout << "_____<(__(*)_ o _~__" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

    	system("cls");
    cout << "               (" << endl;
    cout << "                )  )" << endl;
    cout << "            )       " << endl;
    cout << "         ()        _" << endl;
    cout << "       .--.  ----- |" << endl;
    cout << "      __||___|[_]| |" << endl;
    cout << "     o)__ |_ | ..|=|" << endl;
    cout << "____<(__(*)_( o ~___" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

    	system("cls");
    cout << "               (" << endl;
    cout << "             (  )   " << endl;
    cout << "          (   )     " << endl;
    cout << "          )       __" << endl;
    cout << "      .--.  ----- | " << endl;
    cout << "     __||___|[_]| |." << endl;
    cout << "    o)__ |_ | ..|=|_" << endl;
    cout << "___<(__(*)_(* o ____" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
        Sleep(300);

   		system("cls");
    cout << "             (      " << endl;
    cout << "           (  )  )  " << endl;
    cout << "        ( ) )       " << endl;
    cout << "       ()        ___" << endl;
    cout << "     .--.  ----- |  " << endl;
    cout << "    __||___|[_]| |.|" << endl;
    cout << "   o)__ |_ | ..|=|_|" << endl;
    cout << "__<(__(*)_(*) o ____" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

    system("cls");

    cout << "             (      " << endl;
    cout << "                )   " << endl;
    cout << "        ( )         " << endl;
    cout << "       (        ____" << endl;
    cout << "    .--.  ----- |  _" << endl;
    cout << "   __||___|[_]| |.|#" << endl;
    cout << "  o)__ |_ | ..|=|_|-" << endl;
    cout << "_<(__(*)_(*)_ o ___~" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
    
        Sleep(300);

    system("cls");

    cout << "           (        " << endl;
    cout << "         (  )  )    " << endl;
    cout << "      ( ) )         " << endl;
    cout << "     ()        ____." << endl;
    cout << "   .--.  ----- |  _ " << endl;
    cout << "  __||___|[_]| |.|#|" << endl;
    cout << " o)__ |_ | ..|=|_|-|" << endl;
    cout << "<(__(*)_(*)_~ o __~(" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
    
        Sleep(300);

    system("cls");

    cout << "            )  )    " << endl;
    cout << "      () )          " << endl;
    cout << "     (        ____._" << endl;
    cout << "  .--.  ----- |  _  " << endl;
    cout << " __||___|[_]| |.|#|." << endl;
    cout << "o)__ |_ | ..|=|_|-|_" << endl;
    cout << "(__(*)_(*)_~_ o _~(*" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
    
        Sleep(300);

    system("cls");

    cout << "         ( )        " << endl;
    cout << "       (  )         " << endl;
    cout << "      ) )           " << endl;
    cout << "   ()        ____.__" << endl;
    cout << " .--.  ----- |  _  -" << endl;
    cout << "__||___|[_]| |.|#|.[" << endl;
    cout << ")__ |_ | ..|=|_|-|__" << endl;
    cout << "__(*)_(*)_~__ o ~(*" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
    
        Sleep(300);

    system("cls");

    cout << "           )        " << endl;
    cout << "       (  )         " << endl;
    cout << "   (  ) )           " << endl;
    cout << "    )       ____.___" << endl;
    cout << ".--.  ----- |  _  - " << endl;
    cout << "_||___|[_]| |.|#|.[]." << endl;
    cout << "__ |_ | ..|=|_|-|___" << endl;
    cout << "_(*)_(*)_~___ o (*)_" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
    
        Sleep(300);

    system("cls");

    cout << "       (            " << endl;
    cout << "     (  )  )        " << endl;
    cout << "  ( ) )             " << endl;
    cout << " ()        ____.____" << endl;
    cout << "--.  ----- |  _  - a" << endl;
    cout << "||___|[_]| |.|#|.[]." << endl;
    cout << "_ |_ | ..|=|_|-|____" << endl;
    cout << "(*)_(*)_~____ o *)__" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
    
        Sleep(300);

    system("cls");

    cout << "      ( )           " << endl;
    cout << "    (               " << endl;
    cout << " (  )               " << endl;
    cout << " )        ____._____" << endl;
    cout << "-.  ----- |  _  - a:" << endl;
    cout << "|___|[_]| |.|#|.[].[" << endl;
    cout << " |_ | ..|=|_|-|_____" << endl;
    cout << "*)_(*)_~____  o )___" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
    
        Sleep(300);

    system("cls");

    cout << "     (              " << endl;
    cout << "   (  )  )          " << endl;
    cout << "( ) )               " << endl;
    cout << ")        ____.______" << endl;
    cout << ".  ----- |  _  - a:f" << endl;
    cout << "___|[_]| |.|#|.[].[]" << endl;
    cout << "|_ | ..|=|_|-|______" << endl;
    cout << ")_(*)_~_____~ o ____" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
        Sleep(300);

    system("cls");
        cout << "     ( )            " << endl;
    cout << "   (  )             " << endl;
    cout << " ( )                " << endl;
    cout << "        ____.______." << endl;
    cout << "  ----- |  _  - a:f " << endl;
    cout << "__|[_]| |.|#|.[].[]."<< endl;
    cout << "_ | ..|=|_|-|_______" << endl;
    cout << "_(*)_~_____~( o ___(" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
            Sleep(300);

    system("cls");
       cout << " (  )               " << endl;
    cout << ") )                 " << endl;
    cout << "       ____.______._" << endl;
    cout << " ----- |  _  - a:f -" << endl;
    cout << "_|[_]| |.|#|.[].[].[" << endl;
    cout << " | ..|=|_|-|________" << endl;
    cout << "(*)_~_____~(* o __(*" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
                Sleep(300);

    system("cls");
        cout << "  (                 " << endl;
    cout << "(                   " << endl;
    cout << " )                  " << endl;
    cout << "      ____.______.__" << endl;
    cout << "----- |  _  - a:f - " << endl;
    cout << "|[_]| |.|#|.[].[].[]" << endl;
    cout << "| ..|=|_|-|_________" << endl;
    cout << "*)_~_____~(*) o _(*)" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
                    Sleep(300);

    system("cls");
       cout << " (                  " << endl;
    cout << ")                   " << endl;
    cout << "    ____.______.___" << endl;
    cout << "---- |  _  - a:f -  " << endl;
    cout << "[_]| |.|#|.[].[].[].[" << endl;
    cout << " ..|=|_|-|__________" << endl;
    cout << ")_~_____~(*)_ o (*)_" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
                    Sleep(300);

    system("cls");
        cout << " (                  " << endl;
    cout << " )                  " << endl;
    cout << "    ____.______.____" << endl;
    cout << "--- |  _  - a:f -   " << endl;
    cout << "_]| |.|#|.[].[].[].." << endl;
    cout << "..|=|_|-|___________" << endl;
    cout << "_~_____~(*)__ o *)__" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
                        Sleep(300);

    system("cls");
        cout << ")                   " << endl;
    cout << "                    " << endl;
    cout << "   ____.______._____" << endl;
    cout << "-- |  _  - a:f -   |" << endl;
    cout << "]| |.|#|.[].[].[]..|" << endl;
    cout << ".|=|_|-|___________|" << endl;
    cout << "~_____~(*)___ o )___" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
                            Sleep(300);

    system("cls");
        cout << "  ____.______._____" << endl;
    cout << "- |  _  - a:f -   |" << endl;
    cout << "| |.|#|.[].[].[]..|" << endl;
    cout << "|=|_|-|___________|" << endl;
    cout << "_____~(*)____ o ____" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
                                Sleep(300);

    system("cls");
    cout << "  ____.______._____" << endl;
    cout << " |  _  - a:f -   |" << endl;
    cout << " |.|#|.[].[].[]..|" << endl;
    cout << "=|_|-|___________|" << endl;
    cout << "____~(*)____( o ____" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
                                    Sleep(300);

    system("cls");
        cout << "  ____.______._____" << endl;
    cout << " |  _  - a:f -   |" << endl;
    cout << " |.|#|.[].[].[]..|" << endl;
    cout << "=|_|-|___________|" << endl;
    cout << "____~(*)____( o ____" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
 Sleep(300);

    system("cls");
        cout << "  ____.______._____" << endl;
    cout << " | ._  - a:f -   |" << endl;
    cout << " |.: |.[].[].[]..|" << endl;
    cout << "=|_: |___________|" << endl;
    cout << "____-(*)____( o ____" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
    Sleep(300);

    system("cls");
        cout << "                    " << endl;
    cout << "                    " << endl;
    cout << " ____.______._____  " << endl;
    cout << " | ._  - a:f -   |  " << endl;
    cout << " |.: |.[].[].[]..|  " << endl;
    cout << "=|_: |___________|  " << endl;
    cout << "____-(*)____( o ____" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
        Sleep(300);

    system("cls");
        cout << "                    " << endl;
    cout << "                    " << endl;
    cout << " ____.______._____  " << endl;
    cout << " | ._  - a:f -   |  " << endl;
    cout << " |.:o|.[].[].[]..|  " << endl;
    cout << "=|_-||___________|  " << endl;
    cout << "____<(*)____( o ____" << endl;
    cout << "~ ~ ~ ~ ~ ~ ~< >~ ~ " << endl;
    cout << "              |     " << endl;
        Sleep(300);

    system("cls");

    cout << "                    " << endl;
    cout << "                    " << endl;
    cout << " ____.______._____  " << endl;
    cout << " | ._  - a:f -   |  " << endl;
    cout << " |.: |.[].[].[]..|  " << endl;
    cout << "=|_:o|__________.|  " << endl;
    cout << "___/|\\,)____( o.____" << endl;
    cout << "~ ~<< # ~ ~ ~< >~ ~ " << endl;
    cout << "              |      " << endl;
            Sleep(300);

    system("cls");
        cout << "                    " << endl;
    cout << "                    " << endl;
    cout << " ____.______._____  " << endl;
    cout << " | ._  - a:f -   |  " << endl;
    cout << " |.: |.[].[].[]..|  " << endl;
    cout << "=|_: |___________   " << endl;
    cout << "___ o *)____( o.'___" << endl;
    cout << "~ ~/|\\, ~ ~ ~< >~ ~ " << endl;
    cout << "    | #       |     " << endl;
        Sleep(300);

    system("cls");
        cout << "                    " << endl;
    cout << "                    " << endl;
    cout << " ____.______._____  " << endl;
    cout << " | ._  - a:f -   |  " << endl;
    cout << " |.:o|.[].[].[]..   " << endl;
    cout << "=|_: |_________ hi! " << endl;
    cout << "___ o *)____( o  ___" << endl;
    cout << "~ ~/|\\, ~ ~ ~/|>~ ~ " << endl;
    cout << "    | #       |     " << endl;
        Sleep(300);

    system("cls");
    cout << "                   " << endl;
	cout << "                    " << endl;
	cout << " ____.______._____  " << endl;
	cout << " | ._  - a:f -   |  " << endl;
	cout << " |.:o|.[].[].[].    " << endl;
	cout << "=|_: |_____ .   hi! " << endl;
	cout << "___ o *)___  \\o ____" << endl;
	cout << "~ ~<< , ~ ~    >~ ~ " << endl;
	cout << "    | #       |     " << endl;
	    Sleep(300);
	
	    system("cls");
	    cout << "                    " << endl;
	cout << ".______._____       " << endl;
	cout << "  - a:f -   |       " << endl;
	cout << "|.[].[].[]..|       " << endl;
	cout << "|___________|       " << endl;
	cout << "(*) o _(*)___ o __ o" << endl;
	cout << "~ ~<|>~ ~ ~ ~,| ~ .|" << endl;
	cout << "    |        #>   .>" << endl;
		Sleep(300);
	
	    system("cls");
	cout << "                    " << endl;
	cout << "______._____        " << endl;
	cout << " - a:f -   |        " << endl;
	cout << ".[].[].[]..|        " << endl;
	cout << "___________|        " << endl;
	cout << "*)_ o (*)_____ o ___" << endl;
	cout << "~ ~< \\~ ~ ~ ~  <~   " << endl;
	cout << "    |\\        /#    " << endl;
	    Sleep(300);
	
	    system("cls");
	cout << "                    " << endl;
	cout << "_____._____         " << endl;
	cout << "- a:f -   |         " << endl;
	cout << "[].[].[]..|         " << endl;
	cout << "__________|         " << endl;
	cout << ")___ o )_______ o __" << endl;
	cout << "~ ~ <<~ ~ ~ ~ ~ |.  " << endl;
	cout << "    /|         .|#  " << endl;
	    Sleep(300);
	
	    system("cls");
	cout << "                    " << endl;
	cout << "____._____          " << endl;
	cout << " a:f -   |          " << endl;
	cout << "].[].[]..|          " << endl;
	cout << "_________|          " << endl;
	cout << "____( o ________ o _" << endl;
	cout << "~ ~ ~ |.~ ~ ~ ~  <  " << endl;
	cout << "     .|          #\\ " << endl;
	    Sleep(300);
	
	    system("cls");
	cout << "                    " << endl;
	cout << "_._____             " << endl;
	cout << "f -   |             " << endl;
	cout << "].[]..|     ,       " << endl;
	cout << "______|   .         " << endl;
	cout << "_(*)____ o _________" << endl;
	cout << "~ ~ ~ ~  <  ~ ~ ~ ~ " << endl;
	cout << "        /|          " << endl;
		Sleep(300);
	
	    system("cls");
	cout << "                    " << endl;
	cout << "_____         .     " << endl;
	cout << "-   |      - ? '    " << endl;
	cout << "[]..|       , `     " << endl;
	cout << "____|               " << endl;
	cout << "*)________ o _______" << endl;
	cout << "~ ~ ~ ~ ~  |  ~ ~ ~ " << endl;
	cout << "           |\\       " << endl;
		Sleep(300);
	
	    system("cls");
	cout << "                    " << endl;
	cout << "             .      " << endl;
	cout << "____            .   " << endl;
	cout << "   |       ` ?      " << endl;
	cout << "]..|           '    " << endl;
	cout << "___|                " << endl;
	cout << ")__________ o ______" << endl;
	cout << "~ ~ ~ ~ ~ ~ < ~ ~ ~ " << endl;
	cout << "           .|       " << endl;
	    Sleep(300);
	
	    system("cls");
	cout << "           .        " << endl;
	cout << "                    " << endl;
	cout << "___      .       '  " << endl;
	cout << "  |          ?      " << endl;
	cout << "..|                 " << endl;
	cout << "__|                 " << endl;
	cout << "____________ o _____" << endl;
	cout << "~ ~ ~ ~ ~ ~  |. ~ ~ " << endl;
	cout << "            /|      " << endl;
	    Sleep(300);
	
	    system("cls");
	cout << "                    " << endl;
	cout << "                    " << endl;
	cout << "__                  " << endl;
	cout << " |           :      " << endl;
	cout << ".|                  " << endl;
	cout << "_|                  " << endl;
	cout << "_____________ o ____" << endl;
	cout << "~ ~ ~ ~ ~ ~ ~ < ~ ~ " << endl;
	cout << "             .|     " << endl;
	    Sleep(300);
	
	    system("cls");
	cout << "                    " << endl;
	cout << "                    " << endl;
	cout << "   wel                  " << endl;
	cout << "           :      " << endl;
	cout << "                  " << endl;
	cout << "                  " << endl;
	cout << "_____________ o ____" << endl;
	cout << "~ ~ ~ ~ ~ ~ ~ < ~ ~ " << endl;
	cout << "             .|     " << endl;
		Sleep(300);
	
	    system("cls");
	cout << "                    " << endl;
	cout << "                    " << endl;
	cout << "   welco                  " << endl;
	cout << "                 " << endl;
	cout << "                  " << endl;
	cout << "                  " << endl;
	cout << "_____________ o ____" << endl;
	cout << "~ ~ ~ ~ ~ ~ ~ < ~ ~ " << endl;
	cout << "             .|     " << endl;
	    Sleep(300);
	
	    system("cls");
	cout << "                    " << endl;
	cout << "                    " << endl;
	cout << "   welcome                  " << endl;
	cout << "                 " << endl;
	cout << "                  " << endl;
	cout << "                  " << endl;
	cout << "_____________ o ____" << endl;
	cout << "~ ~ ~ ~ ~ ~ ~ < ~ ~ " << endl;
	cout << "             .|     " << endl;
	cout << "\n";
	    system("pause");
    
    //sistema de login
    int t;
    
    do {
    	system("cls");
	    cout << "Escolha uma opção\n1. Login\n2. Cadastro\n-> ";
		cin >> t;
		system("cls");
	
		switch (t){
		case 1:
			login();
		break;
		case 2:
			criar();
		break;	
		default: 
			cout << "Opção inválida!\n";
		}
		
	} while (t != 1);
    
    //inicio pós login
    do {
    	
        exibirParceiros();
        cin >> opcaoPrincipal;
        cin.ignore();

        switch (opcaoPrincipal) {
        	
            case 1:{
	
				setlocale(LC_ALL, "portuguese");
			    vector<Produto> produtos;
			    

			
			    escolha();
			    char escolha;
			    cin >> escolha;
			    
			    switch (escolha) {
			    	
			    case '1': {
			    	
			    char categoriaEscolha;
			    exibirMenu();
			    cin >> categoriaEscolha;
		
			    if (categoriaEscolha == '1') {
			        char subCategoriaEscolha;
	                imprimirSubcategoriasHardware();
	                cout << "Escolha a subcategoria: ";
	                cin >> subCategoriaEscolha;
	                
	                switch (subCategoriaEscolha) {
	                    case '1':
	                        imprimirProdutosPorCategoria(produtos);
	                        system("pause");
	                        break;
	                
	                }
	            } 
	            break;
		            case '2': {
		            	
		               removerProduto(produtos);
		              system("pause");
		                break;
		            }
			        case '3':{
			        //	cadastrarProduto(produtos, "categoria_desejada", codigosUtilizados);
			 		cadastrarProduto(produtos, "produto.txt", codigosUtilizados);
			  		system("pause");
						break;
					}
		            case '4': {
		              comprarProduto(produtos);
		            system("pause");
		                break;
		            }
		            case '5': {
		            	
		            	system("cls");
					
		                break;
		            }
		            //caso o usuário digite uma opção inválida, é retornado erro.
		            default:{
						
		                cout << "Opção inválida!" << endl;
		                Sleep(300);
		                break;
					}
					}
		   			}
				 	break;
					}
                
			//cliente	       
            case 2: {

	            int fim = 1;
		
				while(fim != 0) {
		
				int opcao;
			
				cout << "===================> MENU PRINCIPAL <================== \n\n";
				cout << "Digite uma opcao: 1- Gravar dados, 2- Buscar Dados, 3- Listar dados, 4- Atualizar, 5- Excluir, 0- Sair \n";
				cout << "=> ";
				cin >> opcao;
				
				switch(opcao) {
				
				case 1:
					criarCliente();
					break;
				
				case 2:
					buscar_dados();
					break;
				
				case 3:
					listar_todos();
					break;
					
				case 4:
					atualizar();
					break;
				
				case 5:
					excluir();
					break;
					
				case 0:
					fim = 0;
					break;
					
				default:
					cout << "Opçao invalida! ";
					break;	
				}
				
				if(fim == 1) {
				cout << "Digite: 1- Voltar ao menu, 0- Sair. \n";
				cout << "=>";
				cin >> fim;
				system("cls");
				
					} else {
					continue;
					}
					}
	                break;
	        	}
            case 3:{

                MenuFornecedores();
                break;
                	}
              
            case 4: 
                int opcaoParceiros;
                do {
                	
                    exibirParceirosHardware();
                    
                    cin >> opcaoParceiros;
                    
                    cin.ignore();

                    switch (opcaoParceiros) {
                        case 1: {
			                system("cls");
			                Parceiro p;
			                cout<<" _________________________________________________________________\n";
			                cout<<"|                                                                 |\n";
			                cout<<"|Insira as informações do novo parceiro nos campos indicados:     |" << endl;
			                cout<<"|_________________________________________________________________|\n";
			                cout<<"\n";
			                cout<<"\n";
			                cout<<"\n";
			                
			                cout<<" ______________________\n";
			                cout<<"|                      |\n";
			                cout<<"|   Nome do parceiro:  |\n";
			                cout<<"|______________________|\n";
			                cout<<"\n";
			                cout<<"-> ";
			                getline(cin, p.nome);
			                
			                system("cls");
			                cout<<" ____________________\n";
			                cout<<"|      Contato :     |\n";
			                cout<<"|--------------------|\n";
			                cout<<"| ex:                |\n";
			                cout<<"|                    |\n";
			                cout<<"| (31999999):        |\n";
			                cout<<"|____________________|\n";
			                
			                cout<<"\n";
			                cout<<"-> ";
			                getline(cin, p.contato);
			                
			                system("cls");
			                cout<<" ______________________\n";
			                cout<<"|                      |\n";
			                cout<<"|         CNPJ :       |\n";
			                cout<<"|______________________|\n";
			                cout<<"\n";
			                cout<<"-> ";
			                getline(cin, p.cnpj);
			                
			                p.status = "ativo";
			                parceiros[atual++] = p;
			                
			            break;
                
		                	std::ofstream database("parceiros.txt", std::ios::app);
		
		  	    			if (!database.is_open()) {
		        			std::cout << "Erro ao abrir o banco de dados.\n";
		    				}
		    
							database << p.nome << "," << p.cnpj << "," << p.contato << "," << p.status << "," << endl ; // Usamos uma vírgula para separar as entradas
						    database.close();
		         		}
            			
            case 2: {
            	system("cls");
            	cout<<"\n";
            	cout<<"\n";
            	cout<<"\n";
            	cout << "  ____________________________________________________________________________________\n";
                cout <<" |" << setw(5) <<"  PARCEIRO" << setw(9)<<"|"<<setw(15) <<"CONTATO" << setw(9)<<"|"<<setw(15) << " CNPJ  " << setw(9)<<"|"<<setw(15) <<     "STATUS"<< setw(0)<< "  | \n";
                for (int i = 0; i < atual; i++) {
                cout <<" |------------------------------------------------------------------------------------|\n";
                cout <<" |"<<setw(10) <<parceiros[i].nome << setw(9)<<"|"<<setw(15) << parceiros[i].contato << setw(9)<<"|"<<setw(15) << parceiros[i].cnpj << setw(9)<<"|"<<setw(15) << parceiros[i].status <<"  |\n";
                }
                cout <<" |____________________________________________________________________________________|\n\n";

				system("pause > nul");
                break;
            }     
            
            case 3: {
                string nome;
                 system("cls");
                cout << " _____________________________________________________\n";
                cout << "|              |\n";
                cout << "|   Digite o nome do parceiro que deseja pesquisar:   |\n";
                cout << "|_____________________________________________________|\n";
                cout << "\n";
                cout << "--> ";

                getline(cin, nome);
                bool encontrado = false;
                for (int i = 0; i < atual; i++) {
                    if (parceiros[i].nome == nome) {
						system("cls");
						cout << "  _____________________________________________________________________________________\n";
						cout << " |" << setw(5) << "Nome" << setw(9) << "|" << setw(15) << "Contato" << setw(9) << "|" << setw(15) << "CNPJ" << setw(9) << "|" << setw(15) << "Status" << setw(0) << "        |\n";
						for (size_t i = 0; i < atual; ++i) {
						    cout << " |-------------------------------------------------------------------------------------|\n";
						    cout << setw(5)<<" |" << setw(5) << parceiros[i].nome << setw(9) << "|" << setw(15) << parceiros[i].contato << setw(9) << "|" << setw(15) << parceiros[i].cnpj;
						    cout << setw(9) << "|" << setw(15) << parceiros[i].status << setw(0) << "        |\n";
						}
						cout << " |_____________________________________________________________________________________|\n";
		
		                encontrado = true;
		                system("pause");
		                break;
                    }
                }
                if (!encontrado) {
                	 system("cls");
                    cout << " _________________________________________" << endl;
                    cout << "|Parceiro não encontrado e/ou cadastrado! |" << endl;
                    cout << "|_________________________________________|" << endl;
                }
               
                break;
            }
            case 4: {
            	 system("cls");
                cout << "Funcionalidade de produtos anunciados em desenvolvimento..." << endl;
                Sleep(100);
                break;
            }
            case 5: {
                string nome;
                 system("cls");
                cout << " _____________________________________________________\n";
                cout << "|                                                     |\n";
                cout << "|    Digite o nome do parceiro que deseja excluir:    |\n";
                cout << "|_____________________________________________________|\n";
                cout << "\n";
                cout << "--> ";

                getline(cin, nome);
                int indice = -1;
                for (int i = 0; i < atual; i++) {
                    if (parceiros[i].nome == nome) {
                        indice = i;
                        break;
                    }
                }

                if (indice != -1) {
                    for (int i = indice; i < atual - 1; i++) {
                        parceiros[i] = parceiros[i + 1];
                    }
                    atual--;
                    system("cls");
                    cout << " _______________________________" << endl;
                    cout << "|Parceiro excluído com sucesso! |" << endl;
                    cout << "|_______________________________|" << endl;
                } else {
                	 system("cls");
                    cout << " ________________________________________" << endl;
                    cout << "|Parceiro não encontrado e/ou cadastrado!|" << endl;
                    cout << "|________________________________________|" << endl;
                }
                system("pause");
                break;
            }
            case 6:
                break;
                        default:
                        	 system("cls");
                            cout << "Opção inválida!" << endl;
                            Sleep(100);
                    }
                } while (opcaoParceiros != 6);
                break;
            
            
                case 5: {
    int opcaoAjuda;
    do {
        system("cls");
        cout << " _____________________________\n";
        cout << "|            AJUDA            |\n";
        cout << "|_____________________________|\n";
        cout << "|                             |\n";
        cout << "|1. FAQ                       |\n";
        cout << "|2. Cadastrar dúvida          |\n";
        cout << "|3. Avaliação                 |\n";
        cout << "|4. Como Usar o Sistema       |\n";
		cout << "|                             |\n";        
        cout << "|5. Voltar                    |\n";
        cout << "|_____________________________|\n";
        cout << "Digite o número aqui: \n";
        cout << "--> ";
        
        cin >> opcaoAjuda;
        cin.ignore();
        
        switch (opcaoAjuda) {
            case 1:
            	system("cls");
                cout << "1. Como faço o login no sistema?\n"
		         << "Na página de login, insira seu usuário e senha cadastrados para acessar o sistema.\n\n"
		         << "2. Onde vou após o login?\n"
		         << "Após o login, você será direcionado para a Tela Inicial que exibirá as boas-vindas e o Menu Principal.\n\n"
		         << "3. Quais opções estão disponíveis no Menu Principal?\n"
		         << "No Menu Principal, você encontrará as opções: Produtos, Clientes, Fornecedores, Parceiros, Ajuda e Sobre.\n\n"
		         << "4. Como posso gerenciar os produtos no sistema?\n"
		         << "Acesse a opção \"Produtos\" no Menu Principal para cadastrar, listar, pesquisar e excluir produtos.\n"
		         << "Você pode categorizar produtos como Hardware ou Periféricos.\n\n"
		         << "5. Quais informações de produto posso cadastrar?\n"
		         << "Você pode cadastrar informações como Nome, Marca, Preço, etc.\n"
		         << "Também é possível inserir detalhes de vendas realizadas e valores dos produtos anunciados em sites.\n\n"
		         << "6. Como faço o gerenciamento dos clientes?\n"
		         << "Utilize a opção \"Clientes\" para cadastrar, listar, pesquisar e excluir informações de clientes.\n"
		         << "Informações básicas como Nome Completo, e-mail, contato, CPF, data de nascimento, etc., podem ser inseridas.\n\n"
		         << "7. Como cadastro e gerencio fornecedores?\n"
		         << "A opção \"Fornecedores\" permite cadastrar, listar, pesquisar e excluir informações dos fornecedores.\n"
		         << "Informações como Nome, contato, CNPJ e os produtos fornecidos podem ser registradas.\n\n"
		         << "8. Como registro e acompanho os parceiros?\n"
		         << "Utilize a opção \"Parceiros\" para cadastrar, listar, pesquisar e excluir informações de parceiros.\n"
		         << "Detalhes como Nome, contato, CNPJ e produtos anunciados por eles podem ser gerenciados.\n\n"
		         << "9. Onde encontro informações de Ajuda?\n"
		         << "A seção \"Ajuda\" contém respostas para dúvidas gerais sobre a utilização do sistema.\n\n"
		         << "10. Onde encontro informações sobre o sistema?\n"
		         << "Na opção \"Sobre\", você pode encontrar detalhes como a versão do sistema, informações sobre o desenvolvedor, funcionalidades gerais e direitos reservados.\n\n"
		         << "11. Como adiciono um novo produto à lista?\n"
		         << "No menu \"Produtos\", selecione \"Cadastrar Novo\" e preencha as informações solicitadas.\n\n"
		         << "12. Como pesquiso produtos específicos?\n"
		         << "Acesse o menu \"Produtos\" e escolha \"Listar Todos\". Use a função de pesquisa para encontrar produtos por nome ou categoria.\n\n"
		         << "13. Como acompanho o histórico de compras de um cliente?\n"
		         << "Selecione um cliente no menu \"Clientes\" e acesse o \"Histórico de Compras\" para ver suas compras anteriores.\n\n"
		         << "14. Como faço para excluir um cliente, fornecedor ou parceiro?\n"
		         << "No respectivo menu (Clientes, Fornecedores, Parceiros), escolha a opção \"Listar Todos\", selecione o item e escolha a opção de exclusão.\n\n"
		         << "15. Como atualizo as informações de um produto?\n"
		         << "No menu \"Produtos\", escolha \"Listar Todos\", selecione o produto e edite as informações desejadas.\n\n"
		         << "16. O sistema oferece suporte a diferentes tipos de produtos?\n"
		         << "Sim, você pode categorizar produtos em Hardware e Periféricos para uma melhor organização.\n\n"
		         << "17. Como vejo os produtos anunciados por um parceiro específico?\n"
		         << "No menu \"Parceiros\", selecione um parceiro e acesse o \"Menu Parceiro\" para ver os produtos que eles estão anunciando.\n\n"
		         << "18. O sistema gera relatórios de vendas?\n"
		         << "Sim, você pode acessar relatórios de vendas por período no menu \"Produtos\".\n\n"
		         << "19. Como faço para sair do sistema?\n"
		         << "A opção de saída geralmente está localizada no canto superior direito da tela, indicada como \"Sair\" ou \"Logout\".\n\n"
		         << "20. Onde posso encontrar informações adicionais sobre funcionalidades e direitos do sistema?\n"
				 << "Na seção 'Sobre' você encontrará informações detalhadas sobre o sistema, suas funcionalidades e seus direitos reservados\n\n"
				 << "Aperte enter para continuar.";
         
             system("pause > nul");
                break;
			case 2:
                exibirFAQ();
                break;
            case 3:
                adicionarAvaliacao();
                break;
            case 4:
                comoUsarSistema();
                break;
            case 5:
                break;
            default:
                cout << "Opção inválida!" << endl;
                Sleep(100);
        }
    } while (opcaoAjuda != 5);
    break;
	}
                break;
            case 6:
                exibirSobre(); // Exibe as informações "Sobre o Sistema"
                cout << "Pressione Enter para retornar ao Menu Principal...";
                cin.get();
                break;
            case 7:
                cout << "Saindo..." << endl;
                Sleep(1000);
                break;
            default:
                cout << "Opção inválida!" << endl;
                Sleep(100);
        }
    } while (opcaoPrincipal != 7);
}
    system("pause");
}
