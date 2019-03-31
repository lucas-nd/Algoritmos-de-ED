#include <iostream>
using namespace std;

int potencia(int n, int k){
    if(k == 1){
        return n;
    }else{
        return n * potencia(n, k-1);
    }
}

int main(){
    cout << potencia(3, 4);
}