#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int num;

  cout<<"Digite um n�mero: \n";

  cin>>num;

      if (num %3 == 0) {
      	
      	cout<<"O n�mero "<<num<< " � m�ltiplo de 3 ";
      	
	  }else{
	  	cout<<"O n�mero "<<num<<" n�o � m�ltiplo de 3 ";
	  	
	  }
    
   
   
	return 0;
}
