#include <iostream>
using namespace std;

void Intercala (int A[], int p, int q, int r) {
    int *W = new int[r-p+1]; // Vetor auxiliar
    int i = p;
    int j = q+1;
    int k = 0;
    // Intercala A[p..q] e A[q+1..r]
    while (i <= q && j <= r) {
        if (A[i] <= A[j]){
            W[k++] = A[i++];
        }else{
            W[k++] = A[j++];
        }
    }

    while (i <= q) W[k++] = A[i++];
    while (j <= r) W[k++] = A[j++];

    // Copia vetor ordenado W para o vetor A
    for (i = p; i <= r; i++){
        A[i] = W[i-p];
    }
    delete [] W; // libera memória alocada
}

void mergesort(int A[], int p, int r) {
    int q = (p + r) / 2; // Dividir
    if (p < r) {
        // Conquistar
        mergesort(A, p, q);
        mergesort(A, q + 1, r);
        // Combinar
        Intercala(A, p, q, r);
    }
}

void teste(int v[]){
    for(int i = 0; i < 10; i++){
        cout << v[i] << " ";
    }
}

int main(){
    int v[] = {4, 2, 8, 7, 6, 3, 5, 1, 9, 10};
    mergesort(v, 0, 9);
    teste(v);
    cout << 9/2;
}