#include <iostream>

struct Temperatura {
    double fahrenheit;
    double celsius;
};
using namespace std;
//Para não esquecer:Essa é a função para converter Fahrenheit para Celsius
double converterFahrenheitParaCelsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
    Temperatura temp;

    cout << "Conversao de Fahrenheit para Celsius" << endl;
    cout << "Fahrenheit  |  Celsius" << endl;
    cout << "------------------------" << endl;

    for (int f = 0; f <= 100; f++) {
        temp.fahrenheit = f;
        temp.celsius = converterFahrenheitParaCelsius(f);
        cout << temp.fahrenheit << "          |  " << temp.celsius << std::endl;
    }

    return 0;
}
