#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");
	
float result,km;

cout << "digite quantos km voce quer : \n";

cin >> km;

result = km/1.609;

cout << result;

	return 0;
}
