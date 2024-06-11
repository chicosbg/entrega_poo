#include <iostream>
#include <list>
#include "src/headers/dadosSistema.h"
#include "src/headers/GerenciadorVeiculos.h"
#include "src/headers/Veiculo.h"
#include "src/headers/Coordenada.h"
#include "src/headers/Cliente.h"
#include "src/headers/Caminhao.h"
#include "src/headers/Carro.h"
#include "src/headers/Caminhonete.h"
#include "src/headers/GerenciadorPedido.h"
#include "src/headers/Pedido.h"
using namespace std;

//gerar veiculos aleatorios pela quantidade
void gerarVeiculosAleatorios(GerenciadorVeiculos *gerenciadorVeiculos, int quantidade)
{
    for(int i = 0; i < quantidade; i++)
    {    
        Veiculo veiculo(rand() % 2022, rand() % 10000000, to_string(rand()), "Carga", new Coordenada(-10.183134664466259, -48.33365371359204), true);
        gerenciadorVeiculos->adicionarVeiculo(&veiculo);
    }
}


int main(void)
{
    GerenciadorVeiculos *gerenciadorVeiculos = new GerenciadorVeiculos();
    gerarVeiculosAleatorios(gerenciadorVeiculos, 100);

    DadosSistema *dadosSistema = new DadosSistema();
    dadosSistema -> setGerenciadorVeiculos(gerenciadorVeiculos);

    dadosSistema -> lerCSV();

    delete(dadosSistema);

    return 0;
}
