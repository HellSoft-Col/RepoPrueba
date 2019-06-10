#include <iostream>

using namespace std;

/*Multiplicacion */
int multiplicarNumeros(int numero1, int numero2);

/* Main */
int main(){
    int n1 = 5;
    int n2 = 4;
    multiplicarNumeros(n1,n2);
    return 0;
}

int multiplicarNumeros(int numero1, int numero2){
    return numero1 * numero2;
}