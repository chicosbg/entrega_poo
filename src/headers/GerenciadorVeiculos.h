#include <iostream>
#include <list>
#include "./Veiculo.h"
#ifndef _GERENCIADORVEICULO_H_
#define _GERENCIADORVEICULO_H_

class GerenciadorVeiculos
{
private:
    list<Veiculo *> *veiculosAtivos;

public:
    GerenciadorVeiculos();

    ~GerenciadorVeiculos();

    list<Veiculo *> *getVeiculosAtivos();

    int adicionarVeiculo(Veiculo *veiculo);

    int removerVeiculo(Veiculo *veiculo);

    Veiculo *buscaVeiculo(string numeroChassi);

    Veiculo *buscaVeiculoByLocalizacao(string localizacao);

    list<Veiculo *> *obterVeiculosAtivos();
};
#endif