// Fig. 11.20: Complexo.cpp
// Defini��es de fun��o membro da classe Complexo.
#include <iostream>
using namespace std;

#include "Complexo.h" // defini��o da classe Complexo

// Construtor
Complexo::Complexo(std::string identificador, double realPart, double imaginaryPart ) : ID(identificador),
real( realPart ), imaginaria( imaginaryPart )
{
	cout << "construtor de " << ID << endl;
} // fim do construtor Complexo

Complexo::Complexo(const Complexo &c) // construtor de copia
{
	ID = c.ID;
	real = c.real;
	imaginaria = c.imaginaria;
}

// operador de adi��o
Complexo Complexo::operator+( const Complexo &operand2 ) const
{
   cout << "operador + sobrecarregado" << endl;
   return Complexo("temp do +", real + operand2.real,
      imaginaria + operand2.imaginaria );
} // fim da fun��o operator+
Complexo Complexo::operator+(double &operand2 ) const
{
	cout << "operador + sobrecarregado" << endl;
    return Complexo("temp do +", real + operand2, imaginaria);
} // fim da fun��o operator+


Complexo Complexo::operator+(int &operand2 ) const
{
	cout << "operador + sobrecarregado" << endl;
	return Complexo("temp do +", real + operand2, imaginaria);
}
// operador de subtra��o
Complexo Complexo::operator-( const Complexo &operand2 ) const
{
	cout << "operador - sobrecarregado" << endl;
   return Complexo("temp do -", real - operand2.real,
      imaginaria - operand2.imaginaria );
} // fim da fun��o operator-

Complexo Complexo::operator-(double &operand2 ) const
{
	cout << "operador - sobrecarregado" << endl;
	return Complexo("temp do -", real - operand2, imaginaria);
} // fim da fun��o operator+

Complexo Complexo::operator-(int &operand2 ) const
{
	cout << "operador - sobrecarregado" << endl;
	return Complexo("temp do -", real - operand2, imaginaria);
}

Complexo Complexo::operator*( const Complexo &operand2 ) const
{
	cout << "operador * sobrecarregado" << endl;
   return Complexo("temp do *", ((real * operand2.real) - (imaginaria * operand2.imaginaria)),
      real + imaginaria);
} // fim da fun��o operator-

Complexo Complexo::operator/( const Complexo &operand2 ) const
{
	cout << "operador / sobrecarregado" << endl;
   return Complexo("temp do /", (real * operand2.real + imaginaria * operand2.imaginaria) /
   		(operand2.real * operand2.real + operand2.imaginaria * operand2.imaginaria),
		-(real * operand2.imaginaria + imaginaria * operand2.real) /
		(operand2.real * operand2.real + operand2.imaginaria * operand2.imaginaria) );
} // fim da fun��o operator-

bool Complexo::operator==(const Complexo & operand2) const{
	if(real == operand2.real){
		if(imaginaria == operand2.imaginaria){
			return 1;
		}
	}
	return 0;
}

bool Complexo::operator!=(const Complexo & operand2) const{
	if(real != operand2.real){
		if(imaginaria != operand2.imaginaria){
			return 1;
		}
	}
	return 0;
}

string Complexo::getID(){
	return ID;
}
double Complexo::getreal(){
	return real;
}
double Complexo::getimaginaria(){
	return imaginaria;
}
void Complexo::setID(string novoid){
	Complexo::ID = novoid;
}
void Complexo::setreal(double novoreal){
	Complexo::real = novoreal;
}
void Complexo::setimaginaria(double novoimaginaria){
	Complexo::imaginaria = novoimaginaria;
}

ostream &operator<< (ostream &o, Complexo &c){
	string id = c.getID();
	double re = c.getreal();
	double imagi = c.getimaginaria();

	o << "ID: " << id << "(" << re << "+" << imagi << "i)" << endl;

	return o;
}

istream &operator>> (istream &i, Complexo &c){
	string novoid;
	double re;
	double imagi;
	cout << "Insira ID e então parte real + imaginaria" << endl;
	i >> novoid;
	c.setID(novoid);
	i.ignore(1);
	i >> re;
	c.setreal(re);
	i.ignore(1);
	i >> imagi;
	c.setimaginaria(imagi);

	return i;
}
// exibe um objeto Complexo na forma: (a, bi)
