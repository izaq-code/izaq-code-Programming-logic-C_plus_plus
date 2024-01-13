#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int cand,ron,nulo,mes,cr,branco;

do{
cout<<"são candidados os senhores josivaldo, zaracho e edmundo\n";

cout<<"escolha em qual votar\n";
cout<<"1- pica-pau\n";
cout<<"2- didi\n";
cout<<"3- ronaldinho\n";
cout<<"0- branco\n";
cout<<"4- nulo\n";
cout<<"digite -1 para finalizar\n";
cin>>cand;
if(cand == 1 ) {
	cr = cr + 1;
}

if(  cand == 2){

mes = mes +  1;
}


if( cand == 3 ){
	ron = ron + 1;
}

if (cand == 0){
branco = branco + 1	;
}
if(cand == 4 ){
	
	nulo = nulo + 1;
}


}while(cand != -1) ;


cout<<"pica-pau teve "<< cr<< " votos!\n";
cout<<"didi teve "<< mes<< " votos!\n";
cout<<"ronaldinho teve "<< ron<< " votos!";
cout<<"infelizmente tivemos "<< branco<< " votos em branco\n";
cout<<"infelizmente tivemos "<< nulo<<" votos nulos\n\n";

if (cr > mes && cr > ron){
	
cout<<"puca-pau venceu a eleição!!!\n";
}
if(mes > cr && mes > ron){
	cout<<"didi venceu a eleição!!!\n";
} 

if(ron > cr && ron > mes) {

cout<<"ronaldinho venceu a eleição!!!\n";
	
}
	


	return 0;
}
