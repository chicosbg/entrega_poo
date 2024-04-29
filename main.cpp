#include <iostream>
#include <list>
#include "./src/definicoes/DadosSistema.cpp"
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
