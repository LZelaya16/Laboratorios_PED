#include <iostream>
using namespace std;


void curar(float &vida, float cantidad){
    vida += cantidad;
    cout << "Has sido curado. Tu vida ahora es: " << vida << endl;
}


int main(){

    float vida = 100.0f;
    float cantidad = 25.0f;

    curar(vida, cantidad);

    return 0;
}