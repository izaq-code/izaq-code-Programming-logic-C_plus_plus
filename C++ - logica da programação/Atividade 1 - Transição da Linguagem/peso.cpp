#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

float imc,peso,altura;

cout<<"Digite o peso (em kg): \n";
   cin>>peso;

   cout<<"Digite a altura (em metros): \n";
   cin>>altura;
imc=peso/altura;
   if (imc < 18.5 ){
   	
   	cout<<"Abaixo do peso ideal \n";
   	
   }
 else if (imc < 25) {
 	
 cout<<"Peso normal ";
 	
 
      } else if (imc < 30) {
	 
      	
      	cout<<"Sobrepeso ";
      	
	  
         }else if 	 ( imc < 35 ) {
         	
         	 cout<<"Obesidade grau 1 ";
		 
            } else if ( imc < 40) {
		
            	
            	 cout<<"Obesidade grau 2 ";
            	 
		
     }else if  (imc<50){
	
    	
    	  cout<<"Obesidade grau 3 ";
    	  
    	  
	}
      
      
cout<<"Índice de Massa Corporal (IMC): "<<imc;

return 0;
}
