#ifndef LISTASIMPLESSEQUENCIAL_H_INCLUDED
#define LISTASIMPLESSEQUENCIAL_H_INCLUDED

template <typename Tipo>
struct Lista{
    //definindo as vari�veis
    Tipo *v;
    int fim;
    int tamanho;
    int qtde;
    int inicio;

    //procedimento respons�vel por
    Lista(int tam){
        tamanho = tam;
        qtde=0;
        fim=-1;
        inicio=0;
        v = new Tipo[tamanho];
    }

    //este procedimento libera as posic�es
    //de mem�ria alocada pelo ponteiro v (*v)
    ~Lista(){
        delete v;
    }

    //procedimento para inserir um novo
    //elemento na lista
    void inserir(Tipo x){
        fim++;
        if(fim==tamanho){
            fim=0;
        }
        v[fim]=x;
        qtde++;
    }

    void inserir_Inicio(Tipo x){
        inicio--;
        if(inicio==-1){
            inicio=tamanho-1;
        }
        v[inicio]=x;
        qtde++;
    }

    /*
    fun��o respons�vel por remover um elemento da
    lista, retornando esse valor � quem chamar.
    */
    Tipo remover(){
        Tipo temp = v[fim];
        fim--;
        if(fim==-1){
            fim=tamanho-1;
        }
        qtde--;
        return temp;
    }

    Tipo remover_Inicio(){
        Tipo temp=v[inicio];
        inicio++;
        if(inicio==tamanho){
            inicio=0;
        }
        qtde--;
        return temp;
    }


    //acesso ao primeiro da fila//

    Tipo primeiro(){
        return v[inicio];
    }

    Tipo ultimo(){
        return v[fim];
    }


    //fun��o respons�vel pela verifica��o de lista cheia
    bool listacheia(){
        return qtde==tamanho;
    }


    //fun��o respons�vel pela verifica��o de lista vazia
    bool listavazia(){
        return qtde==0;
    }
};

#endif // LISTASIMPLESSEQUENCIAL_H_INCLUDED
