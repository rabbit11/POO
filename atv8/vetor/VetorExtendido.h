#include <iostream>
#include "Vetor.h"

class VetorExtendido: public Vetor{

    private:

    public:

        VetorExtendido();
        //tem outro jeito de manter vet = extend sem ter que igualar apos cada op?
        VetorExtendido(const Vetor &a) : Vetor(a) {};
        ~VetorExtendido();

        int primeiroElemento();
        int ultimoElemento();
        int somaElementos();
        int mediaElementos();
        bool verificaElemento(int a);
};
