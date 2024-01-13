#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

string tm1,tm2;

int goltm1,goltm2;

cout<<"coloque o nome do primeiro time: \n";
cin>>tm1;

cout<<"coloque o nome do segundo time: \n";
cin>>tm2;

cout<<"coloque o número de gols marcados pelo "<< tm1<< ": \n";
cin>>goltm1;

cout<<"coloque o número de gols marcados pelo "<< tm2<< ": \n";
cin>>goltm2;

//processo

if(goltm1 > goltm2){

cout<<"O vencedor da partida e o time "<< tm1;
	
}else if (goltm1 < goltm2 ){
	
cout<<"O vencedor da partida e o time "<< tm2;
	   
}else if (goltm1==goltm2){
	
cout<<" HOUVE UM EMPATE";
	
}



	return 0;
}
