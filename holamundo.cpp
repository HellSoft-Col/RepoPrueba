#include <iostream>

using namespace std;
int sumarnum (int a, int b)
{
    int resultado=0;
    resultado = a + b;
    return resultado;
}

/*Multiplicacion */
int multiplicarNumeros(int numero1, int numero2);

/* Main */
int main(){
    int n1 = 5;
    int n2 = 4;
    sumarnum(n1,n2);
    multiplicarNumeros(n1,n2);
    return 0;
}

int multiplicarNumeros(int numero1, int numero2){
    return numero1 * numero2;
}