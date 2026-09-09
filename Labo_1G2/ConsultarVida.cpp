#include<iostream>
using namespace std;
#include <windows.h>

void ConsultarVida(int vida) {
        //debera mostrar la vida actual del personaje
        cout << "La vida actual de su personaje es: " << vida << endl;


    }


int main() {
    SetConsoleOutputCP(CP_UTF8);

    int salud = 100; // Valor inicial de la vida del personaje
    ConsultarVida(salud);


   
    return 0;
}