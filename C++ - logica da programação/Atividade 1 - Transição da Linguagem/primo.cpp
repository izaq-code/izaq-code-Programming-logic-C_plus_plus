#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");
	
	int n,cont,aux,x;
	   cout<<"Digite um número: \n";
   cin>>n;

    cont = 0;

for(int x =  1;x<=n;x++){
	
        if(n % x == 0) {
        	
         cont = cont + 1;	
         
		} 
		

}

	
        if(cont == 2){
		cout<<n<< " é um número primo.";
		
}else{
	
	
	cout<<n<< " não é um número primo.";

	return 0;
}
}
