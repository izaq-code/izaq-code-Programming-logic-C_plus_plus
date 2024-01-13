#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");
	int num,res;
for(int x= 0; x < 10; x++){
cout<<"digita o "<<x<<" numero ae \n";
	cin>>num;	
	
res=res+num;
}
cout<<"a soma e : "<<res;

	
	return 0;
	
}
