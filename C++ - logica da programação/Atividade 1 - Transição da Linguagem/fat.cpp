#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

int n, aux, prod=1;
    cout << "Fatorial de: ";
    cin >> n;

for(aux=1 ; aux<=n ; aux++){
	
	 prod *= aux;
}
       

    cout << "Fatorial: " << prod << endl;
	
	

	
	return 0;
}

