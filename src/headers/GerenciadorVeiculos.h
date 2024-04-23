#include <iostream>
#include <list>
#include "./Veiculo.h"
#include "./Coordenada.h"
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

    bool adicionarVeiculos(string numeroChassi, string modelo, Coordenada *localizacao);

    bool adicionarVeiculos(string numeroChassi, string modelo, Coordenada *localizacao, int anoFabricaocao);

    bool adicionarVeiculos(string numeroChassi, string modelo, Coordenada *localizacao, float capacidadeDeCarga);

    bool adicionarVeiculos(string numeroChassi, string modelo, Coordenada *localizacao, int isAtivo, int anoFabricacao, float capacidadeDeCarga);

    int removerVeiculo(Veiculo *veiculo);

    Veiculo *buscaVeiculo(string numeroChassi);

    Veiculo *buscaVeiculoByLocalizacao(Coordenada *localizacao);

    list<Veiculo *> *obterVeiculosAtivos();
};
#endif