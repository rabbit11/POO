#ifndef     CONTA_H_
#define     CONTA_H_
#include <iostream>
#include "contato.h"
#include "mensagem.h"
using namespace std;

class conta{
    private:
        const int tamMAX;
        contato **nContatos;
        mensagem **nMensagens;
        string nome, login, senha;
        int quantcontatos;
        int quantmensagens;

    public:
        //construtor para o caso especificado no codigo como exemplo
        conta(string nome, string login, string senha);
        //construtor para o caso especificado no codigo como exemplo
        conta(string nome, string login);
        //construtor para o caso especificado no codigo como exemplo
        conta(conta &c);
        //construtor para caso nenhum parâmetro seja inserido
        conta();
        ~conta();
        void adicionarContato(contato* user);
        contato* escolherContato(int pos); // int?
        mensagem* enviarMensagem(string email, string assunto, string corpo);
        void imprimirMensagem();
        void imprimirMensagem(int &i);
        mensagem getMensag(int i);
        int getQuantmen();
        string getAssunto(mensagem &c);
        string getCorpo(mensagem &c);
        friend ostream &operator<< (ostream &o, conta &c);

};


#endif
