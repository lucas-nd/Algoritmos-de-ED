#include <iostream>
using namespace std;

void bubblesort(int v[], int n){
    //bool trocas = true;

    for(int i = 0; i < n - 1; i++){
        //trocas = false;
        for(int j = n-1; j > i; j--){
            if(v[j] < v[j-1]){
                int aux = v[j];
                v[j] = v[j - 1];
                v[j - 1] = aux;
                //trocas = true;
            }
        }
    }
}

void insertionsort(int v[], int n){
    int i, j, key;
    for(int j = 1; j < n; j++){
        key = v[j];
        i = j - 1;

        while(i >= 0 && v[i] > key){
            v[i + 1] = v[i];
            i--;
        }

        v[i + 1] = key;
    }
}

void selectionsort(int v[], int n){
    for(int i = 0; i < n; i++){
        int min = i;

        for(int j = i + 1; j < n; j++){
            if(v[j] < v[min]){
                min = j;
            }
        }

        int aux = v[min];
        v[min] = v[i];
        v[i] = aux;
    }
}

void teste(int v[], int n){
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}

int main(){
    int v[5] = {3, 2, 4, 5, 6};

    insertionsort(v, 5);
    teste(v, 5);
}