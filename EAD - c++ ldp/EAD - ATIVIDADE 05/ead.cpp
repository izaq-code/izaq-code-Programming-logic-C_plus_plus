#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <cstring> 
#include <conio.h> 
using namespace std;

float saldo = 0.0;

void depositar(float quantia) {
	system("cls");
    saldo += quantia;
    cout << " <====================================================>" <<endl;
    cout <<endl;
    cout <<setw(12)<< "                     Depósito de :     " <<setw(0) <<endl;

    cout <<endl;
    cout<<setw(1)<<"                         " <<quantia <<setw(1) <<"R$"<<endl;
        cout <<endl;
        cout <<setw(1)<< "                  _____________________"<<setw(37)<<"" <<endl;
        cout <<setw(1)<< "                 |realizado com sucesso|"<<setw(37)<<"" <<endl;
        cout <<setw(1)<< "                 |_____________________|"<<setw(37)<<"" <<endl;
            cout <<endl;
        cout << " <====================================================>" <<endl;
    system("pause");
}

void sacar(float quantia) {
    if (saldo >= quantia) {
        saldo -= quantia;
        	system("cls");
    cout << " <====================================================>" <<endl;
    cout <<endl;
    cout <<setw(12)<< "                       saque de :     " <<setw(0) <<endl;

    cout <<endl;
    cout<<setw(1)<<"                         " <<quantia <<setw(1) <<"R$"<<endl;
        cout <<endl;
        cout <<setw(1)<< "                  _____________________"<<setw(37)<<"" <<endl;
        cout <<setw(1)<< "                 |realizado com sucesso|"<<setw(37)<<"" <<endl;
        cout <<setw(1)<< "                 |_____________________|"<<setw(37)<<"" <<endl;
            cout <<endl;
        cout << " <====================================================>" <<endl;
        cout <<endl;
    system("pause");
    } else {
    		system("cls");
       cout << " ______________________________" <<endl;
       cout << "|Saldo insuficiente para saque.|" <<endl;
       cout << "|______________________________|" <<endl;
           system("pause");
    }
}

void verificarSaldo() {
		system("cls");

       cout << " <====================================================>" <<endl;
    cout <<endl;
    cout <<setw(12)<< "                       Saldo atual :     " <<setw(0) <<endl;

    cout <<endl;
    cout<<setw(1)<<"                         " << saldo  <<setw(1) <<"R$"<<endl;

            cout <<endl;
        cout << " <====================================================>" <<endl;
        cout <<endl;
}




int main(int argc, char** argv) {
    setlocale(LC_ALL, "portuguese");
    int opcao;
    do {
    		system("cls");
       cout << " _______________________________\n";
       cout << "|    --- Caixa Eletrônico ---   |\n";
       cout << "| _____________________________ |\n";
       cout << "|                               |\n";
       cout << "|1. Depositar                   |\n";
       cout << "|2. Sacar                       |\n";
       cout << "|3. Verificar Saldo             |\n";
       cout << "|                               |\n";
       cout << "|4. Sair                        |\n";
       cout << "| _____________________________ |\n";
       cout << "|                               |\n";
       cout << "|Escolha uma opção:             |\n";
       cout << "|_______________________________|\n";
       cout << "\n";
       cout << "--> ";
       cin >> opcao;
system("cls");
       cin.ignore(); // Limpa o buffer de entrada

        switch (opcao) {
            case 1: {
                float quantia;
               cout << " _______________________________________\n";
               cout << "|Informe a quantia a ser depositada:    |\n";
               cout << "|_______________________________________|\n";
               cout << "\n";
               cout << "--> ";
               cin >> quantia;
                depositar(quantia);
                break;
            }
            case 2: {
            		system("cls");
                float quantia;
               cout << " ___________________________________\n";
               cout << "|Informe a quantia a ser sacada:    |\n";
               cout << "|___________________________________|\n";
               cout << "\n";
               cout << "--> ";
               cin >> quantia;
                sacar(quantia);
                break;
            }
            case 3:
            		system("cls");
                verificarSaldo();
                system("pause");
                break;
            case 4:
            		system("cls");
               cout << " _______________________________________________\n" <<endl;
               cout << "|Obrigado por usar o nosso caixa eletrônico!    |\n" <<endl;
               cout << "|_______________________________________________|\n" <<endl;
                break;
            default:
            		system("cls");
               cout << " ________________\n" <<endl;
               cout << "|Opção inválida! |\n" <<endl;
               cout << "|________________|\n" <<endl;
        }
    } while (opcao != 4);

    return 0;
}

