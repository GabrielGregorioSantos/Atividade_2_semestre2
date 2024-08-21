#include <iostream>
#include <cmath>

struct Pais {
    double populacao;
    double taxaCrescimento;
};
using namespace std;
// Para não esquecer: Função que calcula o número de anos necessários para que a população de um país ultrapasse ou iguale a população de outro país
int calcularAnosParaCrescimento(Pais a, Pais b) {
    int anos = 0;

    while (a.populacao < b.populacao) {
        a.populacao *= (1 + a.taxaCrescimento / 100.0);
        b.populacao *= (1 + b.taxaCrescimento / 100.0);
        anos++;
    }

    return anos;
}

int main() {
    Pais paisA = {90000000, 3.0};
    Pais paisB = {200000000, 1.5};

    int anos = calcularAnosParaCrescimento(paisA, paisB);
   cout << "Numero de anos necessarios para que a populacao do pais A ultrapasse ou seja igual a populacao do pais B: " << anos <<endl;

    return 0;
}
