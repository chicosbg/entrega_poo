#include <iostream>
#include "../headers/Pedido.h"
#include "../headers/Cliente.h"
#include "../headers/Veiculo.h"

using namespace std;

Pedido::Pedido()
{
    this->veiculoDeTransporte = new Veiculo();
    this->solicitante = new Cliente();
    this->pesoDaCarga = 0.0;
}

Pedido::~Pedido()
{
    delete this->veiculoDeTransporte;
    delete this->solicitante;
}

int Pedido::getNumeroPedido() {
    return this->numeroPedido;
}

void Pedido::setNumeroPedido(int numeroPedido) {
    if(numeroPedido <= 0) throw invalid_argument("Numero do pedido invalido.");
    this->numeroPedido = numeroPedido;
}

Veiculo *Pedido::getVeiculoDeTransporte()
{
    return this->veiculoDeTransporte;
}

void Pedido::setVeiculoDeTransporte(Veiculo *veiculoDeTransporte)
{
    if (!veiculoDeTransporte->getIsAtivo())
        throw invalid_argument("Nao sao permitido veiculos nao ativos.");
    this->veiculoDeTransporte = veiculoDeTransporte;
}

Cliente *Pedido::getSolicitante()
{
    return this->solicitante;
}

void Pedido::setSolicitante(Cliente *solicitante)
{
    if (solicitante == NULL)
        throw invalid_argument("Eh obrigatorio passar um solicitante.");
    this->solicitante = solicitante;
}

string Pedido::getLocalDeColeta()
{
    return this->localDeColeta;
}

void Pedido::setLocalDeColeta(string localDeColeta)
{
    if (localDeColeta.empty())
        throw invalid_argument("Eh obrigatorio informar um local de coleta.");
    this->localDeColeta = localDeColeta;
}

string Pedido::getLocalDeEntrega()
{
    return this->localDeEntrega;
}

void Pedido::setLocalDeEntrega(string localDeEntrega)
{
    if (localDeEntrega.empty())
        throw invalid_argument("Eh obrigatorio informar um local de entrega.");
    this->localDeEntrega = localDeEntrega;
}

float Pedido::getPesoDaCarga()
{
    return this->pesoDaCarga;
}

void Pedido::setPesoDaCarga(float pesoDaCarga)
{
    if (pesoDaCarga <= 0)
        throw invalid_argument("peso de carga invalido.");
    this->pesoDaCarga = pesoDaCarga;
}

iostream &operator<<(iostream &os, Pedido &pedidos)
{
    os << "SOLICITANTE:"
       << endl
       << pedidos.getSolicitante()
       << "LOCAL DE COLETA:"
       << pedidos.getLocalDeColeta()
       << pedidos.getLocalDeEntrega()
       << endl
       << "VEICULO DE TRANSPORTE:" 
       << endl
       << pedidos.getVeiculoDeTransporte()
       << "PESO CARGA: "
       << pedidos.getPesoDaCarga();
       << endl
    return os;
}

bool Pedido::operator==(Pedido &pedido) {
    return pedido.getNumeroPedido() == this->numeroPedido;
}