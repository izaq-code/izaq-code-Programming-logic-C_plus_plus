#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <windows.h>
#include <iostream>
#include <iomanip>
#include <cstring> 
#include <conio.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

const int NUM_LIVROS = 50;//limite de livros

struct Livro {//estrutura para maior agilidade na declara��o de var
    string titulo;
    string autor;
    string status; 
};

Livro livros[NUM_LIVROS];//vetor dos livros
int atual = 0;  

// ... (c�digo anterior)

void exibirTabelaLivros() {
    cout << " __________________________________________________________\n";
    cout << "| " << setw(10) << "Livro" << " | " << setw(25) << "Autor" << " | " << setw(15) << "Status" << " |\n";
    cout << "|----------------------------------------------------------|\n";
    
    for (int i = 0; i < atual; ++i) {
    cout << "| " << setw(10) << livros[i].titulo << " | " << setw(25) << livros[i].autor << " | " << setw(15) << livros[i].status << " |\n";
    }
    
    cout << "|__________________________________________________________|\n";
}

void exibirMenu() {//fun��o para chamar a qualuqer momento do codigo
    system("cls");
    cout << " __________________________________ \n";
    cout << "|- senha do administrador (5006)   |\n";
    cout << "|1. Adicionar Livro                |" << endl;
    cout << "|2. Listar Livros                  |" << endl;
    cout << "|3. Emprestar Livro                |" << endl;
    cout << "|4. Devolver Livro                 |" << endl;
    cout << "|5. Excluir Livro                  |" << endl;
    cout << "|6. Sair                           |" << endl;
    cout << "|__________________________________|\n";
    cout << "\n";
    cout << " __________________________________ \n";
    cout << "|Escolha uma op��o:                |\n";
    cout << "|__________________________________|\n";
    cout << "\n";
}

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Portuguese");
	
    int opcao;
   	
