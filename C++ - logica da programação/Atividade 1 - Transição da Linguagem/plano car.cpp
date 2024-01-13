#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

float xA,yA,xB,yB,dAB;

cout<<"Digite as coordenadas do ponto A (xA, yA):\n";

cin>>xA;
cin>>yA;
cout<<"Digite as coordenadas do ponto B (xB, yB):\n";
cin>>xB;
cin>>yB;
dAB=(xB-xA)*(xB-xA)+(yB-yA)*(yB-yA);
cout<<"A distância entre os pontos A e B é: "<<dAB;

	return 0;
}
