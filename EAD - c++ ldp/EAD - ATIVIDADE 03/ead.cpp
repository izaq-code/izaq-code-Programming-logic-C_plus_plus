#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <windows.h>//função sleep

//isaque gomes 

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "portuguese");//alteração no codigo para melhotia
    int figura,espaco;  // Alterado para int
    int tamanho;
    bool executando = true;//erro

    srand(time(0));

    while (executando) {
        cout << "\nBem-vindo ao programa de desenho de figuras geométricas!\n";
        cout << "Digite 1 para desenhar um quadrado \n";
        cout << "Digite 2 para desenhar um retângulo \n";
        cout << "Digite 3 para desenhar um triângulo \n";
        cout << "Digite 4 para desenhar uma pirâmide \n";
        cout << "Digite 5 para desenhar um losango \n";
        cout << "Digite 6 para desenhar uma figura aleatória \n";
        cout << "Digite 0 para sair: ";

        cin >> figura;

        system("CLS");

        if (figura == 6) {
            figura = rand() % 5 + 1;
        }

        if (figura != 0) {
            cout << "Digite o tamanho da figura: ";
            cin >> tamanho;
        }

        switch (figura) {
            case 1:
                for (int i = 0; i < tamanho; i++) {
                    for (int j = 0; j < tamanho; j++) {
                        cout << "*";
                        Sleep(100);//mundandança em todos sleep
                    }
                    cout << "\n";
                }
                break;

            case 2:
                for (int i = 0; i < tamanho; i++) {
                    for (int j = 0; j < tamanho; j++) {
                        cout << "*";
                         Sleep(100);//mundandança em todos sleep
                    }
                    cout << "\n";
                }
                break;

            case 3:
                for (int i = 0; i < tamanho; i++) {//erro
                    for (int j = 0; j <= i; j++) {//erro
                        cout << "*";
                         Sleep(100);//mundandança em todos sleep
                    }
                    cout << "\n";
                }
                break;

            case 4://case 4 erro
                for (int i = 0; i < tamanho; i++) {
                    int espaco = tamanho - 1;
                    for (int j = 0; j < espaco; j++) {
                        cout << " ";
                    }
                    for (int j = 0; j <= 2 * i; j++) {
                        cout << "*";
                         Sleep(100);//mundandança em todos sleep
                    }
                    cout << "\n";
                    espaco--;
                }
                break;
// erro acaba aqui
             case 5:
                 espaco = tamanho - 1; // case 5 com erro
                for (int i = tamanho; i > 0; i--) {
                    for (int j = 0; j < espaco; j++) {
                        cout << " ";
                    }
                    for (int j = 0; j < 2 * i - 1; j++) {
                        cout << "*";
                         Sleep(100);//mundandança em todos sleep
                    }
                    cout << "\n";
                    espaco++;
                }
                break;

            case 0: //erro em todo case 0
               executando = false;
            break;

            default:
                cout << "Opção inválida.\n";
            break;
        }

        Sleep(100);//mundandança em todos sleep
        system("CLS");
    }

    system("pause");
}
