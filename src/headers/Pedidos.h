#include <iostream>
#include "./Cliente.h"
#include "./Veiculo.h"

#ifndef _PEDIDOS_H_
#define _PEDIDOS_H_

using namespace std;

class Pedidos
{
private:
    Veiculo *veiculoDeTransporte;
    Cliente *solicitante;
    string localDeColeta;
    string localDeEntrega;
    float pesoDaCarga;

public:
    Pedidos();

    ~Pedidos();
    
    Veiculo *getVeiculoDeTransporte();

    int setVeiculoDeTransporte(Veiculo *veiculoDeTransporte);

    Cliente *getSolicitante();

    int setSolicitante(Cliente *solicitante);

    string getLocalDeColeta();

    int setLocalDeColeta(string localDeColeta);

    string getLocalDeEntrega();

    int setLocalDeEntrega(string localDeEntrega);

    float getPesoDaCarga();

    int setPesoDaCarga(float pesoDaCarga);
};

#endif