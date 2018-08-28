#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;

class Complexo
{
    public:
        // string ID; // identificador do objeto
        // double real; // parte real
        // double imaginaria; // parte imaginaria

       Complexo(string identificador = "", double = 0.0, double = 0.0 ); // construtor
       Complexo(const Complexo &c);
       Complexo operator+( const Complexo &operand2) const; // adicao
       Complexo operator-( const Complexo &operand2) const; // subtracao
       Complexo operator*( const Complexo &operand2) const; // adicao
       Complexo operator/( const Complexo &operand2) const; // adicao
       Complexo operator+(double &operand2) const; // adicao
       Complexo operator-(double &operand2) const; // adicao
       Complexo operator+(int &operand2) const; // adicao
       Complexo operator-(int &operand2) const; // adicao
       bool operator==(const Complexo &operand2) const;
       bool operator!=(const Complexo &operand2) const;

       string getID();
       double getreal();
       double getimaginaria();
       void setID(string novoid);
       void setreal(double novoreal);
       void setimaginaria(double novoimaginaria);

       void print() const; // saida
    private:
       string ID; // identificador do objeto
       double real; // parte real
       double imaginaria; // parte imaginaria
}; // fim da classe Complexo

ostream &operator<< (ostream &o, Complexo &c);
istream &operator>> (istream & i, Complexo & c);

#endif
