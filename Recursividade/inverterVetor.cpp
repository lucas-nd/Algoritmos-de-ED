#include <iostream>
using namespace std;

void inverter(int V[], int m, int n){
    if(m > n){
        return;
    }else{
        int aux = V[m];
        V[m] = V[n-1];
        V[n-1] = aux;

        inverter(V, m+1, n-1);
    }
}

int main(){
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    inverter(v, 0, 10);

    for(int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }
}