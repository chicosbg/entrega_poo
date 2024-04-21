#include <iostream>
#include "./Cliente.h"
#include "./Veiculo.h"
#include "./Coordenada.h"
#ifndef _PEDIDOS_H_
#define _PEDIDOS_H_

using namespace std;

class Pedido
{
private:
    int numeroPedido;
    Veiculo *veiculoDeTransporte;
    Cliente *solicitante;
    Coordenada *localDeColeta;
    Coordenada *localDeEntrega;
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

    void setLocalDeColeta(Coordenada *localDeColeta);

    string getLocalDeEntrega();

    void setLocalDeEntrega(Coordenada *localDeEntrega);

    float getPesoDaCarga();

    void setPesoDaCarga(float pesoDaCarga);

    friend iostream &operator<<(iostream &os, Pedido &pedidos);

    bool operator==(Pedido &pedido);
};

#endif