#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int num;

  cout<<"Digite um número: \n";

  cin>>num;

      if (num %3 == 0) {
      	
      	cout<<"O número "<<num<< " é múltiplo de 3 ";
      	
	  }else{
	  	cout<<"O número "<<num<<" não é múltiplo de 3 ";
	  	
	  }
    
   
   
	return 0;
}
