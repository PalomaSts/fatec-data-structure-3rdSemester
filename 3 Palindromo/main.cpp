#include <iostream>
#include <string>
#include <stdio.h>
#include "exPalindromoSequencial.h"
using namespace std;
int main()
{
    int verifica=0;
    cout << "Palindromo" << endl;
    do
    {
        cout<<"**********MENU**********"<<endl;
        cout<<"1 - Nova Frase"<<endl;
        cout<<"9 - Fim"<<endl;
        cin>>verifica;
        getchar();

        switch(verifica)
        {
        case 1:
        {
            cout<<"**********Nova Frase**********"<<endl;
            Pilha<char> p(50);
            string frase;
            string fraseWithoutSpace;

            //captura a frase do usu�rio
            cout<<"Digite a frase:";
            getline(cin,frase);

            //tira os espa�os em branco da frase escrita pelo usu�rio
            fraseWithoutSpace="";
            for (int i=0; i<frase.size(); i++)
            {
                if (frase[i] != ' ')
                {
                    fraseWithoutSpace += frase[i];
                }
            }

            //Muda todos os caracteres para mai�sculo
            for (int i=0; i<fraseWithoutSpace.size(); i++)
            {
                fraseWithoutSpace[i] = toupper (fraseWithoutSpace[i]);
            }

            //mostra a frase j� ajustada e o tamanho
            cout<<fraseWithoutSpace<<endl;
            cout<<"tamanho:"<<fraseWithoutSpace.size()<<endl;

            //coloca a frase escrita pelo usu�rio na pilha
            for (int i=0; i < fraseWithoutSpace.size(); i++)
            {
                if(p.pilhacheia()==false)
                {
                    p.empilha(fraseWithoutSpace.at(i));
                }
                else
                {
                    cout<<"Pilha cheia"<<endl;
                    break;
                }
            }

            if(p.pilhacheia()==false)
            {

                //verifica se � palindromo parte 1
                for (int i=0; i < fraseWithoutSpace.size(); i++)
                {
                    if (fraseWithoutSpace.at(i) == p.elementodotopo())
                    {
                        p.desempilha();
                    }
                    else
                    {
                        break;
                    }
                }

                //verifica se � palindromo parte 2
                if (p.pilhavazia())
                {
                    cout<<"A frase "<<fraseWithoutSpace<<" eh palindromo"<<endl;
                }
                else
                {
                    cout<<"A frase "<<fraseWithoutSpace<<" NAO eh palindromo"<<endl;
                    for (int i=0; i < fraseWithoutSpace.size(); i++)
                    {
                        p.desempilha();//esvazia a pilha para a pr�xima frase
                    }
                }

            }
            break;
        }
        case 9:
        {
            cout<<"Fim..."<<endl;
            break;
        }

        default:
        {
            cout<<"opcao invalida"<<endl;
            break;
        }

        }
    }
    while(verifica!=9);

    return 0;
}
