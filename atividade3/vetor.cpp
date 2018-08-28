#include <iostream>
#include "vetor.h"

using namespace std;

Vetor::Vetor(){
    preencher(-1, 100);
    contador = 0;
}

Vetor::Vetor(int elemento, int tamanho){
    preencher(elemento, tamanho);
}

int Vetor::inserir(int elemento){
    if(contador == 100){
        return 0;
    }else{
        vetor[contador] = elemento;
        contador++;
    }
    return 1;
}

int Vetor::remover(int elemento){
    if(contador == 0){
        return 0;
    }else{
        int i = 0;
        while(vetor[i] != elemento){
            i++;
        }
        if(vetor[i] == elemento){
            vetor[i] = -1;
            contador--;
        }else{
            return 0;
        }
    }
    return 1;
}

int Vetor::recuperarElemento(int posicao){
    return vetor[posicao];
}

void Vetor::preencher(int elemento, int nRepeticoes){
    for(int i = 0; i < nRepeticoes; i++){
        vetor[i] = elemento;
        contador++;
    }
}

void Vetor::imprimir(){
    for(int i = 0; i < contador; i++){
        cout << vetor[i] << endl;
    }
}
