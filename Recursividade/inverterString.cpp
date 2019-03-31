#include <iostream>
using namespace std;

void inverterString(char string[], int m, int n){
    if(m > n){
        return;
    }else{
        char aux = string[m];
        string[m] = string[n-1];
        string[n-1] = aux;

        inverterString(string, m+1, n-1);
    }
}

int main(){
    char string[3] = {'a', 'b', 'c'};

    inverterString(string, 0, 3);

    for(int i = 0; i < 3; i++){
        cout << string[i];
    }
}