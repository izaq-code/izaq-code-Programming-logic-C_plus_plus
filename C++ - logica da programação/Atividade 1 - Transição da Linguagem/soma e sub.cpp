#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int soma,num1,num2;

    cout << "Digite o primeiro número: \n";
      cin>>num1;

         cout<<"Digite o segundo número: \n";
         cin>>num2;
      
            soma = num1+num2;

         if ( soma > 20 ) {
         	
         	 soma = soma + 8;

      cout<<"Resultado: "<< soma;
  
      
		 }else{
		 	
		 	soma = soma - 5;

cout<<"Resultado: "<< soma;

		 }
		 
         

	return 0;
}
