#ifndef CUENTA_H
#define CUENTA_H
#include<string>
using namespace std;


class Cuenta
{
private:
    string titular;
    double monto;

public:
    Cuenta();
    Cuenta(string t,double m);
    Cuenta(const string &titular, double monto);
    void ingresar(double cantidad);
    void retirar(double cantidad);
    void balance();

};


#endif // CUENTA_H
