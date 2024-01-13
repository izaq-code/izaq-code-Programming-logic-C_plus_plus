#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int a,b,soma,mult;

cout<<"escreva o numero A : \n";
cin>>a;
cout<<"escreva o numero B : \n";
cin>>b;

if (a==b) {
	
soma=a+b;

cout<<"seu resultado e "<<soma;
}else{
	
mult=a*b;
cout<<"seu resultado e "<<mult;
}


return 0;
}


