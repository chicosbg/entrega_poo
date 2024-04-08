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

    caminhao->SetNumeroChassi("abcdefghijklsdpow");

    caminhao->SetIsAtivo(true);

    cout << caminhao->GetTipo() << endl;

    gerenciador->adicionarVeiculo(caminhao);

    ativos = gerenciador->getVeiculosAtivos();

    for (Veiculo *veiculo : *ativos)
    {
        cout << veiculo->GetNumeroChassi() << endl;
    }

    cout << caminhao->GetTipo() << endl;
    cout << "\033[41m"
         << "CLIENTE"
         << "\033[0m" << endl;

    if ((c->SetNome("paulo que tranportadora")) == 1)
        cout << "Nome: " << c->GetNome() << endl;
    else
        cout << "Nao foi possivel definir um nome do cliente" << endl;

    if ((c->SetCpf("123.456.789-88") == 1 || c->SetCpf("12345678988")) == 1)
        cout << "cpf: " << c->GetCpf() << endl;
    else
        cout << "Nao foi possivel definir um cpf para o cliente" << endl;

    cin >> teclasaida;

    delete c;
    delete caminhao;
    delete gerenciador;
    return 0;
}
