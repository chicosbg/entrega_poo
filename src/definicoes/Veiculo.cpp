#include <iostream>
#include "../headers/Veiculo.h"

using namespace std;

Veiculo::Veiculo() { }

Veiculo::~Veiculo() { }

string Veiculo::getTipo()
{
    return this->tipo;
}

float Veiculo::getCapacidadeDeCarga()
{
    return this->capacidadeDeCarga;
}

int Veiculo::setCapacidadeDeCarga(float capacidadeDeCarga)
{
    this->capacidadeDeCarga = capacidadeDeCarga;
}

int Veiculo::getAnoFabricaocao()
{
    return this->anoFabricaocao;
}

int Veiculo::setAnoFabricaocao(int anoFabricaocao)
{
    if(anoFabricaocao < 0) return 0;
    this->anoFabricaocao = anoFabricaocao;
    return 1;
}

string Veiculo::getNumeroChassi()
{
    return this->numeroChassi;
}

int Veiculo::setNumeroChassi(string numeroChassi)
{
    if(numeroChassi.length() == 17) {
        this->numeroChassi = numeroChassi;
        return 1;
    }
    return 0;
}

string Veiculo::getModelo()
{
    return this->modelo;
}

int Veiculo::setModelo(string modelo)
{
    if(modelo == "") return 0;
    this->modelo = modelo;
    return 1;
}

string Veiculo::getLocalizacao()
{
    return this->localizacao;
}

int Veiculo::setLocalizacao(string localizacao)
{
    if(localizacao == "") return 0;
    this->localizacao = localizacao;
    return 1;
}

bool Veiculo::getIsAtivo() {
    return this->isAtivo;
}
    
void Veiculo::setIsAtivo(bool isAtivo = true) {
    this->isAtivo = isAtivo;
}
