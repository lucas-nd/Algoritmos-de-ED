#include <iostream>
#include "pilhaDupla.cpp"

using namespace std;

int main(){
    pilhaDupla p = pilhaDupla(2);
    p.pushA(10);
    p.pushB(20);
    p.pushA(2);

    if(p.AItsEmpty()){
        cout << "A está vazio";
    }

    if(p.BItsEmpty()){
        cout << "B está vazio";
    }
}