#include "cuenta.h"

Cuenta::Cuenta(){


}
Cuenta::Cuenta(string t, double m) :
    titular(t), monto(m)
{

}
void Cuenta::ingresar(double cantidad)
{
    if (cantidad < 0){
        return;
    }
    monto += cantidad;
}
void Cuenta::retirar(double cantidad)
{
    if (cantidad>monto){
        return;
    }
    monto-=cantidad;
}
void Cuenta::balance()
{
    cout <<"Titylar:" <<titular;
    cout << "cantidad:" <<monto <<endl;
}