string senhac[10] = "senha";
senhac[2] = "623";
string usuarioc[10] = "usuario";
usuarioc[2] = "izaq";
string usuario = "usuario";
string senha = "senha";
string inputUsuario;
	bool tl;
	tl = false;
	int lc, x1, y1, z1,num5, usuarios; 
	usuarios = 4;
	bool tt, tt1, intt, ul, sl; 
	intt = 0;
	int cont = 3;
	string senhaadm = "5006";
	x1 = 1;
	y1 = 1;
	z1 = 1;
	
	do{
	
	
	do{
		system("cls");
	intt = 0;
	 cout << "senha do administrador (5006)\n";
	cout <<"---------------------------------------\n";
	cout <<"-                 Digite              -\n";
	cout <<"-             1 para login            -\n";
	cout <<"-                   ou                -\n";
	cout <<"-            2 para cadastro          -\n";
	cout <<"---------------------------------------\n"<< "                ";
	cin >> lc;
	system("cls");
	
	switch (lc){
		
		case 1 :
    
    do{
    	do{
		
     cout <<"---------------------------------------\n";
     cout <<"-      Digite o nome de usu�rio:      -\n" << "                ";
	
    
    cin >> inputUsuario;
    
    for (z1=1; z1<=usuarios; z1++){
    	
    	if (inputUsuario == usuarioc[z1]){
    		ul = true;
    		break;
		}else if(z1 == usuarios){
		cout <<"-----------------------------------------\n";
		cout <<"-         usuario n�o localizado        -\n";
		cout <<"-            tente novamente            -\n";
		ul = false;
		}
	}
}while(ul == false);


	
    cout <<"---------------------------------------\n";
    cout <<"-           Digite a senha:           -\n" << "                 ";
    
    const char BACKSPACE = 8;
    const char ENTER = 13;
    string inputSenha = "";
    char ch;
    
    while ((ch = _getch()) != ENTER) {
        if (ch == BACKSPACE) {
            if (inputSenha.length() > 0) {
                cout << "\b \b";
                
            }
        } else {
            cout << '*';
            inputSenha += ch;
        }
    }


	cout <<"\n---------------------------------------\n";
    cout <<"-             Verificando...          -\n";

    if (inputUsuario == usuarioc[z1] && inputSenha == senhac[z1]) {
    
        cout <<"-         Login bem-sucedido!         -\n";
        cout <<"---------------------------------------\n";
    tl = true;
    tt1 = false;
    
    
    
    system ("pause");

        
    } else {
    
        cout <<"-     Usu�rio ou senha incorretos.    -\n";
        cout <<"---------------------------------------\n";
   
    
    }

}while(tl == false);
    break;

	case 2 :
	 cout <<"---------------------------------------\n";
     cout <<"-      Digite um nome de usu�rio:     -\n" << "                ";
     cin >> usuarioc[x1];
     intt = 1;
    cout <<"---------------------------------------\n";
    cout <<"-   Digite uma senha para o usu�rio   -\n" << "                 ";
        const char BACKSPACE2 = 8;
    const char ENTER2 = 13;
     senhac[x1] = "";
    char ch2;
    
    while ((ch2 = _getch()) != ENTER2) {
        if (ch2 == BACKSPACE2) {
            if (senhac[x1].length() > 0) {
                cout << "\b \b";
                
            }
        } else {
            cout << '*';
            senhac[x1] += ch2;
        }
        
}
x1++;
usuarios++;
}
cout<<"\n";





    
    
    do{
	
    if (intt == 1){
	
	cout <<"---------------------------------------\n";
    cout <<"-  informe a senha de administrador   -\n"<< "                 ";
    
        const char BACKSPACE1 = 8;
    const char ENTER1 = 13;
    string senhateste = "";
    char ch1;
    
    while ((ch1 = _getch()) != ENTER1) {
        if (ch1 == BACKSPACE1) {
            if (senhateste.length() > 0) {
                cout << "\b \b";
                
            }
        } else {
            cout << '*';
            senhateste += ch1;
        }
    }
    
    system("cls");
    
    if (senhateste == senhaadm){
    	
        cout <<"---------------------------------------\n";
	    cout <<"-   Usu�rio adicionado com sucesso !  -\n";
        cout <<"---------------------------------------\n";
            Sleep(1000);
    system("cls");
     tt=true;
	 tt1 = true;
	 system("pause");	
	} else{
		
		if (cont > 0){
		
	    cout <<"---------------------------------------\n";
	    cout <<"-  Senha de administrador incorreta ! -\n";
	    cout <<"-            Tente novamente          -\n";
        cout <<"---------------------------------------\n";
        tt=false;
        cont --;
        
	} else{
		
	    cout <<"---------------------------------------\n";
	    cout <<"-  Senha de administrador incorreta ! -\n";
	    cout <<"- O programa encerrar� por seguran�a  -\n";
        cout <<"---------------------------------------\n";
        
        return 1;
		
	}
	}
}
} while(tt == false and intt == 1);
}while(tt1 == true);


    do {
    	
 
    	
    	
    	
        exibirMenu();//chamando a fun��o menu
        cin >> opcao;//escrva a op��o do menu
        cin.ignore();

        switch(opcao) {//ira ler a op��o escolhida
            case 1: {//adicionar livro com a condicinal if
                Livro l;
                cout << "T�tulo: ";
                getline(cin, l.titulo);//pega o titulo do livro
                cout << "Autor: ";
                getline(cin, l.autor); 
                l.status = "dispon�vel";
                if (atual < NUM_LIVROS) {//condicinal para add livros
                    livros[atual++] = l;
                } else {//condicional de limite de livros = 50
                    cout << "Limite de livros atingido!" << endl;
                    Sleep(500); 
                }
                break;
            }
            case 2: {
                for (int i = 0; i < atual; i++) { // for para listar todos os livros 
                  exibirTabelaLivros();
                Sleep(1000);
                break;//escrever o nomes dos livros
                }
                 Sleep(1000);  
                break;
            }
            case 3: {
                string titulo;
                cout << "Digite o t�tulo do livro que deseja emprestar: ";
                getline(cin, titulo);
                bool encontrado = false;
                for (int i = 0; i < atual; i++) {//condicinal para pegar o livro emprestado se o livro for == a disponivel ele vai ser emprestado e recebe emprestado como tag
                    if (livros[i].titulo == titulo) {
                        if (livros[i].status == "dispon�vel") {
                            livros[i].status = "emprestado";
                            encontrado = true;//recebendo fun��o logica para valida��o
                            cout << "Livro emprestado com sucesso!" << endl;
                              Sleep(3000);  
                            break;
                        } else {//caso o livro nao esteja com a tag disponivel
                            cout << "Livro j� est� emprestado!" << endl;
                              Sleep(3000);  
                            encontrado = true;//recebendo fun��o logica para valida��o
                            break;
                        }
                    }
                }
                if (!encontrado) {//verifica��o de livros usando fun��o logica
                    cout << "Livro n�o encontrado!" << endl;
                      Sleep(3000);  
                }
                break;
            }
            case 4: {
                string titulo;
                cout << "Digite o t�tulo do livro que deseja devolver: ";
                getline(cin, titulo);
                bool encontrado = false;
                for (int i = 0; i < atual; i++) {//condicional para devolver apenas livros com a tag == a empretado e logo em seguida recebe disponivel como tag
                    if (livros[i].titulo == titulo && livros[i].status == "emprestado") {
                        livros[i].status = "dispon�vel";
                        encontrado = true;
                        cout << "Livro devolvido com sucesso!" << endl;
                          Sleep(3000);  
                        break;
                    }
                }
                if (!encontrado) {//verifica��o de livros usando fun��o logica
                    cout << "N�o foi poss�vel devolver o livro (n�o encontrado ou n�o estava emprestado)!" << endl;
                      Sleep(3000);  
                }
                break;
            }
            case 5: {
                string titulo;
                cout << "Digite o t�tulo do livro que deseja excluir: ";
                getline(cin, titulo);
                int indice = -1;//indice recebe -1
                for (int i = 0; i < atual; i++) {
                    if (livros[i].titulo == titulo) {//cndicinal para remover o livro
                        indice = i;//o indice recebe o I que sai do valor negativo 
                        break;
                    }
                }

                if (indice != -1) {//se o indice nao for mais -1 o livro ira ser removido 
                    for (int i = indice; i < atual - 1; i++) {
                        livros[i] = livros[i + 1];
                    }
                    atual--;//livro excluido
                    cout << "Livro exclu�do com sucesso!" << endl;
                } else {//caso n�o encontrado 
                    cout << "Livro n�o encontrado!" << endl;
                }
                  Sleep(3000);  
                break;
            }
            case 6://para sair do codigo
                cout << "Saindo..." << endl;
                Sleep(1000);
                break;
            default:
                cout << "Op��o inv�lida!" << endl;
                  Sleep(1000);  
        }
    } while(opcao != 6);//repita caso a op��o seja diferente de 6

	system("pause");
    // return 0;
}while(tt1 == true);
}


