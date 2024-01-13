#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

float peqq,medd,grann,med,peq,gran,result;
cout<<"qunatas camisetas peq vc quer? \n";

cin>>peqq;
cout<<"qunatas camisetas media vc quer?\n";

cin>>medd;
cout<<"qunatas camisetas gran vc quer?\n";

cin>>grann;
gran = grann*15;
med= medd*12;
peq = peqq*10;
result = med+peq+gran;
cout<<"o preço arrecadado foi : "<<result;


	return 0;
}
