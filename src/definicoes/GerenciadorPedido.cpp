#include <iostream>
#include "../headers/GerenciadorPedido.h"
#include "../headers/Pedido.h"
#include "../headers/GerenciadorVeiculos.h"

GerenciadorPedido::GerenciadorPedido(GerenciadorVeiculos *veiculos) {
    this->veiculos = veiculos;
    this->pedidos = new list<Pedido*>;
}
GerenciadorPedido::~GerenciadorPedido() {
    delete this->pedidos;
    delete this->veiculos;
}

void GerenciadorPedido::defineVeiculosTransport(list<Pedido*> *listaPedidos) {
    // Percorrer a lista e buscar o veiculo com melhor capacidade para a tarefa
    int *indicesPercorridos = new int[listaPedidos->size()];
    list<Veiculo *> *veiculosAtivos = this->veiculos->getVeiculosAtivos();
    for(Veiculo *veiculo: *veiculosAtivos) {
        int capacidadeTotalDoVeiculo = veiculo->getCapacidadeDeCarga();  
        for(Pedido *pedido: *listaPedidos) {
            if(pedido->getPesoDaCarga() > capacidadeTotalDoVeiculo) continue; 
            pedido->setVeiculoDeTransporte(veiculo);
            this->pedidos->push_back(pedido);
            capacidadeTotalDoVeiculo = capacidadeTotalDoVeiculo - pedido->getPesoDaCarga();
        }
    }
}