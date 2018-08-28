#ifndef VETOR_H_
#define VETOR_H_

class Vetor{
    private:
        int vetor[100], contador;
    public:
        Vetor();
        Vetor(int elemento, int tamanho);
        int inserir(int elemento);
        int remover(int elemento);
        int recuperarElemento(int posicao);
        void preencher(int elemento, int nRepeticoes);
        void imprimir();
};

#endif
