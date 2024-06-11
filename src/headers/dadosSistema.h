#ifndef DADOSSISTEMA_H
#define DADOSSISTEMA_H
#include <iostream>
#include "Cliente.h"
#include "Veiculo.h"
#include "Coordenada.h"
#include "GerenciadorVeiculos.h"
#include "GerenciadorPedido.h"


using namespace std;

class DadosSistema{
    private:
        FILE *csv;
        list<Cliente> *clientes;
        list<Veiculo> *veiculos;
        list<Coordenada> *coordenadas;
        GerenciadorVeiculos *gerenciadorVeiculos;
        GerenciadorPedido *gerenciadorPedido;
    public:
        DadosSistema();
        ~DadosSistema();

        void setGerenciadorVeiculos(GerenciadorVeiculos *gerenciadorVeiculos);

        void lerCSV();
        Coordenada *stringParaCoordenada(string endereco);
};
#endif