#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <locale>
#include <windows.h>
using namespace std;
int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"portuguese");
    srand(time(0));
    int numeroCorreto1 = rand() % 10 + 1;
    int numeroCorreto2 = rand() % 10 + 1;
    int numeroCorreto3 = rand() % 10 + 1;

    int tentativa1, tentativa2, tentativa3;
    int pontos = 0;
    string nome;

    cout << "Digite o seu nome e sobrenome: \n";
    getline (cin,nome);

    system("cls"); 
 Sleep(500);
    cout << "Olá, " << nome << "! Vamos jogar um jogo! Você terá 3 tentativas para adivinhar 3 números que estou pensando.\n\n";
    cout << "Cada número está entre 1 e 10. Se acertar um número, ganha 5 pontos.\n\n";

    cout << "Tentativa 1: Qual seria o primeiro número? de 1 a 10 ";
    cin >> tentativa1;

    system("cls"); 
 Sleep(500);


    if (tentativa1 == numeroCorreto1) {
        pontos += 5;
    }

    cout << "Tentativa 2: Qual seria o segundo número? de 1 a 10  ";
    cin >> tentativa2;

    system("cls"); 
 Sleep(500);
  
    if (tentativa2 == numeroCorreto2) {
        pontos += 5;
    }

    cout << "Tentativa 3: Qual seria o terceiro número? de 1 a 10  ";
    cin >> tentativa3;

    system("cls"); 
 Sleep(500);


    if (tentativa3 == numeroCorreto3) {
        pontos += 5;
    }

    if (pontos == 0) {
        cout << "Não foi dessa vez, " << nome << ". Você não adivinhou nenhum número e terminou com 0 pontos.\n";
    } else if (pontos == 5) {
        cout << "Parabéns, " << nome <<"! Você adivinhou um número e ganhou 5 pontos.\n";
    } else if (pontos == 10) {
        cout << "Bom trabalho, " << nome << "! Você adivinhou dois números e ganhou 10 pontos.\n";
    } else {
        cout << "Incrível, " << nome << "! Você adivinhou todos os números e ganhou 15 pontos.\n";
    }

   system("pause");
}

