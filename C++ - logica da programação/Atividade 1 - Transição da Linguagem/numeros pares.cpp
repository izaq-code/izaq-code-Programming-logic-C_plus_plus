#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "portuguese");

int	par=0;
  for (int x = 0;x<=10;x++) {
  		int A[x];
  	cout<<"Digite um número: ";
    cin>>A[x];
      if(A[x]%2==0) {
      	
      	   par=par+1;
      	
	  } 

   
  	
  }
 
   cout<<"A quantidade de números pares é:"<<par<<endl;
   
   system ("pause");
}
