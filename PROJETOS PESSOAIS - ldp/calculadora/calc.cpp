#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <locale>
using namespace std;

int main() {
    float num1, num2, resultado;
    char op, iniciar, escolha;
	setlocale(LC_ALL,"portuguese");
           	cout << " ______________________________________________________________\n";
            cout << "|                                                              |\n";
            cout << "|  Deseja iniciar o programa ? responda com (S) OU (n)         |\n";
            cout << "|______________________________________________________________|\n";
          
        cin >> iniciar;
        cin.ignore();
        system("cls"); 

  

if (iniciar == 'n'|| iniciar == 'N') {
	
   cout << "-----------------------"<< endl;
    cout << "|   Fim do programa.  |" << endl;
     cout << "-----------------------"<< endl;
	    Sleep(100);
	return 0;
	
}else{
	
}
    // Sistema
    do {
        do {
        	cout << " ______________________________________________________________\n";
            cout << "|                                                              |\n";
            cout << "|  Digite a opera��o: (+), (-), (*), (/), (!) :                |\n";
            cout << "|______________________________________________________________|\n";
            cin >> op;
        } while (op != '+' && op != '-' && op != '*' && op != '/' && op != '!' && op != 'P' && op != 'p' && op != 'I' && op != 'i');
        system("cls"); 


        switch (op) {
            case '+':
            	cout << " _______________________________ \n";
                cout << "|                               |\n";
                cout << "|   Digite o primeiro n�mero:   |\n";
                cout << "|_______________________________|\n";
                cin >> num1;
                system("cls"); 

               	cout << "  ________________________________ \n";
                cout << " |                                |\n";
                cout << " |    Digite o segundo n�mero:    |\n";
                cout << " |________________________________|\n";
                cin >> num2;
                system("cls"); 

                resultado = num1 + num2;
                cout << "A soma de " << num1 << " + " << num2 << " � igual a: " << resultado << endl;
                break;

            case '-':
            	cout << " _______________________________ \n";
                cout << "|                               |\n";
                cout << "|   Digite o primeiro n�mero:   |\n";
                cout << "|_______________________________|\n";
                cin >> num1;
                system("cls"); 

                cout << " ________________________________ \n";
                cout << "|                                |\n";
                cout << "|    Digite o segundo n�mero:    |\n";
                cout << "|________________________________|\n";
                cin >> num2;
                system("cls"); 

                resultado = num1 - num2;
                cout << "A subtra��o de " << num1 << " - " << num2 << " � igual a: " << resultado << endl;
                break;

            case '*':
            	cout << " _______________________________ \n";
                cout << "|                               |\n";
                cout << "|   Digite o primeiro n�mero:   |\n";
                cout << "|_______________________________|\n";
                cin >> num1;
                system("cls"); 

                cout << " ________________________________ \n";
                cout << "|                                |\n";
                cout << "|    Digite o segundo n�mero:    |\n";
                cout << "|________________________________|\n";
                cin >> num2;
                system("cls"); 

                resultado = num1 * num2;
                cout << "A multiplica��o de " << num1 << " x " << num2 << " � igual a: " << resultado << endl;
                break;

            case '/':
            	cout << " _______________________________ \n";
                cout << "|                               |\n";
                cout << "|   Digite o primeiro n�mero:   |\n";
                cout << "|_______________________________|\n";
                cin >> num1;
                system("cls"); 

                cout << " ________________________________ \n";
                cout << "|                                |\n";
                cout << "|    Digite o segundo n�mero:    |\n";
                cout << "|________________________________|\n";
                cin >> num2;
                system("cls"); 

                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "A divis�o de " << num1 << " / " << num2 << " � igual a: " << resultado << endl;
                } else {
                    cout << "Erro: Divis�o por zero n�o � permitida." << endl;
                }
                break;

            case '!':
                int fat = 1;
                cout << "Digite o n�mero para calcular o fatorial: ";
                cin >> num1;
                system("cls"); 

                for (int c = num1; c >= 1; c--) {
                    fat *= c;
                }
                cout << "O fatorial de " << num1 << " � igual a: " << fat << endl;
                break;

        }
cout<<"-----------------------------------------------------------"<<endl;
cout<<"| Deseja realizar outra opera��o?Responda com (S) ou (N): |"<<endl;
cout<<"-----------------------------------------------------------"<<endl;

        cin >> escolha;
        cin.ignore();
        system("cls");

    } while (escolha == 'S' || escolha == 's');
    cout << "-----------------------"<< endl;
    cout << "|   Fim do programa.  |" << endl;
    cout << "-----------------------"<< endl;
    return 0;
}

