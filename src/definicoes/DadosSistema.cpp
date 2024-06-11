#ifndef DADOS_SISTEMA_CPP
#define DADOS_SISTEMA_CPP
#include <iostream>
#include "../headers/dadosSistema.h"
#include "../headers/Cliente.h"
#include "../headers/Veiculo.h"
#include "../headers/Coordenada.h"
#include "../headers/GerenciadorVeiculos.h"
#include "../headers/GerenciadorPedido.h"
#include "../headers/Pedido.h"
#include <string.h>
#include <random>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

DadosSistema::DadosSistema()
{
    this->clientes = new list<Cliente>();
    this->veiculos = new list<Veiculo>();
    this->coordenadas = new list<Coordenada>();
    this->gerenciadorVeiculos = new GerenciadorVeiculos();
    this->gerenciadorPedido = new GerenciadorPedido(this -> gerenciadorVeiculos);
}

DadosSistema::~DadosSistema()
{
    delete this->clientes;
    delete this->veiculos;
    delete this->coordenadas;
    delete this->gerenciadorVeiculos;
    delete this->gerenciadorPedido;
}

void DadosSistema::setGerenciadorVeiculos(GerenciadorVeiculos *gerenciadorVeiculos)
{
    this->gerenciadorVeiculos = gerenciadorVeiculos;
}

void DadosSistema::lerCSV()
{
    ifstream file("dados_entregas.csv");
    string s;
    if (!file.is_open()) 
    {  
        cerr << "Erro ao ler o arquivo\n";
        return;
    }    

    getline (file, s); 
    
    while (file.peek() != EOF)
    {
        Cliente* cliente = new Cliente;
        Pedido* pedido = new Pedido;

        getline (file, s, ',');
        cliente->setNome(s);
        getline (file, s, ',');
        cliente->setCpf(s);
        getline (file, s, '"');
        getline (file, s, '"');
        cliente->setEndereco(s);
        getline (file, s, ',');
        getline (file, s, ',');
        getline (file, s, ',');
            cliente->setEmail(s);
        getline (file, s, '"');
        getline(file, s, '"');
        if(stringParaCoordenada(s) != nullptr)
        {
            pedido -> setLocalDeColeta(stringParaCoordenada(s));
        }

        getline (file, s, ',');
        getline (file, s, '"');
        getline (file, s, '"');
        if(stringParaCoordenada(s) != nullptr)
        {
            pedido -> setLocalDeEntrega(stringParaCoordenada(s));
        }
        getline (file, s, ',');
        getline (file, s, ',');
        try
        {
            pedido->setPesoDaCarga(stof(s));
        } catch (exception& erro) 
        {
            cout << "Erro ao setar peso da carga " << s << "\n";
        }
        try {
            getline (file, s, ',');
            getline (file, s, '\n');
            pedido -> setSolicitante(cliente);
            if(pedido -> getLocalDeColeta () != nullptr && pedido -> getLocalDeEntrega() != nullptr)
            {
                this -> gerenciadorPedido-> defineVeiculosTransport(pedido);
                this -> gerenciadorPedido-> realizarEntrega();
                cout << "Pedido entregado com sucesso para " << pedido -> getSolicitante() -> getNome() << "\nNas coordenads: " << pedido -> getLocalDeEntrega() -> getLatitude() << ", " << pedido ->getLocalDeEntrega() -> getLongitude() << "\n";    
            }
            else 
            {
                cout << "Erro ao entregar pedido" << "\n";
            }
            delete(pedido);
        } catch (exception& erro)
        {
            cout << "Erro na entrega" << "\n";
        }
    }
}
Coordenada *DadosSistema::stringParaCoordenada(string endereco)
{
    //remove os \n do endereco
    for(int i = 0; i < endereco.size(); i++)
    {
        if(endereco[i] == '\n')
        {
            endereco[i] = ' ';
        }
    }
    std::string bash = "bash ./get_coordinates.sh " + endereco;
    int resultado = system(bash.c_str());
    if(resultado == 0)
    {
        try {
            std::string filename = "GeoShell/.coordinates/" +  endereco.substr(0, endereco.find(' '));
            FILE *coordenadas = fopen(filename.c_str(), "r");
            if(coordenadas == NULL)
            {
                std::cout << "Erro ao buscar coordenadas do endereço" << std::endl;
                return nullptr;
            }
            float lat, lon;
            fscanf(coordenadas, "%f %f", &lat, &lon);
            fclose(coordenadas);
            Coordenada* coordenada = new Coordenada(lat, lon);
            return coordenada;
        } catch (exception& erro)	
        {
            std::cout << "Erro ao buscar coordenadas do endereço" << std::endl;
            return nullptr;
        }
    }
    else
    {
        std::cout << "Erro ao buscar coordenadas do endereço" << std::endl;
    }
    return nullptr;
}
#endif