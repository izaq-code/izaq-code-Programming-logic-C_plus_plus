#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");


float c,result;
cout <<"quantos celsius?\n";
cin>>c;
result = c*9/5+32;
cout<<"sao "<<result;
cout<<" fahrenheit";
	return 0;
}
