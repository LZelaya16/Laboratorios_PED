#include <iostream>
#include <windows.h>
using namespace std;

void atacar(int &vida, int puntos)
{
    // debera disminuir la vida, modificando el valor mediante puntero
    vida -= puntos;
    if (vida < 0)
    {
        vida = 0; // Asegurarse de que la vida no sea negativa
    }
    if (vida == 0)
    {
        cout << "El personaje ha sido derrotado." << endl;
    }
    else
    {
        cout << "El personaje ha recibido " << puntos << " puntos de daño." << endl;
    }
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    
    int salud = 100;
    atacar(salud, 20);
    cout << "Salud restante luego del ataque: " << salud << endl;
    return 0;
}