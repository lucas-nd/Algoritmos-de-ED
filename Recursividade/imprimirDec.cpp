#include <iostream>
using namespace std;

void imprimir(int n){
    if(n == 0){
        cout << n << " ";
        return;
    }else{
        cout << n << " ";
        imprimir(n-1);
    }
}

int main(){
    imprimir(100);
}