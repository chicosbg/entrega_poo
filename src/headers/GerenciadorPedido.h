#include <iostream>
#include <list>
#include "./Pedido.h"
#include "./GerenciadorVeiculos.h"
#include "./Coordenada.h"
#ifndef _GERENCIADORPEDIDO_H_
#define _GERENCIADORPEDIDO_H_

class GerenciadorPedido {
    private:
        std::list<Pedido*> *pedidos;
        GerenciadorVeiculos *veiculos;
    public:
        GerenciadorPedido(GerenciadorVeiculos *veiculos);
        ~GerenciadorPedido();

        void defineVeiculosTransport(list<Pedido*> *listaPedidos);
        bool defineVeiculosTransport(Pedido *pedido);
};

#endif