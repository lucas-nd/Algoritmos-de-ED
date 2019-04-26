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
    int control, size;

    start:
        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
        cout << "-                    Podemos começar?                     -" << endl;
        cout << "-                         Sim(1)                          -" << endl;
        cout << "-                         Não(0)                          -" << endl;
        cout << "-----------------------------------------------------------" << endl;

        cin >> control;

        if(control == 1){
            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
            cout << "-                Qual é o tamanho do DEQUE?               -" << endl;
            cout << "-----------------------------------------------------------" << endl;

            cin >> size;

            if(size <= 0){
                cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                cout << "-           A opção selecionada não é válida!             -" << endl;
                cout << "-----------------------------------------------------------" << endl;
                goto start;
            }

            deque d = deque(size);

            while(control == 1){
                int op;

                cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                cout << "-                         Opções:                         -" << endl;
                cout << "-                  Inserir no início(1)                   -" << endl;
                cout << "-                  Inserir no final(2)                    -" << endl;
                cout << "-                  Remover o inicial(3)                   -" << endl;
                cout << "-                   Remover o final(4)                    -" << endl;
                cout << "-                  Exibir o inicial(5)                    -" << endl;
                cout << "-                    Exibir o final(6)                    -" << endl;
                cout << "-              Verificiar se está vazio(7)                -" << endl;
                cout << "-              Imprimir DEQUE ESTÁTICO(8)                 -" << endl;
                cout << "-         Imprimir DEQUE ESTÁTICO ao contrário(9)         -" << endl;
                cout << "-                        Sair(10)                         -" << endl;
                cout << "-----------------------------------------------------------" << endl;

                cin >> op;

                switch (op){
                    case 1:
                    { 
                        int data_start;
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        cout << "-            Informe o valor a ser inserido:              -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                        cin >> data_start;
                        d.insert_ini(data_start);
                    }
                    break;
                    case 2:
                    {
                        int data_end;
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        cout << "-            Informe o valor a ser inserido:              -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                        cin >> data_end;
                        d.insert_end(data_end);
                    }
                    break;
                    case 3:
                    {
                        if(d.itsEmpty()){
                            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                            cout << "-                  O DEQUE está vazio                     -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }else{
                            int rem_start = d.remove_ini();
                            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                            cout << "-           O valor removido foi: "<< rem_start << "             -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }
                    }
                    break;
                    case 4:
                    {
                        if(d.itsEmpty()){
                            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                            cout << "-                  O DEQUE está vazio                     -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }else{
                            int rem_end = d.remove_end();
                            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                            cout << "-           O valor removido foi: "<< rem_end << "             -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }
                    }
                    break;
                    case 5:
                    {
                        if(d.itsEmpty()){
                            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                            cout << "-                  O DEQUE está vazio                     -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }else{
                            int head = d.head();
                            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                            cout << "-             O valor buscado é: "<< head << "              -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }
                    }
                    break;
                    case 6:
                    {
                        if(d.itsEmpty()){
                            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                            cout << "-                  O DEQUE está vazio                     -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }else{
                            int tail = d.tail();
                            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                            cout << "-             O valor buscado é: "<< tail << "              -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }
                    }
                    break;
                    case 7:
                    {
                        if(d.itsEmpty()){
                            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                            cout << "-               O DEQUE está vazio? Sim                   -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }else{
                            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                            cout << "-               O DEQUE está vazio? Não                   -" << endl;
                            cout << "-----------------------------------------------------------" << endl;
                        }
                    }
                    break;
                    case 8:
                    {
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        d.print();
                        cout << endl;
                        cout << "-----------------------------------------------------------" << endl;
                    }
                    break;
                    case 9:
                    {
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        d.print_reverse();
                        cout << endl;
                        cout << "-----------------------------------------------------------" << endl;
                    }
                    break;
                    case 10:
                    {
                        control = 0;
                        d.destrutor();
                    }
                    break;
                    default:
                    {
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        cout << "-           A opção selecionada não é válida!             -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                    }
                }
            }
        }else if(control != 0){
            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
            cout << "-           A opção selecionada não é válida!             -" << endl;
            cout << "-----------------------------------------------------------" << endl;
            goto start;
        }else{
            return 0;
        }
}