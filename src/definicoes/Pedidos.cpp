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

Veiculo *Pedidos::getVeiculoDeTransporte()
{
    return this->veiculoDeTransporte;
}

int Pedidos::setVeiculoDeTransporte(Veiculo *veiculoDeTransporte)
{
    if(!veiculoDeTransporte->getIsAtivo())
        return 0;
    this->veiculoDeTransporte = veiculoDeTransporte;
    return 1;
}

Cliente *Pedidos::getSolicitante()
{
    return this->solicitante;
}

int Pedidos::setSolicitante(Cliente *solicitante)
{
    if(solicitante == NULL) return 0;
    this->solicitante = solicitante;
    return 1;
}

string Pedidos::getLocalDeColeta()
{
    return this->localDeColeta;
}

int Pedidos::setLocalDeColeta(string localDeColeta)
{   if(localDeColeta == "") return 0;
    this->localDeColeta = localDeColeta;
    return 1;
}

string Pedidos::getLocalDeEntrega()
{
    return this->localDeEntrega;
}

int Pedidos::setLocalDeEntrega(string localDeEntrega)
{
    if(localDeEntrega == "") return 0;
    this->localDeEntrega = localDeEntrega;
    return 1;
}

float Pedidos::getPesoDaCarga()
{
    return this->pesoDaCarga;
}

int Pedidos::setPesoDaCarga(float pesoDaCarga)
{
    if(pesoDaCarga <= 0) return 0;
    this->pesoDaCarga = pesoDaCarga;
    return 1;
}
