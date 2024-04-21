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
        delete veiculo;
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

bool GerenciadorVeiculos::adicionarVeiculos(string numeroChassi, string modelo, string localizacao, int isAtivo, int anoFabricacao, float capacidadeDeCarga)
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
        cerr << e.what() << '\n';
    }
    
    this->veiculosAtivos->push_back(veiculo);
    
    delete veiculo;
    return 0;
}

bool GerenciadorVeiculos::adicionarVeiculos(string numeroChassi, string modelo, string localizacao) {
    Veiculo *novoVeiculo = new Veiculo();
    try
    {
        novoVeiculo->setNumeroChassi(numeroChassi);
        novoVeiculo->setModelo(modelo);
        novoVeiculo->setLocalizacao(localizacao);
        return true;    
    }
    catch(const exception& e)
    {
        delete novoVeiculo;
        cerr << e.what() << '\n';
        return false;
    } 
}

bool GerenciadorVeiculos::adicionarVeiculos(string numeroChassi, string modelo, string localizacao, int anoFabricaocao) {
    Veiculo *novoVeiculo = new Veiculo();
    try {
        novoVeiculo->setNumeroChassi(numeroChassi);
        novoVeiculo->setModelo(modelo);
        novoVeiculo->setLocalizacao(localizacao);
        novoVeiculo->setIsAtivo(true);
        novoVeiculo->setAnoFabricaocao(anoFabricaocao);
        return true;
    } catch(const exception& e) {
        delete novoVeiculo;
        cerr << e.what() << endl;
        return false;
    }
}

bool GerenciadorVeiculos::adicionarVeiculos(string numeroChassi, string modelo, string localizacao, float capacidadeDeCarga) {
    Veiculo *novoVeiculo = new Veiculo();
    try {
        novoVeiculo->setNumeroChassi(numeroChassi);
        novoVeiculo->setModelo(modelo);
        novoVeiculo->setLocalizacao(localizacao);
        novoVeiculo->setIsAtivo(true);
        novoVeiculo->setCapacidadeDeCarga(capacidadeDeCarga);
        return true;
    } catch(const exception& e) {
        delete novoVeiculo;
        cerr << e.what() << endl;
        return false;
    }
    return false;
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

Veiculo *GerenciadorVeiculos::buscaVeiculoByLocalizacao(string localizacao)
{
    for (Veiculo *v : *this->veiculosAtivos)
        if (v->getLocalizacao() == localizacao)
            return v;
    return NULL;
}

list<Veiculo *> *GerenciadorVeiculos::obterVeiculosAtivos()
{
    return this->veiculosAtivos;
}
