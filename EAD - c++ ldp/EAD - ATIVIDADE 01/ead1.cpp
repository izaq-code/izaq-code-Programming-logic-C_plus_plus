
#include <iostream>
#include <string>
#include <locale>


using namespace std;

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
	
    string nome, sobrenome;
    double rendaMensal;
    int idade;
    int mesesTrabalhando;
    double valorPedido;
    double limiteCredito;

    cout << "Digite o seu nome e sobrenome: ";
    getline(cin, nome);

    cout << "Digite a sua renda mensal: ";
    cin >> rendaMensal;

    cout << "Digite a sua idade: ";
    cin >> idade;

    cout << "Há quantos meses você está trabalhando: ";
    cin >> mesesTrabalhando;

    cout << "Digite o valor do crédito pedido: ";
    cin >> valorPedido;

    limiteCredito = 5 * rendaMensal;

    if (idade < 18) {
        cout << "Desculpe, " << nome << ", você não atende ao requisito de idade mínima." << endl;
    } else if (rendaMensal < 1500) {
        cout << "Desculpe, " << nome  << ", sua renda mensal está abaixo do mínimo necessário." << endl;
    } else if (mesesTrabalhando < 12) {
        cout << "Desculpe, " << nome << ", você não atende ao requisito mínimo de tempo de trabalho." << endl;
    } else if (valorPedido > limiteCredito) {
    	
    	 cout << "Desculpe, " << nome << ", o valor do credito solicitado exede o limite permitido baseado na sua renda. o maximo que voce ode pedir e : "<<limiteCredito << endl;
	}else if (valorPedido < limiteCredito) {
	cout<< "parabens, " << nome <<"! seu pedido de credito foi aprovado" <<endl;	
	
}

	
	
	


//return 0;
system("pause");

}
