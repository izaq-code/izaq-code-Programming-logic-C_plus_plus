#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char** argv) {

  setlocale(LC_ALL,"portuguese"); 
  
  int mes;
  string est;
  
cout <<"Janeiro  (1): Ver�o-||Setembro (9): Inverno \n";
cout <<"Fevereiro (2):Ver�o  || Outubro (10): Primavera \n";
cout << "Mar�o (3): Ver�o    ||Novembro (11): Primavera \n";
cout << "Abril (4): Outono   ||Dezembro (12): Primavera \n";
cout << "Maio  (5): Outono   || \n";
cout << "Junho (6): Outono   || \n";
cout << "Julho (7): Inverno  || \n";
cout <<"Agosto (8): Inverno  || \n";
   
   cout << "Qual m�s deseja saber a esta��o? \n";
   cin >> mes;

    switch (mes) {
	

      case 1:
      	
       est = "Janeiro � ver�o";
       break;
       
      case  2:
      	
         est = "Fevereiro � ver�o";
         break;
      case  3:
      	
              est = "Mar�o � ver�o";
              break;
      case  4:
      	
                       est = "est <- Abril � outono";
               break;          
      case  5:
      	
           est = "est <- Maio � outono";
               break;       
      case  6:
      	
              est = "Junho � outono";
              break;
      case  7:
      	
            est = "Julho � inverno";
            break;
      case  8:
      	
      est = "Agosto � inverno";
      break;
      case  9:
      	
           est = "Setembro � Inverno";
           break;
      case  10:
      	
             est =  "Outubro � Primavera";
             break;
      case  11:
      	
                 est = "Novembro � Primavera";
                 break;
      case  12:
                   est = "Dezembro � Primavera";
                   break;
  }
      
     cout << "A esta��o do ano correspondente ao m�s:" << est << endl;
  
	system("pause");  
	//return 0;
}
