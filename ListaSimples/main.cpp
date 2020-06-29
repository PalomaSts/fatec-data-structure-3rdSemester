#include <iostream>
#include "ListaSimplesSequencial.h"
using namespace std;

int main()
{
    int tamanho;
    cout<<"Digite o tamanho da lista:";
    cin>>tamanho;
    Lista<int> lista(tamanho);
    int x,opc;
    do{
        cout <<"\nMenu - Lista Linear"<< endl;
        cout<<"1-insere no fim"<<endl;
        cout<<"2-insere no inicio"<<endl;
        cout<<"3-remove do fim"<<endl;
        cout<<"4-remove do inicio"<<endl;
        cout<<"5-exibe primeiro"<<endl;
        cout<<"6-exibe ultimo"<<endl;
        cout<<"7-exibe todos"<<endl;
        cout<<"9-fim"<<endl;
        cout<<"Selecione:";
        cin>>opc;
        switch(opc){
        case 1:
            if(lista.listacheia()){
                cout<<"Lista cheia..."<<endl;
            }
            else{
                cout<<"Valor:";
                cin>>x;
                lista.inserir(x);
            }
            break;
        case 2:
            if(lista.listacheia()){
                cout<<"Lista cheia..."<<endl;
            }
            else{
                cout<<"Valor:";
                cin>>x;
                lista.inserir_Inicio(x);
            }
            break;
        case 3:
            if(lista.listavazia()){
                cout<<"Lista vazia...."<<endl;
            }
            else{
                cout<<"Removido:"<<lista.remover()<<endl;
            }
            break;
        case 4:
            if(lista.listavazia()){
                cout<<"Lista vazia...."<<endl;
            }
            else{
                cout<<"Removido:"<<lista.remover_Inicio()<<endl;
            }
            break;
        case 5:
            if(lista.listavazia()){
                cout<<"Lista vazia...."<<endl;
            }
            else{
                cout<<"Primeiro elemento da Lista:"<<endl;
                    cout<<lista.primeiro()<<" ";
            }
            break;
        case 6:
            if(lista.listavazia()){
                cout<<"Lista vazia...."<<endl;
            }
            else{
                cout<<"Primeiro elemento da Lista:"<<endl;
                    cout<<lista.ultimo()<<" ";
            }
            break;
        case 7:
            if(lista.listavazia()){
                cout<<"Lista vazia...."<<endl;
            }
            else{
                    if(lista.inicio<=lista.fim){
                        for(int i=lista.inicio; i<=lista.fim; i++){
                            cout<<lista.v[i]<<" ";
                        }
                    }
                    else{
                        for(int i=lista.inicio; i<=lista.tamanho-1; i++)
                            cout<<lista.v[i];
                        for(int i=0; i<=lista.fim; i++)
                            cout<<lista.v[i];
                    }
            }
            break;
        case 9:
            cout<<"Fim..."<<endl;
            break;
        default:
            cout<<"opcao invalida"<<endl;
            break;
        }
    }while(opc!=9);
    return 0;
}
