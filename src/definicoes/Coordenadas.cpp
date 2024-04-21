#include <iostream>
#include "../headers/Coordenadas.h"
#include <cmath>

Coordenadas::Coordenadas() {
    this->latitude = 0.0;
    this->longitude = 0.0;
}
Coordenadas::~Coordenadas() {}
double Coordenadas::getLatitude() {
    return this->latitude;
}
void Coordenadas::setLatitude(double latitude) {
    this->latitude = latitude;
}
double Coordenadas::getLongitude() {
    return this->longitude;
}
void Coordenadas::setLogitude(double longitude) {
    this->longitude = longitude;
}
/**
 * Essa função é basiada na formula de
*/
double Coordenadas::calculaDistancia(Coordenadas *coordenadasB) {
    
}

bool Coordenadas::operator==(Coordenadas *coordenada) {
    if(coordenada->getLatitude() == this->latitude && coordenada->getLongitude() == longitude) {
        return true;
    }
    return false;
}
