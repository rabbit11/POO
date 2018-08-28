#ifndef     CONTATO_H_
#define     CONTATO_H_
#include <iostream>
#include "mensagem.h"
using namespace std;

class contato{
    private:
        string email;
        string nome;
    public:
        contato();
        ~contato();
        string getEmail();
        string imprimir();
};


#endif
