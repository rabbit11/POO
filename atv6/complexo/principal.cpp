// Fig. 11.21: fig11_21.cpp
// Programa de teste da classe Complexo.
#include <iostream>
using namespace std;

#include "Complexo.h"

int main()
{
    int menu = 0;
    Complexo a, b, c;
    double d;
    int i;

    cout << "insira o primeiro numero complexo" << endl;
    cin >> a;
    cout << a;

   while(menu != -1){
       cout << "Digite 1 para soma de complexos" << endl;
       cout << "Digite 2 para subtraçao de complexos" << endl;
       cout << "Digite 3 para multiplicaçao de complexos" << endl;
       cout << "Digite 4 para divisao de complexos" << endl;
       cout << "Digite 5 para soma de complexo e double" << endl;
       cout << "Digite 6 para soma de complexo e inteiro" << endl;
       cin >> menu;

       switch(menu){

            case 1:
                cout << "insira o segundo numero complexo" << endl;
                cin >> b;
                c = a + b;
                cout << c << endl;
                break;

            case 2:
                cout << "insira o segundo numero complexo" << endl;
                cin >> b;
                c = a - b;
                cout << c << endl;
                break;

            case 3:
                cout << "insira o segundo numero complexo" << endl;
                cin >> b;
                c = a * b;
                cout << c << endl;
                break;
            case 4:
                cout << "insira o segundo numero complexo" << endl;
                cin >> b;
                c = a / b;
                cout << c << endl;
                break;

            case 5:
                cout << "insira um double" << endl;
                cin >> d;
                c = a + d;
                cout << c << endl;
                break;

            case 6:
                cout << "insira um int" << endl;
                cin >> i;
                c = a + i;
                cout << c << endl;
                break;

       }

   }
   return 0;
} // fim de main
