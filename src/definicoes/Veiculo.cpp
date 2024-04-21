#include <iostream>
#include "../headers/Veiculo.h"
#include "../headers/Coordenada.h"

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

void Veiculo::setCapacidadeDeCarga(float capacidadeDeCarga)
{
    if(capacidadeDeCarga < 0) throw invalid_argument("Nao eh permitido capacidade de carga negativa.");
    this->capacidadeDeCarga = capacidadeDeCarga;
}

int Veiculo::getAnoFabricaocao()
{
    return this->anoFabricaocao;
}

void Veiculo::setAnoFabricaocao(int anoFabricaocao)
{
    if(anoFabricaocao < 0) throw invalid_argument("Nao eh permitido ano de fabricacao negativo.");
    this->anoFabricaocao = anoFabricaocao;
}

string Veiculo::getNumeroChassi()
{
    return this->numeroChassi;
}

void Veiculo::setNumeroChassi(string numeroChassi)
{
    if(numeroChassi.length() == 17) {
        this->numeroChassi = numeroChassi;
    }
    throw invalid_argument("Numero invalido de caracteres");
}

string Veiculo::getModelo()
{
    return this->modelo;
}

void Veiculo::setModelo(string modelo)
{
    if(modelo.empty()) throw invalid_argument("Nao eh permitido o modelo vazio.");
    this->modelo = modelo;
}

Coordenada *Veiculo::getLocalizacao()
{
    return this->localizacao;
}

void Veiculo::setLocalizacao(Coordenada *localizacao)
{
    if(localizacao == NULL) throw invalid_argument("Nao eh permitido a localizacao vazia.");
    this->localizacao = localizacao;

}

bool Veiculo::getIsAtivo() {
    return this->isAtivo;
}
    
void Veiculo::setIsAtivo(bool isAtivo = true) {
    this->isAtivo = isAtivo;
}

iostream &operator<<(iostream &os, Veiculo &veiculo) {
    os << veiculo.getTipo() << ":"
        << endl
        << "NUMERO DO CHASSI: "  
        << veiculo.getNumeroChassi()
        << endl
        << "MODELO: "  
        << veiculo.getModelo()
        << endl
        << "CAPACIDADE DE CARGA: "  
        << veiculo.getCapacidadeDeCarga()
        << endl
        << "ANO DE FABRICACAO: "
        <<  veiculo.getAnoFabricaocao()
        << endl
        << "ESTA ATIVO: "
        << veiculo.getIsAtivo()
        << endl
        << "MODELO: "  
        << veiculo.getModelo()
        << endl
        << "LOCALIZACAO:"
        << veiculo.getLocalizacao();

    return os;
}

bool Veiculo::operator==(Veiculo &veiculo) {
    return veiculo.getNumeroChassi() == this->numeroChassi;
}