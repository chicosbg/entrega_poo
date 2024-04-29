#ifndef DADOSSISTEMA_H
#define DADOSSISTEMA_H
// Nesta segunda etapa, vocês devem primeiramente refatorar o código existente do colega da
// seguinte forma:
// 1) Implementar uma classe para gerir os dados de entrada do sistema. Como
// tarefa inicial, vocês devem ler o arquivo CSV disponível no Moodle e
// instanciar as classes correspondentes.
// 2) O CSV é formado pelos seguintes dados:
// Nome,CPF,Endereço,Telefone,Email,Endereço coleta,Endereço
// entrega,Peso (kg),Volume (m³),Prioridade
// 3) Caso as classes do sistema não comportem alguma das definições acima,
// vocês devem alterá-las para deixá-las funcionais.
// 4) O endereço é uma string. Vocês devem converter para coordenadas latitude,
// longitude.
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