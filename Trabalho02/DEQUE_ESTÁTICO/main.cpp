#include <iostream>
#include "deque.cpp"

using namespace std;

int main(){
    deque d = deque(10);
    d.insert_ini(1);
    d.insert_ini(2);
    d.insert_ini(3);
    d.insert_ini(4);
    d.insert_ini(5);
    d.insert_ini(6);
    d.insert_ini(7);
    d.insert_end(0);
    cout << d.remove_end() << endl;
    cout << d.tail() << endl;
    d.print();
    cout << endl;
    d.print_reverse();
    cout << endl;
    d.teste();
}