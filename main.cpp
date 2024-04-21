#include <iostream>
#include <list>
#include "./src/headers/Cliente.h"
#include "./src/headers/Carro.h"
#include "./src/headers/GErenciadorVeiculos.h"
using namespace std;

int main(void)
{
    Cliente *c = new Cliente();
    Carro *caminhao = new Carro();
    list<Veiculo *> *ativos = new list<Veiculo *>();
    GerenciadorVeiculos *gerenciador = new GerenciadorVeiculos();
    char teclasaida;

    caminhao->setNumeroChassi("abcdefghijklsdpow");

    caminhao->setIsAtivo(true);

    cout << caminhao->getTipo() << endl;

    gerenciador->adicionarVeiculo(caminhao);

    ativos = gerenciador->getVeiculosAtivos();

    for (Veiculo *veiculo : *ativos)
    {
        cout << veiculo->getNumeroChassi() << endl;
    }

    cin >> teclasaida;

    delete c;
    delete caminhao;
    delete gerenciador;
    return 0;
}
