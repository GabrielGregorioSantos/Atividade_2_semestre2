#include <iostream>
#include <cstring> // Para usar std::strncpy

using namespace std;

struct Aluno {
    int matricula;
    char nome[101];
};

int main() {
    constexpr int LIMITE_ALUNOS = 50;
    Aluno alunos[LIMITE_ALUNOS];
    int numAlunos;

    cout << "Digite o numero de alunos (ate " << LIMITE_ALUNOS << "): ";
    cin >> numAlunos;

    if (numAlunos < 1 || numAlunos > LIMITE_ALUNOS) {
        cout << "Numero invalido de alunos!" << endl;
        return 1;
    }

    cin.ignore();

    for (int i = 0; i < numAlunos; ++i) {
        cout << "Digite a matricula do aluno " << (i + 1) << ": ";
        cin >> alunos[i].matricula;
        cin.ignore();

        cout << "Digite o nome do aluno " << (i + 1) << " (maximo de 100 caracteres): ";
        cin.getline(alunos[i].nome, 101);
    }

    cout << "\nDados dos alunos cadastrados:\n";
    for (int i = 0; i < numAlunos; ++i) {
        cout << "Matricula: " << alunos[i].matricula << ", Nome: " << alunos[i].nome << endl;
    }

    return 0;
}
