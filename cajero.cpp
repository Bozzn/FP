#include <iostream>
#include <conio.h>
using namespace std;
void repositar();
void retirar();
void mostrarsaldo();
void menu();
    int saldo = 0;


    void depositar(){
        saldo += 100;
        cout << "Se han depositado 100 unidades. Nuevo Saldo: " << saldo << endl;
    }
    void retirar(){
        if (saldo >= 100)
        {
            saldo -= 100;
            cout << "Se han retirado 100 unidades. Nuevo Sueldo: " << saldo << endl;
        }
        else
        {
            cout << "Saldo insuficiente. " << endl; 
        }
    }
    void mostrarsaldo(){
        cout << "Saldo actual: " << saldo << endl;    
    }

    void menu(){
        int opcion;
        do
        {
            cout << "\n --- Cajero Automatico ---" << endl;
            cout << "1. Depositar 100." << endl;
            cout << "2. Retirar 100." << endl;
            cout << "3. Mostrar Saldo." << endl;
            cout << "4. Salir." << endl;
            cin >> opcion;
            switch (opcion)
            {
            case 1:
                depositar();
                break;
            case 2:
                retirar();
                break;
            case 3:
                mostrarsaldo();
                break;
            case 4:
                cout << "Gracias por usar el programa."; 
                break;
            
            default:
                break;
            }

        } while (opcion != 4);
    }
    int main(){
        menu();
        return EXIT_SUCCESS;
    }