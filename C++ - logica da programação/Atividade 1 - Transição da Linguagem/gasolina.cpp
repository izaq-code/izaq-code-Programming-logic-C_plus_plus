#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

float gasolina,din,result;


cout<<"digite qauntos reais voce quer de gasolina :\n";
gasolina = 5.40;
cin >> din;
result = din/gasolina;
cout << "voce abasteceu : "<<result;
cout << " L";



	return 0;
}
