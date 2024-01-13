#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");
	int num,res,res1,ida,ida1,b;
	string no,nome;
	
	b = 999;
for(int x= 1; x < 10; x++){
cout<<"digita seu nome : "<<x<<endl;
cin>>no;
	
cout<<"digita a sua idade : "<<x<<endl;
	cin>>num;	
	res=res+num;
res1=res/20;

if (num > b ){
	
	
}else{
	
nome=no;
ida=num;

}

}

cout<<"a pessoa mais nova e : "<<nome<<"com a idade de : "<<ida<<endl;


	
	return 0;
	
}
