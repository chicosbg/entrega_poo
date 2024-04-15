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

    int adicionarVeiculos(string numeroChassi, string modelo, string localizacao, bool isAtivo = false, int anoFabricaocao = 0, float capacidadeDeCarga = 0);

    int removerVeiculo(Veiculo *veiculo);

    Veiculo *buscaVeiculo(string numeroChassi);

    Veiculo *buscaVeiculoByLocalizacao(string localizacao);

    list<Veiculo *> *obterVeiculosAtivos();
};
#endif