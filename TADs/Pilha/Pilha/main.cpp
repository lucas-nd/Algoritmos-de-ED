#include <iostream>
#include "pilha.cpp"

using namespace std;

int main(){
    pilha p = pilha();
    p.push(10);
    p.push(15);

    //p.pop();
    //p.pop();

    cout << p._top();
}