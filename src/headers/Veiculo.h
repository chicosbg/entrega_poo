#include <iostream>
#include "./Coordenada.h"

#ifndef _VEICULO_H_
#define _VEICULO_H_

using namespace std;

class Veiculo
{
private:
    int anoFabricaocao;
    float capacidadeDeCarga;
    bool isAtivo;
    string numeroChassi;
    string modelo;
    Coordenada *localizacao;
    
protected:
    string tipo;

public:
    Veiculo();

    Veiculo(int anoFabricaocao, float capacidadeDeCarga, string numeroChassi, string modelo, Coordenada *localizacao, bool isAtivo);
    
    ~Veiculo();

    string getTipo();

    float getCapacidadeDeCarga();

    void setCapacidadeDeCarga(float capacidadeDeCarga);

    int getAnoFabricaocao();

    void setAnoFabricaocao(int anoFabricaocao);

    string getNumeroChassi();

    void setNumeroChassi(string numeroChassi);

    string getModelo();

    void setModelo(string modelo);

    Coordenada *getLocalizacao();

    void setLocalizacao(Coordenada *localizacao);

    bool getIsAtivo();
    
    void setIsAtivo(bool IsAtivo);

    friend ostream &operator<<(ostream &os, Veiculo &veiculo);
    
    bool operator==(Veiculo &veiculo);
};

#endif