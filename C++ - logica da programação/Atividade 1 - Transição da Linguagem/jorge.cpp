#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

setlocale(LC_ALL,"portuguese");
		double altjo,altro,aujo,auro;
		int anos;
altjo=1.72;
altro=1.65;
aujo=0.03;
auro=0.04;

while(altro < altjo) {

altjo=altjo+aujo;
altro=altro+auro;
anos=anos+1;

}


cout<<"ira demorar : "<<anos<<" anos para roberto passar jorge";
	return 0;
}
