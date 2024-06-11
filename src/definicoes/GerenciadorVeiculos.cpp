#ifndef GERENCIADORVEICULOS_CPP
#define GERENCIADORVEICULOS_CPP
#include <iostream>
#include <list>
#include "../headers/GerenciadorVeiculos.h"
#include "../headers/Veiculo.h"

using namespace std;

GerenciadorVeiculos::GerenciadorVeiculos()
{
    this->veiculosAtivos = new list<Veiculo *>;
};

GerenciadorVeiculos::~GerenciadorVeiculos()
{
    for(Veiculo *veiculo: *this->veiculosAtivos) {
       // delete veiculo;
       //PRECISA CONCERTO
    }
    delete this->veiculosAtivos;
};
list<Veiculo *> *GerenciadorVeiculos::getVeiculosAtivos()
{
    return this->veiculosAtivos;
};

int GerenciadorVeiculos::adicionarVeiculo(Veiculo *veiculo)
{
    if (!veiculo->getIsAtivo())
        return 0;
    this->veiculosAtivos->push_back(veiculo);
    return 1;
}


bool GerenciadorVeiculos::adicionarVeiculos(string numeroChassi, string modelo, Coordenada *localizacao, int isAtivo, int anoFabricacao, float capacidadeDeCarga)
{
    Veiculo *veiculo = new Veiculo();
    try
    {
        veiculo->setIsAtivo(isAtivo);
        veiculo->setAnoFabricaocao(anoFabricacao);
        veiculo->setCapacidadeDeCarga(capacidadeDeCarga);
        veiculo->setLocalizacao(localizacao);
        veiculo->setModelo(modelo);
        veiculo->setNumeroChassi(numeroChassi);
    }
    catch(const exception& e)
    {
        delete veiculo;
        cerr << e.what() << '\n';
        return false;
    }
    
    this->veiculosAtivos->push_back(veiculo);
    return true;
}

bool GerenciadorVeiculos::adicionarVeiculos(string numeroChassi, string modelo, Coordenada *localizacao) {
    Veiculo *veiculo = new Veiculo();
    try
    {
        veiculo->setIsAtivo(true);
        veiculo->setLocalizacao(localizacao);
        veiculo->setModelo(modelo);
        veiculo->setNumeroChassi(numeroChassi);
    }
    catch(const exception& e)
    {
        delete veiculo;
        cerr << e.what() << '\n';
        return false;
    }
    
    this->veiculosAtivos->push_back(veiculo);
    return true;
}

bool GerenciadorVeiculos::adicionarVeiculos(string numeroChassi, string modelo, Coordenada *localizacao, int anoFabricaocao) {
    Veiculo *veiculo = new Veiculo();
    try
    {
        veiculo->setIsAtivo(true);
        veiculo->setLocalizacao(localizacao);
        veiculo->setModelo(modelo);
        veiculo->setNumeroChassi(numeroChassi);
    }
    catch(const exception& e)
    {
        delete veiculo;
        cerr << e.what() << '\n';
        return false;
    }
    
    this->veiculosAtivos->push_back(veiculo);
    return true;
}

bool GerenciadorVeiculos::adicionarVeiculos(string numeroChassi, string modelo, Coordenada *localizacao, float capacidadeDeCarga) {
    Veiculo *novoVeiculo = new Veiculo();
    Veiculo *veiculo = new Veiculo();
    try
    {
        veiculo->setIsAtivo(true);
        veiculo->setCapacidadeDeCarga(capacidadeDeCarga);
        veiculo->setLocalizacao(localizacao);
        veiculo->setModelo(modelo);
        veiculo->setNumeroChassi(numeroChassi);
    }
    catch(const exception& e)
    {
        delete veiculo;
        cerr << e.what() << '\n';
        return false;
    }
    
    this->veiculosAtivos->push_back(veiculo);
    return true;
}

int GerenciadorVeiculos::removerVeiculo(Veiculo *veiculo)
{
    bool veiculoPresente = false;
    for (Veiculo *v : *this->veiculosAtivos)
        if (veiculo->getNumeroChassi() == veiculo->getNumeroChassi())
        {
            veiculoPresente = true;
            break;
        }

    if (veiculoPresente)
    {
        this->veiculosAtivos->remove(veiculo);
        return 1;
    }

    return 0;
}

Veiculo *GerenciadorVeiculos::buscaVeiculo(string numeroChassi)
{
    for (Veiculo *v : *this->veiculosAtivos)
        if (v->getNumeroChassi() == numeroChassi)
            return v;
    return NULL;
}

Veiculo *GerenciadorVeiculos::buscaVeiculoByLocalizacao(Coordenada *localizacao)
{
    for (Veiculo *v : *this->veiculosAtivos)
        if (localizacao == v->getLocalizacao())
            return v;
    return NULL;
}

list<Veiculo *> *GerenciadorVeiculos::obterVeiculosAtivos()
{
    return this->veiculosAtivos;
}

ostream &operator<<(ostream &os, GerenciadorVeiculos &gerenciadorVeiculos)
{
    for (Veiculo *i : *gerenciadorVeiculos.veiculosAtivos)
        os << *i << endl;
    return os;
}
#endif