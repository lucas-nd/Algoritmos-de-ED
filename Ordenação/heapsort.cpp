#include <iostream>
using namespace std;

void constroiHeap (int A[], int n) { // n = último índice de A
    for (int k = 1; k < n; k++) {
        // v[1..k] é um heap
        int f = k+1;
        while (f > 1 && A[f/2] < A[f]) {
            std:: swap(A[f/2], A[f]);
            f = f/2;
        }
    }
}

void peneira (int A[], int n) { /* n = último índice de A */
    int f = 2;
    while (f <= n) {
        if (f < n && A[f] < A[f+1])
            f = f + 1;
        // f é o filho mais valioso de f/2
        if (A[f/2] >= A[f])
            break;
        std:: swap(A[f/2], A[f]);
        f = f*2;
    }
}

void heapsort (int A[], int n) {
    constroiHeap(A, n);
    for (int k = n; k >= 2; k--) {
        std:: swap(A[1], A[k]);
        peneira(A, k-1);
    }
}

void teste(int v[]){
    for(int i = 0; i < 11; i++){
        cout << v[i] << " ";
    }
}

int main(){
    int v[11] = {13, 12, 4, 10, 6, 7, 11, 3, 2, 1, 8};

    heapsort(v, 11);
    teste(v);
}