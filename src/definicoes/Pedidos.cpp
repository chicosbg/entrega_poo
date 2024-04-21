#include <iostream>
#include "../headers/Pedidos.h"
#include "../headers/Cliente.h"
#include "../headers/Veiculo.h"

using namespace std;

Pedidos::Pedidos()
{
    this->veiculoDeTransporte = new Veiculo();
    this->solicitante = new Cliente();
    this->pesoDaCarga = 0.0;
}

Pedidos::~Pedidos() {
    delete this->veiculoDeTransporte;
    delete this->solicitante;
}

Veiculo *Pedidos::getVeiculoDeTransporte()
{
    return this->veiculoDeTransporte;
}

void Pedidos::setVeiculoDeTransporte(Veiculo *veiculoDeTransporte)
{
    if(!veiculoDeTransporte->getIsAtivo())
        throw invalid_argument("Nao sao permitido veiculos nao ativos.");
    this->veiculoDeTransporte = veiculoDeTransporte;
}

Cliente *Pedidos::getSolicitante()
{
    return this->solicitante;
}

void Pedidos::setSolicitante(Cliente *solicitante)
{
    if(solicitante == NULL) throw invalid_argument("Eh obrigatorio passar um solicitante.");
    this->solicitante = solicitante;
}

string Pedidos::getLocalDeColeta()
{
    return this->localDeColeta;
}

void Pedidos::setLocalDeColeta(string localDeColeta)
{   if(localDeColeta.empty()) throw invalid_argument("Eh obrigatorio informar um local de coleta.");
    this->localDeColeta = localDeColeta;
}

string Pedidos::getLocalDeEntrega()
{
    return this->localDeEntrega;
}

void Pedidos::setLocalDeEntrega(string localDeEntrega)
{
    if(localDeEntrega.empty()) throw invalid_argument("Eh obrigatorio informar um local de entrega.");
    this->localDeEntrega = localDeEntrega;
}

float Pedidos::getPesoDaCarga()
{
    return this->pesoDaCarga;
}

void Pedidos::setPesoDaCarga(float pesoDaCarga)
{
    if(pesoDaCarga <= 0) throw invalid_argument("peso de carga invalido.");
    this->pesoDaCarga = pesoDaCarga;
}
