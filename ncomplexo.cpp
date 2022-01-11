#include "ncomplexo.h"

NComplexo::NComplexo():
    parteReal(0),
    parteImaginaria(0)
{
}
NComplexo::NComplexo(float real, float imaginario):
    parteReal(real),
    parteImaginaria(imaginario)
{
}
NComplexo::NComplexo(NComplexo &objeto):
    parteReal(objeto.parteReal),
    parteImaginaria(objeto.parteImaginaria)

{
}
void NComplexo::set(float real, float imaginario)
{
    parteReal=real;
    parteImaginaria=imaginario;
}
QString NComplexo::get()const
{
    if(parteImaginaria>0)
    {
        QString saida= QString::number(parteReal);
        saida+=" + " + QString::number(parteImaginaria) + "i";
        return saida;
    }
    else
    {
        QString saida= QString::number(parteReal);
        saida+= QString::number(parteImaginaria) + "i";
        return saida;
    }

}
NComplexo NComplexo::operator+(NComplexo objeto)const
{
    float real= parteReal + objeto.parteReal;
    float imaginario= parteImaginaria + objeto.parteImaginaria;
    NComplexo aux;
    aux.set(real, imaginario);
    return aux;
}
NComplexo NComplexo::operator-(NComplexo objeto)const
{
    float real= parteReal - objeto.parteReal;
    float imaginario= parteImaginaria - objeto.parteImaginaria;
    NComplexo aux;
    aux.set(real, imaginario);
    return aux;
}
NComplexo NComplexo::operator*(NComplexo objeto)const
{
    float real= parteReal * objeto.parteReal - parteImaginaria * objeto.parteImaginaria;
    float imaginario= parteReal * objeto.parteImaginaria + parteImaginaria * objeto.parteReal;
    NComplexo aux;
    aux.set(real, imaginario);
    return aux;
}
NComplexo NComplexo::operator/(NComplexo objeto)const
{
    float real= (parteReal * objeto.parteReal + parteImaginaria * objeto.parteImaginaria)/
            (objeto.parteReal * objeto.parteReal + objeto.parteImaginaria * objeto.parteImaginaria);
    float imaginario= (parteImaginaria * objeto.parteReal - parteReal * objeto.parteImaginaria)/
            (objeto.parteReal * objeto.parteReal + objeto.parteImaginaria * objeto.parteImaginaria);
    NComplexo aux;
    aux.set(real, imaginario);
    return aux;
}





