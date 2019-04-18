#include <iostream>
#include "deque.cpp"

using namespace std;

int main(){
    deque d = deque();
    d.insert_ini(10);
    d.insert_ini(9);
    d.insert_ini(8);
    d.insert_ini(7);
    d.insert_ini(6);
    d.print();
    d.remove_end();
    cout << endl;
    d.print();
}