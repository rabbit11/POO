#include <iostream>
#include "data.h"

int main(){
    data d1, d2;

    d1.atualizaDia(3);
    d1.atualizaMes(3);
    d1.atualizaAno(1998);
    d2.atualizaDia(3);
    d2.atualizaMes(3);
    d2.atualizaAno(3);

    d1.mostraData();
    d2.mostraData();

    return 0;
}
