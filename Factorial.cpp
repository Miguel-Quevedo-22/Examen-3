#include <iostream>
using namespace std;

// Declaracion de funciones
int factorial(int n);
void cajeroAutomatico();

int main() {
    int opcion;
    do {
        cout << "\n--- Menu Principal ---\n";
        cout << "1. Calcular Factorial\n";
        cout << "2. Usar Cajero Automatico\n";
        cout << "3. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int numero;
                cout << "\nIngrese un numero para calcular su factorial: ";
                cin >> numero;

                if (numero < 0) {
                    cout << "El factorial no esta definido para numeros negativos.\n";
                } else {
                    cout << "El factorial de " << numero << " es " << factorial(numero) << endl;
                }
                break;
            }
            case 2:
                cajeroAutomatico();
                break;
            case 3:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }
    } while (opcion != 3);

    return 0;
}

// Funcion para calcular el factorial de un numero de forma recursiva
int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Funcion del cajero automatico
void cajeroAutomatico() {
    static int saldo = 20000;  // Saldo inicializado en 20000
    int opcionCajero, cantidad;

    do {
        cout << "\n--- Menu del Cajero Automatico ---\n";
        cout << "1. Consultar saldo\n";
        cout << "2. Retirar efectivo\n";
        cout << "3. Volver al menu principal\n";
        cout << "Seleccione una opcion: ";
        cin >> opcionCajero;

        switch (opcionCajero) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;
            case 2:
                cout << "Ingrese la cantidad a retirar: ";
                cin >> cantidad;

                if (cantidad <= 0) {
                    cout << "Por favor, ingrese una cantidad valida.\n";
                } else if (cantidad > saldo) {
                    cout << "Fondos insuficientes. Su saldo actual es: $" << saldo << endl;
                } else {
                    saldo -= cantidad;
                    cout << "Ha retirado $" << cantidad << ". Su nuevo saldo es: $" << saldo << endl;
                }
                break;
            case 3:
                cout << "Regresando al menu principal...\n";
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo.\n";
        }
    } while (opcionCajero != 3);
}
