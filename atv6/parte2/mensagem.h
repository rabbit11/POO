#ifndef     MENSAGEM_H_
#define     MENSAGEM_H_
#include <iostream>
#include "contato.h"
#include "conta.h"
using namespace std;

class mensagem{
    private:
    public:
        string assunto;
        string corpo;
        string destinatario;
        mensagem();
        ~mensagem();
        bool enviar();
        string setCorpo();
        string imprimir();
        string getAssunto(mensagem &c);
        string getCorpo(mensagem &c);

};


#endif
