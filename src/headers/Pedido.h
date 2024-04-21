#include <iostream>
#include "./Cliente.h"
#include "./Veiculo.h"

#ifndef _PEDIDOS_H_
#define _PEDIDOS_H_

using namespace std;

class Pedido
{
private:
    int numeroPedido;
    Veiculo *veiculoDeTransporte;
    Cliente *solicitante;
    string localDeColeta;
    string localDeEntrega;
    float pesoDaCarga;

public:
    Pedido();

    ~Pedido();
    
    int getNumeroPedido();

    void setNumeroPedido(int numeroPedido);

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

    friend iostream &operator<<(iostream &os, Pedido &pedidos);

    bool operator==(Pedido &pedido);
};

#endif