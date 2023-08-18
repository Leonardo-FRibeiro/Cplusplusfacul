#include "esfera.h"

double Esfera::CalculaRaio()
{
    return Raio;
}
 void Esfera::AtribuiRaio(double r){
        Raio = r;
}

double Esfera::CalculaVolume()
{
    Volume = (4/3)*PI*Raio*Raio*Raio;
    return Volume;
}

double Esfera::CalculaArea()
{
    Area = 4*PI*Raio*Raio;
    return Area;
}