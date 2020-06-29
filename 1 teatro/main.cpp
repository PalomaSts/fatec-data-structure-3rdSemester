#include <iostream>
#include "teatro.h"

using namespace std;

int main()
{
    int q=0, opc, cont=0, n=0;
    cout<<"Quantos lugares tem no teatro?"<<endl;
    cin>>q;
    cout<<"Quantas pessoas ja estao dentro do teatro?"<<endl;
    cin>>cont;

    Lugares lug(q);
    do
    {
        cout<<"Escolha uma das opções abaixo: "<<endl;
        cout<<"1 - Comprar ingresso"<<endl;
        cout<<"2 - Trocar lugar"<<endl;
        cout<<"3 - Devolver ingresso"<<endl;
        cin>>opc;

        switch(opc)
        {
        case 1:
            do
            {
                cout<<"Qual lugar você deseja?"<<endl;
                cin>>n;
                if(n>q)
                {
                    cout<<"Numero fora do padrao, tente novamente."<<endl;
                }
            }
            while(n>q);

            lug[n].cadeiras();
        }

    }



}
