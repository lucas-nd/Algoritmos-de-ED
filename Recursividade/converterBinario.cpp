#include <iostream>
using namespace std;

void converter(int n){
    if(n/2 != 0){
        converter(n/2);
    }
    cout << n%2;
}

int main(){
    converter(10);
}