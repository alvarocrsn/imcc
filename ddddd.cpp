#include <iostream>

using namespace std;

int main(){

float peso, altura, imc;

cout << "Ingrese el peso en Kilogramos";
cin >> peso;

cout << "Ingrese su altura en Metros";
cin >> altura;

imc = peso / (altura * altura);

cout << "Su indice de masa corporal es: " << imc << endl;

if (imc < 16.5){

    cout << "Empeza a comer";

} else if (imc >= 16.5 && imc < 18.5){

    cout << "esta bien";

}

return 0;
}
