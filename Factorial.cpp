#include <iostream>
using namespace std;

int factorial(int n) {
    // Caso base: el factorial de 0 o 1 es 1
    if (n <= 1)
        return 1;
    // Llamada recursiva para calcular el factorial
    else
        return n * factorial(n - 1);
}

int main() {
    int numero;
    cout << "Ingresa un numero para calcular su factorial: ";
    cin >> numero;

    // Validacion para numeros no negativos
    if (numero < 0) {
        cout << "El factorial no esta definido para numeros negativos." << endl;
    } else {
        cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
    }

    return 0;
}
