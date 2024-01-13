#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

double contf,contm,cont,num;
double pm=0;
double pf=0;
string nome,numo;
char sexo;

contm = 0;
 contf = 0;

 



for (int x=0;x<5;x++){
	

cout<<"digite seu nome : \n";
cin>>nome;
cout<<"digite seu sexo ('f' para feminino e 'm' para masculino) : \n ";
cin>>sexo;

if(sexo == 'm') {
	
	 contm =contm + 1;
}else if (sexo =='f') {
	
 contf =contf + 1;
	
}else if (sexo == 0 ){
	
	return 1;
	
}
cont = cont + 1;	
	
	
}
	


 
cout<<contm<<endl;
cout<<contf<<endl;
cout<<cont<<endl;
 
 pm = contm / cont * 100;
 pf = contf / cont * 100;
cout<<"a porcentagem de homens é de "<<pm<< "%";
cout<<"a porcentagem de mulheres é de "<< pf<< "%";
	
	
	
	
	
	return 0;
}
