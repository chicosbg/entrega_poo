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

    void setVeiculoDeTransporte(Veiculo *veiculoDeTransporte);

    Cliente *getSolicitante();

    void setSolicitante(Cliente *solicitante);

    string getLocalDeColeta();

    void setLocalDeColeta(string localDeColeta);

    string getLocalDeEntrega();

    void setLocalDeEntrega(string localDeEntrega);

    float getPesoDaCarga();

    void setPesoDaCarga(float pesoDaCarga);
};

#endif