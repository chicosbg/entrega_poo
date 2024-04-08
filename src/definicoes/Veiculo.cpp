#include <iostream>
#include "../headers/Veiculo.h"

using namespace std;

Veiculo::Veiculo() { }

Veiculo::~Veiculo() { }

string Veiculo::GetTipo()
{
    return this->tipo;
}

float Veiculo::GetCapacidadeDeCarga()
{
    return this->capacidadeDeCarga;
}

int Veiculo::SetCapacidadeDeCarga(float capacidadeDeCarga)
{
    this->capacidadeDeCarga = capacidadeDeCarga;
}

int Veiculo::GetAnoFabricaocao()
{
    return this->anoFabricaocao;
}

int Veiculo::SetAnoFabricaocao(int anoFabricaocao)
{
    if(anoFabricaocao < 0) return 0;
    this->anoFabricaocao = anoFabricaocao;
    return 1;
}

string Veiculo::GetNumeroChassi()
{
    return this->numeroChassi;
}

int Veiculo::SetNumeroChassi(string numeroChassi)
{
    if(numeroChassi.length() == 17) {
        this->numeroChassi = numeroChassi;
        return 1;
    }
    return 0;
}

string Veiculo::GetModelo()
{
    return this->modelo;
}

int Veiculo::SetModelo(string modelo)
{
    if(modelo == "") return 0;
    this->modelo = modelo;
    return 1;
}

string Veiculo::GetLocalizacao()
{
    return this->localizacao;
}

int Veiculo::SetLocalizacao(string localizacao)
{
    if(localizacao == "") return 0;
    this->localizacao = localizacao;
    return 1;
}

bool Veiculo::GetIsAtivo() {
    return this->isAtivo;
}
    
void Veiculo::SetIsAtivo(bool isAtivo = true) {
    this->isAtivo = isAtivo;
}
