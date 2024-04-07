#include <iostream>
#include "../headers/Cliente.h"
#include "../headers/Veiculo.h"

#ifndef _PEDIDOS_H_
#define _PEDIDOS_H_

using namespace std;

class Pedidos
{
private:
    Veiculo veiculoDeTransporte;
    Cliente solicitante;
    string localDeColeta;
    string localDeEntrega;
    float pesoDaCarga;

public:
    Pedidos();

    ~Pedidos();
    
    Veiculo GetVeiculoDeTransporte();

    void SetVeiculoDeTransporte(Veiculo veiculoDeTransporte);

    Cliente GetSolicitante();

    void SetSolicitante(Cliente solicitante);

    string GetLocalDeColeta();

    void SetLocalDeColeta(string localDeColeta);

    string GetLocalDeEntrega();

    void SetLocalDeEntrega(string localDeEntrega);

    float GetPesoDaCarga();

    void SetPesoDaCarga(float pesoDaCarga);
};

#endif