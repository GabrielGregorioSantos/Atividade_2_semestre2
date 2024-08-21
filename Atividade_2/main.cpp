#include <iostream>

using namespace std;

struct Valores {
    int a;
    int b;
    int c;
};

int encontrarMaior(int x, int y, int z) {
    if (x >= y && x >= z) {
        return x;
    } else if (y >= x && y >= z) {
        return y;
    } else {
        return z;
    }
}

int main() {
    Valores valores;

    cout << "Digite o primeiro valor: ";
    cin >> valores.a;

    cout << "Digite o segundo valor: ";
    cin >> valores.b;

    cout << "Digite o terceiro valor: ";
    cin >> valores.c;

    int maior = encontrarMaior(valores.a, valores.b, valores.c);
    
    cout << "O maior valor e: " << maior << endl;

    return 0;
}
