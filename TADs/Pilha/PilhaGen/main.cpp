#include <iostream>
#include "Pilha.cpp"

using namespace std;

int main(){
    int b = 10;
    int * a = &b;
    char d = 'B';
    char * c = &d;
    Pilha p = Pilha();
    p.push(a);
    p.push(c);
    char * top = (char *)p.top();
    cout << *(char *)p.top();
}