#include <iostream>
#ifndef _COORDENADAS_H_
#define _COORDENADAS_H_
class Coordenadas
{
private:
    double latitude;
    double longitude;
public:
    Coordenadas();
    ~Coordenadas();
    double getLatitude();
    void setLatitude(double latitude);
    double getLongitude();
    void setLogitude(double longitude);
    double calculaDistancia(Coordenadas *coordenadaB);
    bool operator==(Coordenadas * coordenada);
};
#endif