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
    
    Veiculo *GetVeiculoDeTransporte();

    int SetVeiculoDeTransporte(Veiculo *veiculoDeTransporte);

    Cliente *GetSolicitante();

    int SetSolicitante(Cliente *solicitante);

    string GetLocalDeColeta();

    int SetLocalDeColeta(string localDeColeta);

    string GetLocalDeEntrega();

    int SetLocalDeEntrega(string localDeEntrega);

    float GetPesoDaCarga();

    int SetPesoDaCarga(float pesoDaCarga);
};

#endif