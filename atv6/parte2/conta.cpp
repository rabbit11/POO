#include <iostream>
#include "conta.h"
#include "contato.h"
#include "mensagem.h"

conta::conta() : tamMAX(1000){
    for(int i = 0; i < tamMAX; i++){
        nContatos[i] = new contato;
        nMensagens[i] = new mensagem;
    }
    quantcontatos = 0;
    quantmensagens = 0;
}
conta::~conta(){
    for(int i = 0; i < tamMAX; i++){
        delete nContatos[i];
        delete nMensagens[i];
    }
    delete [] nContatos;
    delete [] nMensagens;
}
conta::conta(string Insertnome, string Insertlogin, string Insertsenha) :  tamMAX(1000){
    for(int i = 0; i < tamMAX; i++){
        nContatos[i] = new contato;
        nMensagens[i] = new mensagem;
    }
    quantcontatos = 0;
    quantmensagens = 0;
    nome = Insertnome;
    login = Insertlogin;
    senha = Insertsenha;
}
conta::conta(string Insertnome, string Insertlogin) :  tamMAX(1000){
    for(int i = 0; i < tamMAX; i++){
        nContatos[i] = new contato;
        nMensagens[i] = new mensagem;
    }
    quantcontatos = 0;
    quantmensagens = 0;
    nome = Insertnome;
    login = Insertlogin;
    senha = Insertlogin;

}

void conta::adicionarContato(contato *a){
    *(nContatos[quantcontatos]) = *a;
    quantcontatos++;
}
contato* conta::escolherContato(int pos){
    return nContatos[pos];
}
mensagem* conta::enviarMensagem(string email, string assunto, string corpo){
    //nao funciona pois os atributos sao private de mensagem
    nMensagens[quantmensagens]->destinatario = email;
    nMensagens[quantmensagens]->assunto = assunto;
    nMensagens[quantmensagens]->corpo = corpo;

    return (nMensagens[quantmensagens]);
}
void conta::imprimirMensagem(){
    if(quantmensagens == 0){
        cout << "nenhuma mensagem encontrada" << endl;
    }
    for(int i = 0; i < quantmensagens; i++){
        cout << (nMensagens[i]) << endl;
    }
}

void conta::imprimirMensagem(int &i){
    cout << nMensagens[i] << endl;
}

int conta::getQuantmen(){
    return quantmensagens;
}

string conta::getAssunto(mensagem &c){
    return c.assunto;
}

string conta::getCorpo(mensagem &c){
    return c.corpo;
}

mensagem conta::getMensag(int i){
    return *nMensagens[i];
}

ostream &operator<<(ostream &o, mensagem &c){
    o << "Assunto" << c.assunto << "Corpo" << c.corpo << endl;

    return o;
}
