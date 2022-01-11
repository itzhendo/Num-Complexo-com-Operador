#ifndef NCOMPLEXO_H
#define NCOMPLEXO_H
#include <QString>
namespace  tp2
{
    class NComplexo;
}
class NComplexo
{
private:
    float parteReal;
    float parteImaginaria;
public:
    NComplexo();
    NComplexo(float real, float imaginario);
    NComplexo(NComplexo &objeto);
    void set(float real, float imaginario);
    QString get()const;
    NComplexo operator+(NComplexo objeto)const;
    NComplexo operator-(NComplexo objeto)const;
    NComplexo operator*(NComplexo objeto)const;
    NComplexo operator/(NComplexo objeto)const;

};

#endif // NCOMPLEXO_H

