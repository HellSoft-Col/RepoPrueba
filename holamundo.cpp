#include <iostream>

using namespace std;

/*Multiplicacion */
int multiplicarNumeros(int numero1, int numero2);
int suma(int x, int y);

/* Main */
int main(){
    int n1 = 5;
    int n2 = 4;
    multiplicarNumeros(n1,n2);
    suma(n1,n2);
    return 0;
}


int suma(int x, int y){
    return x+y;
}

int multiplicarNumeros(int numero1, int numero2){
    return numero1 * numero2;
}
