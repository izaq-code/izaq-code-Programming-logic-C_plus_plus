#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

struct Jogo {
    string nomeTime1, nomeTime2;
    int palpiteTime1, palpiteTime2;
    int resultadoTime1, resultadoTime2;
};

int maxPalpites = 0;
Jogo* jogos = nullptr;

void menu() {
    cout << "Menu:\n";
    cout << "1. Definir numero maximo de palpites\n";
    cout << "2. Inserir palpites\n";
    cout << "3. Inserir resultados\n";
    cout << "4. Calcular acertos\n";
    cout << "5. Sair\n";
    cout << "Escolha uma opcao: ";
}

void inserirPalpites() {
    if (maxPalpites == 0) {
        cout << "Você deve definir o numero maximo de palpites primeiro (opcao 1 no menu).\n";
        return;
    }

    for (int i = 0; i < maxPalpites; i++) {
        cout << "Palpite para o Jogo " << i + 1 << ":\n";
        cout << "Nome do Time 1: ";
        cin >> jogos[i].nomeTime1;
        cout << "Nome do Time 2: ";
        cin >> jogos[i].nomeTime2;
        cout << "Palpite para o Time 1: ";
        cin >> jogos[i].palpiteTime1;
        cout << "Palpite para o Time 2: ";
        cin >> jogos[i].palpiteTime2;
    }
    cout << "Palpites inseridos com sucesso!\n";
}

void inserirResultados() {
    if (jogos == nullptr) {
        cout << "Você deve inserir palpites antes de resultados.\n";
        return;
    }

    for (int i = 0; i < maxPalpites; i++) {
        cout << "Resultado para o Jogo " << i + 1 << ":\n";
        cout << "Resultado para o Time 1: ";
        cin >> jogos[i].resultadoTime1;
        cout << "Resultado para o Time 2: ";
        cin >> jogos[i].resultadoTime2;
    }
    cout << "Resultados inseridos com sucesso!\n";
}

void calcularAcertos() {
    if (jogos == nullptr) {
        cout << "Você deve inserir palpites antes de calcular acertos.\n";
        return;
    }

    int acertos = 0;
    for (int i = 0; i < maxPalpites; i++) {
        if (jogos[i].palpiteTime1 == jogos[i].resultadoTime1 && jogos[i].palpiteTime2 == jogos[i].resultadoTime2) {
            acertos++;
        }
    }
    cout << "Total de acertos: " << acertos << "\n";
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    do {
        menu();
        cin >> opcao;

        switch (opcao) {
            case 1:
              system("cls");
                cout << "Informe o número máximo de palpites de jogos: ";
                cin >> maxPalpites;
                jogos = new Jogo[maxPalpites];
                break;
            case 2:
              system("cls");
                inserirPalpites();
                break;
            case 3:
              system("cls");
                inserirResultados();
                break;
            case 4:
              system("cls");
                calcularAcertos();
                break;
            case 5:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opção inválida!\n";
                break;
        }

    } while (opcao != 5);

    delete[] jogos;
    return 0;
}
