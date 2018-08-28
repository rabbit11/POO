#ifndef DATA_H_
#define DATA_H_
using namespace std;

class data{
    private:
        int dia, mes, ano;
    public:
        data();
        data(int d, int m, int a);
        int atualizaDia(int d);
        int atualizaMes(int m);
        int atualizaAno(int a);
        int mostraData();
        char* getMes(int m);
};

#endif
