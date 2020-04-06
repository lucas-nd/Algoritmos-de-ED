#include <iostream>
using namespace std;

int separa (int *A, int p, int r) {
    int c = A[r];
    int j = p;
    for (int k = p; k < r; k++) {
        if (A[k] <= c) {
            std:: swap(A[k], A[j]);
            j++;
        }
    }
    A[r] = A[j];
    A[j] = c;
    return j;
}

void quicksort(int *A, int p, int r) {
    if (p >= r)
        return;
    int i = separa(A, p, r);
    quicksort(A, p, i-1);
    quicksort(A, i+1, r);
}

void teste(int v[]){
    for(int i = 0; i < 11; i++){
        cout << v[i] << " ";
    }
}

int main(){
    int v[11] = {13, 12, 4, 10, 6, 7, 11, 3, 2, 1, 8};

    quicksort(v, 0, 10);
    teste(v);
}