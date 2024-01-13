#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int cont,cont1;

string nome,numo;
cont=0;
cont1=0;

for(int x= 0; x < 3; x++){

	
cout<<("seu nome : \n");
cin>>nome;
cout<<"digite seu estado : \n";
cin>>numo;
	

 if( numo=="bh"){
 	
 	cont=cont+1;
 	
 }else{
 	
 	 cont1=cont1+1;
 	 
 }

}
	 
cout<<cont1<<" moram longe de bh\n";
cout<<cont<<" moram em bh\n";

	return 0;
}
