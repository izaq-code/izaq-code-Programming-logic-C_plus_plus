#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");
	
	int n,cont,aux,x;
	   cout<<"Digite um n�mero: \n";
   cin>>n;

    cont = 0;

for(int x =  1;x<=n;x++){
	
        if(n % x == 0) {
        	
         cont = cont + 1;	
         
		} 
		

}

	
        if(cont == 2){
		cout<<n<< " � um n�mero primo.";
		
}else{
	
	
	cout<<n<< " n�o � um n�mero primo.";

	return 0;
}
}
