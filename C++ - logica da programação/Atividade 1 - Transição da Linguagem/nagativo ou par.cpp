#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

float rest;
int num1;

cout<<"insira um numero \n";
cin>>num1;

if (num1>0){
	
	rest= num1 % 2;
	
	 if (rest == 0 ){
	 	
	 	cout<<"ele e par ";
	 
	 }else if ( rest > 0){
	 	
	 	cout<<"ele e impar";
	 }
	
}else if (num1 ==0 ){
	
	cout<<"ele e positivo";
	
	

}else{
	
	cout<<"ele e negativo";
}
	return 0;
}
