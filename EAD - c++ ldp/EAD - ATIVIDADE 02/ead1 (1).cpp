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
    cout << "Ol�, " << nome << "! Vamos jogar um jogo! Voc� ter� 3 tentativas para adivinhar 3 n�meros que estou pensando.\n\n";
    cout << "Cada n�mero est� entre 1 e 10. Se acertar um n�mero, ganha 5 pontos.\n\n";

    cout << "Tentativa 1: Qual seria o primeiro n�mero? de 1 a 10 ";
    cin >> tentativa1;

    system("cls"); 
 Sleep(500);


    if (tentativa1 == numeroCorreto1) {
        pontos += 5;
    }

    cout << "Tentativa 2: Qual seria o segundo n�mero? de 1 a 10  ";
    cin >> tentativa2;

    system("cls"); 
 Sleep(500);
  
    if (tentativa2 == numeroCorreto2) {
        pontos += 5;
    }

    cout << "Tentativa 3: Qual seria o terceiro n�mero? de 1 a 10  ";
    cin >> tentativa3;

    system("cls"); 
 Sleep(500);


    if (tentativa3 == numeroCorreto3) {
        pontos += 5;
    }

    if (pontos == 0) {
        cout << "N�o foi dessa vez, " << nome << ". Voc� n�o adivinhou nenhum n�mero e terminou com 0 pontos.\n";
    } else if (pontos == 5) {
        cout << "Parab�ns, " << nome <<"! Voc� adivinhou um n�mero e ganhou 5 pontos.\n";
    } else if (pontos == 10) {
        cout << "Bom trabalho, " << nome << "! Voc� adivinhou dois n�meros e ganhou 10 pontos.\n";
    } else {
        cout << "Incr�vel, " << nome << "! Voc� adivinhou todos os n�meros e ganhou 15 pontos.\n";
    }

   system("pause");
}

