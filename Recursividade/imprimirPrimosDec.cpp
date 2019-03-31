#include <iostream>
using namespace std;

void imprimir(int n){
    if(n == 2){
        cout << n << " ";
        return;
    }else{
        int count;
        for(int i = 1; i<=n; i++){
            if(n%i == 0){
                count++;
            }
        }
        if(count == 2){
            cout << n << " ";
        }
        imprimir(n-1);
    }
}

int main(){
    imprimir(100);
}