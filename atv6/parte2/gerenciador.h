#ifndef     GERENCIADOR_H_
#define     GERENCIADOR_H_
#include <iostream>
#include "conta.h"

class gerenciador{
    private:
        conta *nContas;
    public:
        gerenciador();
        ~gerenciador();
        conta criarConta(string nome, string login, string senha);
};



#endif
