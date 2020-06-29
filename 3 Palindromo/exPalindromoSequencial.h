#ifndef PILHASEQUENCIAL_H_INCLUDED
#define PILHASEQUENCIAL_H_INCLUDED

template <typename Tipo>
struct Pilha
{
    //declarando as vari�veis
    Tipo *v;
    int topo;
    int tamanho;

    //este procedimento inicializa uma
    //vari�vel do tipo Pilha
    Pilha(int tam)
    {
        tamanho=tam;
        topo=-1;
        v = new Tipo[tamanho];
    }
    //este procedimento libera as posic�es
    //de mem�ria alocada pelo ponteiro v (*v)
    ~Pilha()
    {
        delete v;
    }
    //procedimento para empilhar um novo
    //elemento na pilha
    void empilha(Tipo x)
    {
        topo++;
        v[topo]=x;
    }
    /*
    fun��o respons�vel por remover (desempilhar)
    um elemento da pilha, retornando esse valor
    � quem chamor.
    */
    Tipo desempilha()
    {
        Tipo temp=v[topo];
        topo--;
        return temp;
    }

    /*
        fun��o respons�vel por retornar
        o elemento do topo da pilha
     */
    Tipo elementodotopo()
    {
        return v[topo];
    }

    /*
    fun��o respons�vel pela verifica��o
    de pilha cheia
    */
    bool pilhacheia()
    {
        return topo==tamanho-1;
    }

    /*
    fun��o respons�vel pela verifica��o
    de pilha vazia
    */
    bool pilhavazia()
    {
        return  topo==-1;
    }
};

#endif // PILHASEQUENCIAL_H_INCLUDED

