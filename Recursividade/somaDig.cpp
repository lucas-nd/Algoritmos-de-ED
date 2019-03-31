#include <iostream>
using namespace std;

int somaDig(int n){
    if(n/10 < 1){
        return n%10;
    }else{
        return n%10 + somaDig(n/10);
    }
}

int main(){
    cout << somaDig(35725);
}