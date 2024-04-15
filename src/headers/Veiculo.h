#include <iostream>

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
    string localizacao;
    
protected:
    string tipo;

public:
    Veiculo();
    
    ~Veiculo();

    string getTipo();

    float getCapacidadeDeCarga();

    int setCapacidadeDeCarga(float capacidadeDeCarga);

    int getAnoFabricaocao();

    int setAnoFabricaocao(int anoFabricaocao);

    string getNumeroChassi();

    int setNumeroChassi(string numeroChassi);

    string getModelo();

    int setModelo(string modelo);

    string getLocalizacao();

    int setLocalizacao(string localizacao);

    bool getIsAtivo();
    
    void setIsAtivo(bool IsAtivo);
};

#endif