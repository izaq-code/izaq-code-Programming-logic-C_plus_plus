#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int soma,cont,num;
double media;
   soma = 0;
   cont= 0;

  do{
  	
  	
  
      cout<<"Digite um número: \n";
      cin>>num;
      
      if (num % 2 == 0) {
      	
      	   soma = soma + num;
         cont= cont + 1;
         
	  }
      
     
  }while( num!=0);
   
   if(cont > 0) {
   	
   	 cont= cont-1;
   

      media = soma / cont;

      cout<<"A média dos números pares digitados é: "<< media<<endl;
}else{
	
	 cout<<"Nenhum número par foi digitado.\n";
}
     

	return 0;
}
