#include <iostream>
using namespace std;

int fat(int m){
    if(m == 1){
        return 1;
    }else{
        return fat(m-2) * m;
    }
}

int main(){
    cout << fat(5);
}