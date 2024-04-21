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

    bool adicionarVeiculos(string numeroChassi, string modelo, string localizacao);

    bool adicionarVeiculos(string numeroChassi, string modelo, string localizacao, bool isAtivo);

    bool adicionarVeiculos(string numeroChassi, string modelo, string localizacao, int anoFabricaocao);

    bool adicionarVeiculos(string numeroChassi, string modelo, string localizacao, float capacidadeDeCarga);

    bool adicionarVeiculos(string numeroChassi, string modelo, string localizacao, int isAtivo, int anoFabricacao, float capacidadeDeCarga);

    int removerVeiculo(Veiculo *veiculo);

    Veiculo *buscaVeiculo(string numeroChassi);

    Veiculo *buscaVeiculoByLocalizacao(string localizacao);

    list<Veiculo *> *obterVeiculosAtivos();
};
#endif