#include <iostream>
#include "../headers/Pedidos.h"
#include "../headers/Cliente.h"
#include "../headers/Veiculo.h"

using namespace std;

Pedidos::Pedidos()
{
    this->veiculoDeTransporte = new Veiculo();
    this->solicitante = new Cliente();
}

Pedidos::~Pedidos() {
    delete this->veiculoDeTransporte;
    delete this->solicitante;
}

Veiculo *Pedidos::GetVeiculoDeTransporte()
{
    return this->veiculoDeTransporte;
}

int Pedidos::SetVeiculoDeTransporte(Veiculo *veiculoDeTransporte)
{
    if(!veiculoDeTransporte->GetIsAtivo())
        return 0;
    this->veiculoDeTransporte = veiculoDeTransporte;
    return 1;
}

Cliente *Pedidos::GetSolicitante()
{
    return this->solicitante;
}

int Pedidos::SetSolicitante(Cliente *solicitante)
{
    if(solicitante == NULL) return 0;
    this->solicitante = solicitante;
    return 1;
}

string Pedidos::GetLocalDeColeta()
{
    return this->localDeColeta;
}

int Pedidos::SetLocalDeColeta(string localDeColeta)
{   if(localDeColeta == "") return 0;
    this->localDeColeta = localDeColeta;
    return 1;
}

string Pedidos::GetLocalDeEntrega()
{
    return this->localDeEntrega;
}

int Pedidos::SetLocalDeEntrega(string localDeEntrega)
{
    if(localDeEntrega == "") return 0;
    this->localDeEntrega = localDeEntrega;
    return 1;
}

float Pedidos::GetPesoDaCarga()
{
    return this->pesoDaCarga;
}

int Pedidos::SetPesoDaCarga(float pesoDaCarga)
{
    if(pesoDaCarga <= 0) return 0;
    this->pesoDaCarga = pesoDaCarga;
    return 1;
}
