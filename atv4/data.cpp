#include <iostream>
#include <ctime>
#include "data.h"

using namespace std;

data::data(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    dia = ltm->tm_mday;
    mes = 1 + ltm->tm_mon;
    ano = 1900 + ltm->tm_year;
}

data::data(int d, int m, int a){
    dia = d;
    mes = m;
    ano = a;
}

int data::atualizaDia(int d){
    if(d >= 1 && d <= 31){
        dia = d;
    }
    return dia;
}

int data::atualizaMes(int m){
    if(m >= 1 && m <= 12){
        mes = m;
    }
    return mes;
}

int data::atualizaAno(int a){
    if(a >= 0){
        ano = a;
    }
    return ano;
}

string getMes(int m){
    string a;

    switch(m){
        case 1:
            a = "Janeiro";
            break;
        case 2:
            a = "Fevereiro";
            break;
        case 3:
            a = "Março";
            break;
        case 4:
            a = "Abril";
            break;
        case 5:
            a = "Maio";
            break;
        case 6:
            a = "Junho";
            break;
        case 7:
            a = "Julho";
            break;
        case 8:
            a = "Agosto";
            break;
        case 9:
            a = "Setembro";
            break;
        case 10:
            a = "Outubro";
            break;
        case 11:
            a = "Novembro";
            break;
        case 12:
            a = "Dezembro";
            break;
    }
    return a;
}

int data::mostraData(){
    cout << dia << "/" << mes << "/" << ano << endl;
}
