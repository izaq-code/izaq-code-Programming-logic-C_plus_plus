#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
	
    setlocale(LC_ALL, "portuguese");

    float sala, saln, dif;
    string cargo;

    float auxiliar = 2600;
    float engenheiro = 3600;
    float gerente = 2900;
    float tecnico = 1600;

    cout << "Insira seu cargo correspondente a tabela abaixo: \n\n";
cout<<"  _____________ \n "  ;    
cout<<"|   Cargos    | \n " ; 
cout<<"|-------------| \n " ;
cout<<"|  auxiliar   | \n ";
cout<<"|-------------| \n " ;
cout<<"| engenheiro  | \n ";
cout<<"|-------------| \n " ;
cout<<"|   gerente   | \n ";
cout<<"|-------------| \n " ;
cout<<"|   tecnico   | \n ";
cout<<"|_____________| \n\n " ;

    cin >> cargo;

    if (cargo == "auxiliar") {
        sala= auxiliar;
        saln = 2900;
    } else if (cargo == "engenheiro") {
        sala = engenheiro;
        saln = 3600;
    } else if (cargo == "gerente") {
        sala = gerente;
        saln= 3100;
    } else if (cargo == "tecnico") {
        sala = tecnico;
        saln = 1900;
    } else {
        cout << "Cargo inválido." << endl;
        return 1; 
    }

    dif = saln - sala;
    cout << "Seu novo salário é: " << saln << " R$" << endl;
    cout << "A diferença salarial entre o novo salário e o antigo é de: " << dif << " R$" << endl;

    return 0;
}

