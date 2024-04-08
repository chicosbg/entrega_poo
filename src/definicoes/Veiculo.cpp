#include <iostream>
#include "../headers/Veiculo.h"

using namespace std;

Veiculo::Veiculo() { }

Veiculo::~Veiculo() { }

string Veiculo::Veiculo::GetTipo()
{
    return this->tipo;
}

void Veiculo::SetTipo(string tipo)
{
    this->tipo = tipo;
}

float Veiculo::GetCapacidadeDeCarga()
{
    return this->capacidadeDeCarga;
}

void Veiculo::SetCapacidadeDeCarga(float capacidadeDeCarga)
{
    this->capacidadeDeCarga = capacidadeDeCarga;
}

int Veiculo::GetAnoFabricaocao()
{
    return this->anoFabricaocao;
}

void Veiculo::SetAnoFabricaocao(int anoFabricaocao)
{
    this->anoFabricaocao = anoFabricaocao;
}

string Veiculo::GetNumeroChassi()
{
    return this->numeroChassi;
}

void Veiculo::SetNumeroChassi(string numeroChassi)
{
    this->numeroChassi = numeroChassi;
}

string Veiculo::GetModelo()
{
    return this->modelo;
}

void Veiculo::SetModelo(string modelo)
{
    this->modelo = modelo;
}

string Veiculo::GetLocalizacao()
{
    return this->localizacao;
}

void Veiculo::SetLocalizacao(string localizacao)
{
    this->localizacao = localizacao;
}

bool Veiculo::GetIsAtivo() {
    return this->isAtivo;
}
    
void Veiculo::SetIsAtivo(bool isAtivo) {
    this->isAtivo = isAtivo;
}
