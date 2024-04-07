#include <iostream>
#include "../headers/Pedidos.h"
#include "../headers/Cliente.h"
#include "../headers/Veiculo.h"

using namespace std;

Pedidos::Pedidos() { }

Pedidos::~Pedidos() { }

Veiculo Pedidos::GetVeiculoDeTransporte()
{
    return veiculoDeTransporte;
}

void Pedidos::SetVeiculoDeTransporte(Veiculo veiculoDeTransporte)
{
    this->veiculoDeTransporte = veiculoDeTransporte;
}

Cliente Pedidos::GetSolicitante()
{
    return solicitante;
}

void Pedidos::SetSolicitante(Cliente solicitante)
{
    this->solicitante = solicitante;
}

string Pedidos::GetLocalDeColeta()
{
    return localDeColeta;
}

void Pedidos::SetLocalDeColeta(string localDeColeta)
{
    this->localDeColeta = localDeColeta;
}

string Pedidos::GetLocalDeEntrega()
{
    return localDeEntrega;
}

void Pedidos::SetLocalDeEntrega(string localDeEntrega)
{
    this->localDeEntrega = localDeEntrega;
}

float Pedidos::GetPesoDaCarga()
{
    return pesoDaCarga;
}

void Pedidos::SetPesoDaCarga(float pesoDaCarga)
{
    this->pesoDaCarga = pesoDaCarga;
}
