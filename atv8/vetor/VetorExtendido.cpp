#include <iostream>
#include "VetorExtendido.h"
using namespace std;
//
// VetorExtendido::VetorExtendido(){
//
// }

// VetorExtendido::VetorExtendido(const Vetor &a){
//     Vetor(a);
// }

VetorExtendido::~VetorExtendido(){

}

int VetorExtendido::primeiroElemento(){
    return getElemento(0);
}

int VetorExtendido::ultimoElemento(){
    return getElemento(getTamanho() - 1);
}

int VetorExtendido::somaElementos(){
    int sum = 0;
    for(int i = 0; i < getTamanho(); i++){
        sum += getElemento(i);
    }
    return sum;
}

int VetorExtendido::mediaElementos(){
    return somaElementos() / getTamanho();
}

bool VetorExtendido::verificaElemento(int a){
    for(int i = 0; i < getTamanho(); i++){
        if (a == getElemento(i)){
            return true;
        }
    }
    return false;
}
