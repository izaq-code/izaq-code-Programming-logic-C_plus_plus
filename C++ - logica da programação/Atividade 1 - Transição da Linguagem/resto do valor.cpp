#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

float rest1,rest2;
int num2,num1;

cout<<"insira um numero \n";
cin>>num1;
cout<<"insira outro numero \n";
cin>>num2;

if (num1>num2){
	
	rest1= num1 - num2;
	
	cout<<"a diferença de valor e "<<rest1;
	
}else{
	
		rest2= num2 - num1;
	
	cout<<"a diferença de valor e "<<rest2;
	
}
	return 0;
}
