#include <iostream>
#include <windows.h>
using namespace std;


void curar(float &vida, float cantidad){
    vida += cantidad;
    cout << "Has sido curado. Tu vida ahora es: " << vida << endl;
}


int main(){

    SetConsoleOutputCP(CP_UTF8); 
    float vida = 100.0f;
    float cantidad = 20.0f;

    if(vida < 100.0f){
        curar(vida, cantidad);
    }
    else{
        cout << "Tu vida ya está al máximo." << endl;
    }

    return 0;
}