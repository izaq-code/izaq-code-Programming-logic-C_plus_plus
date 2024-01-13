#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

char cara;

cout<<"Digite uma letra: \n";
cin>>cara;

if (cara == 'a' || cara == 'e' || cara == 'i' || cara == 'o' || cara == 'u' || cara == 'A' || cara == 'E' || cara == 'I' || cara == 'O' || cara == 'U') {
	
cout<<"A letra é uma vogal.";

}else{
	
cout<<"A letra é uma consoante.";
}



	return 0;
}
