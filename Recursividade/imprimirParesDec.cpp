#include <iostream>
using namespace std;

void imprimir(int n){
    if(n == 0){
        cout << n << " ";
        return;
    }else{
        if(n%2 == 0){
            cout << n << " ";
            imprimir(n-2);
        }else{
            imprimir(n-1);
        }
    }
}

int main(){
    imprimir(100);
}