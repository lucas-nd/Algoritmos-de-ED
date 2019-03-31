#include <iostream>
using namespace std;

int menorVetor(int v[], int max, int menor){
    if(max == 0){
        return menor;
    }else{
        if(v[max-1] < menor){
            menor = v[max-1];
        }
        menorVetor(v, max-1, menor);
    }
}

int main(){
    int v[10] = {12,2,3,4,7,4,5,6,10,11};

    cout << menorVetor(v, 10, 100);
}