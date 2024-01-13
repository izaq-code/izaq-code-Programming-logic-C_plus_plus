#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int num,num1,num2,num4;

  cout<<"informe o numero A\n";
  cin>>num;
   
     cout<<"informe o numero B\n";
      cin>>num1;
      
         cout<<"informe o numero C\n";
       cin>>num2;

        num4 = num+num1;

        if (num4>num2) {
        	
         cout<<"numero C e maior que A e B somados\n";
         
         
		 }else{
		 	
		 	  cout<<" A e b somados e maior que C\n";
		 
		 }
		 	
		 	   

     


	return 0;
}
