#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");
	int num,res,res1,ida,ida1,b,im,par;
	string no,nome;
	
im=0;
ida1=0;
par=0;
for(int x= 0; x < 10; x++){
	
	
	cout<<"informe um numero \n";
	cin>>num;
	
	if (num>10){
		
		ida1=ida1+1;
	
	}
		res= num % 2;
	if (res==0){
		
		par=par+1;
		
		
	}else{
		
		im=im+1;
	}
	

	
}
	cout<<ida1<<" são maiores que 10.\n";
	cout<<par<<" são pares.\n";
	cout<<im<<" são impares.\n";


	return 0;
}
