#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

float kg,com,result;
com = 58;
cout << "quantos kg de comida vc comeu ? \n";
cin>>kg,
result=kg*com,
cout << "o valor total a pagar e : "<<result;
cout << " Reais";




	return 0;
}
