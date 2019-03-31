#include <iostream>
using namespace std;

int fat(int m){
    if(m == 0){
        return 1;
    }else{
        return fat(m-1) * m;
    }
}

int main(){
    cout << fat(6);
}