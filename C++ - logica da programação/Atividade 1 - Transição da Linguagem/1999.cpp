#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");

for(int x=1000;x<1999;x++){
	
if(x % 11 == 5) {
	
	cout<<"x : "<<x<<endl;
}  

	
}


	return 0;
}
