#include <iostream>

using namespace std;


int suma(int x, int y);

int main(){
    int num1=8;
    int num2=5;

    suma(num1,num2);
    return 0;
}

int suma(int x, int y){
    return x+y;
}