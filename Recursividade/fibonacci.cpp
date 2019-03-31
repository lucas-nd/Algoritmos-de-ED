#include <iostream>
using namespace std;

int fibonacci(int m){
    if(m <= 3){
        return 1;
    }else{
        return fibonacci(m-1) + fibonacci(m-2);
    }
}

int main(){
    cout << fibonacci(9);
}