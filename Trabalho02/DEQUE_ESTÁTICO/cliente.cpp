#include <iostream>
#include "deque.cpp"

using namespace std;

int cliente(){
    int i, tamanho;

    inicio:
        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
        cout << "-                    Podemos começar?                     -" << endl;
        cout << "-                         Sim(1)                          -" << endl;
        cout << "-                         Não(0)                          -" << endl;
        cout << "-----------------------------------------------------------" << endl;

        cin >> i;

        if(i == 1){
            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
            cout << "-                Qual é o tamanho do DEQUE?               -" << endl;
            cout << "-----------------------------------------------------------" << endl;

            cin >> tamanho;
            deque d = deque(tamanho);

            while(i == 1){
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
                        int dado_inicio;
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        cout << "-            Informe o valor a ser inserido:              -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                        cin >> dado_inicio;
                        d.insert_ini(dado_inicio);
                    }
                    break;
                    case 2:
                    {
                        int dado_fim;
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        cout << "-            Informe o valor a ser inserido:              -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                        cin >> dado_fim;
                        d.insert_end(dado_fim);
                    }
                    break;
                    case 3:
                    {
                        int rem_inicio = d.remove_ini();
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        cout << "-           O valor removido foi: "<< rem_inicio << "             -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                    }
                    break;
                    case 4:
                    {
                        int rem_fim = d.remove_end();
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        cout << "-           O valor removido foi: "<< rem_fim << "             -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                    }
                    break;
                    case 5:
                    {
                        int head = d.head();
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        cout << "-             O valor buscado é: "<< head << "              -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                    }
                    break;
                    case 6:
                    {
                        int tail = d.tail();
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        cout << "-             O valor buscado é: "<< tail << "              -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
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
                        cout << "-             " ;
                        d.print();
                        cout << "              -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                    }
                    break;
                    case 9:
                    {
                        cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
                        cout << "-             " ;
                        d.print_reverse();
                        cout << "              -" << endl;
                        cout << "-----------------------------------------------------------" << endl;
                    }
                    break;
                    case 10:
                    {
                        i = 0;
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
        }else if(i != 0){
            cout << "--------------------- DEQUE ESTÁTICO ----------------------" << endl;
            cout << "-           A opção selecionada não é válida!             -" << endl;
            cout << "-----------------------------------------------------------" << endl;
            goto inicio;
        }else{
            return 0;
        }
}