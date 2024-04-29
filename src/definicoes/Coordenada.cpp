#include <iostream>
#include "../headers/Coordenada.h"
#include <cmath>

Coordenada::Coordenada() {
    this->latitude = 0.0;
    this->longitude = 0.0;
}

Coordenada::Coordenada(double latitude, double longitude) {
    this->latitude = latitude;
    this->longitude = longitude;
}

Coordenada::~Coordenada() {}
double Coordenada::getLatitude() {
    return this->latitude;
}
void Coordenada::setLatitude(double latitude) {
    this->latitude = latitude;
}
double Coordenada::getLongitude() {
    return this->longitude;
}
void Coordenada::setLogitude(double longitude) {
    this->longitude = longitude;
}
/**
 * Essa função é basiada na formula de
*/
double Coordenada::calculaDistancia(Coordenada *coordenadaB) {
    return 0.0;
}

bool Coordenada::operator==(Coordenada &coordenada) {
    return coordenada.getLatitude() == this->latitude && coordenada.getLongitude() == longitude;
}

ostream &operator<<(ostream &os, Coordenada &coordenada) {
    os <<"Latitude: " << coordenada.getLatitude() << "\n"
         <<"Longitude: " << coordenada.getLongitude() << "\n";
    return os;
}