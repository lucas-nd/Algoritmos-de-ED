/*
    Nome: Lucas do Nascimento Diniz
    Matrícula: 418184
    GitHub: https://github.com/LNascimentoD/Algoritmos-de-ED/commits/master
        **Os códigos estão todos no GitHub, caso o professor queira avaliar outros aspectos**
*/

#include <iostream>
#include "deque.cpp" // Caso for compilar o algoritmo através de uma IDE use -- #include "deque.cpp" --, caso contrário mude para -- #include "deque.h" --

using namespace std;

int main(){
    int control;

    inicio:
        cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
        cout << "-                    Podemos começar?                     -" << endl;
        cout << "-                         Sim(1)                          -" << endl;
        cout << "-                         Não(0)                          -" << endl;
        cout << "-----------------------------------------------------------" << endl;

        cin >> control;

        if(control == 1){
            deque d = deque();

            while(control == 1){
                int op;

                cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                cout << "-                         Opções:                         -" << endl;
                cout << "-                  Inserir no início(1)                   -" << endl;
                cout << "-                  Inserir no final(2)                    -" << endl;
                cout << "-                  Remover o inicial(3)                   -" << endl;
                cout << "-                   Remover o final(4)                    -" << endl;
                cout << "-                  Exibir o inicial(5)                    -" << endl;
                cout << "-                    Exibir o final(6)                    -" << endl;
                cout << "-              Verificiar se está vazio(7)                -" << endl;
                cout << "-              Imprimir DEQUE DINÂMICO(8)                 -" << endl;
                cout << "-         Imprimir DEQUE DINÂMICO ao contrário(9)         -" << endl;
                cout << "-                        Sair(10)                         -" << endl;
                cout << "-----------------------------------------------------------" << endl;

                cin >> op;

                switch (op){
                    case 1:
                    { 
                        int data_start;
                        cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                        cout << "-            Informe o valor a ser inserido:              -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                        cin >> data_start;
                        d.insert_ini(data_start);
                    }
                    break;
                    case 2:
                    {
                        int data_end;
                        cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                        cout << "-            Informe o valor a ser inserido:              -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                        cin >> data_end;
                        d.insert_end(data_end);
                    }
                    break;
                    case 3:
                    {
                        if(d.itsEmpty()){
                            cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                            cout << "-                  O DEQUE está vazio!                    -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }else{
                            int rem_start = d.remove_ini();
                            cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                            cout << "-           O valor removido foi: "<< rem_start << "             -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }
                    }
                    break;
                    case 4:
                    {
                        if(d.itsEmpty()){
                            cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                            cout << "-                  O DEQUE está vazio!                    -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }else{
                            int rem_fim = d.remove_end();
                            cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                            cout << "-           O valor removido foi: "<< rem_fim << "             -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }
                    }
                    break;
                    case 5:
                    {
                        if(d.itsEmpty()){
                            cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                            cout << "-                  O DEQUE está vazio!                    -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }else{
                            int head = d._head();
                            cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                            cout << "-             O valor buscado é: "<< head << "              -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }
                    }
                    break;
                    case 6:
                    {
                        if(d.itsEmpty()){
                            cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                            cout << "-                  O DEQUE está vazio!                    -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }else{
                            int tail = d._tail();
                            cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                            cout << "-             O valor buscado é: "<< tail << "              -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }
                    }
                    break;
                    case 7:
                    {
                        if(d.itsEmpty()){
                            cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                            cout << "-               O DEQUE está vazio? Sim                   -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }else{
                            cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                            cout << "-               O DEQUE está vazio? Não                   -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }
                    }
                    break;
                    case 8:
                    {
                        cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                        d.print();
                        cout << endl;
                        cout << "-----------------------------------------------------------" << endl;
                    }
                    break;
                    case 9:
                    {
                        cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                        d.print_reverse();
                        cout << endl;
                        cout << "-----------------------------------------------------------" << endl;
                    }
                    break;
                    case 10:
                    {
                        control = 0;
                        d.~deque();
                    }
                    break;
                    default:
                    {
                        cout << "--------------------- DEQUE DINÂMICO ----------------------" << endl;
                        cout << "-           A opção selecionada não é válida!             -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                    }
                }
            }
        }else{
            return 0;
        }
}