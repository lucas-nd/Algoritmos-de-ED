#include <iostream>
using namespace std;

void Intercala_recursivo (int *U, int *V, int *W, int nU, int nV, int i, int j) {
        if (i < nU && j < nV) {
            if (U[i] <= V[j]) {
				W[i+j] = U[i];
				Intercala_recursivo(U,V,W,nU,nV,i+1,j);
            } 
            else {
				W[i+j] = V[j];
				Intercala_recursivo(U,V,W,nU,nV,i,j+1);
            } 
        } 
        else if (i < nU) {
            W[i+j] = U[i];
            Intercala_recursivo(U,V,W,nU,nV,i+1,j);
        }
        else if (j < nV) {
            W[i+j] = V[j];
            Intercala_recursivo(U,V,W,nU,nV,i,j+1);
        }
}

void Intercala_recursivo_v2 (int *A, int *W, int q, int r, int i, int j, int k) {
        if (i <= q && j <= r) {
            if (A[i] <= A[j]) {
				W[k] = A[i];
				Intercala_recursivo_v2(A,W,q,r,i+1,j,k+1);
            } 
            else {
				W[k] = A[j];
				Intercala_recursivo_v2(A,W,q,r,i,j+1,k+1);
            } 
        } 
        else if (i <= q) {
            W[k] = A[i];
            Intercala_recursivo_v2(A,W,q,r,i+1,j,k+1);
        }
        else if (j <= r) {
            W[k] = A[j];
            Intercala_recursivo_v2(A,W,q,r,i,j+1,k+1);
        }
}

void print_array(int *A, int n) {
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";
	cout << endl;
}

int main() {
    
    // Função intercala recursiva
    int C[] = {10,20,30,40,50,60,70,80};
    int D[] = {11,21,31,33,34};
    int nC = sizeof(C)/sizeof(int);
    int nD = sizeof(D)/sizeof(int);
    int *W = new int[nC + nD];
    Intercala_recursivo(C,D,W,nC,nD,0,0);
    print_array(W,nC+nD);
    
    
    int A[] = {10,20,30,40,50,11,21,31,41,51};
    int nA = sizeof(A)/sizeof(int);
    int *W2 = new int[nA];
    Intercala_recursivo_v2 (A, W2, 4, 9, 0, 5, 0);
    print_array(W2,nA);
}