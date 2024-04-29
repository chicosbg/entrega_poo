#include <iostream>

#ifndef _COORDENADAS_H_
#define _COORDENADAS_H_

using namespace std;

class Coordenada
{
private:
    double latitude;
    double longitude;
public:
    Coordenada();
    Coordenada(double latitude, double longitude);
    ~Coordenada();
    double getLatitude();
    void setLatitude(double latitude);
    double getLongitude();
    void setLogitude(double longitude);
    double calculaDistancia(Coordenada *coordenadaB);
    bool operator==(Coordenada &coordenada);
    friend ostream &operator<<(ostream &os, Coordenada &coordenada);
};
#endif