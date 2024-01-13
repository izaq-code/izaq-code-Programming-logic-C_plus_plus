#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");
	int num,res,res1,ida,ida1;
for(int x= 1; x < 20; x++){
cout<<"digita a sua idade : "<<x<<endl;
	cin>>num;	
	res=res+num;
res1=res/20;

if (num>= 18 ){
	
	ida=ida+1;
	
}

}

cout<<"são maiores de idade : "<<ida<<endl;
cout<<"a media das idades e : "<<res1<<endl;
cout<<"a soma das idades e : "<<res<<endl;

	
	return 0;
	
}
