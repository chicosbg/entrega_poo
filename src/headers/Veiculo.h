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
    string tipo;
    string numeroChassi;
    string modelo;
    string localizacao;

public:
    Veiculo();
    
    ~Veiculo();

    string GetTipo();

    float GetCapacidadeDeCarga();

    int SetCapacidadeDeCarga(float capacidadeDeCarga);

    int GetAnoFabricaocao();

    int SetAnoFabricaocao(int anoFabricaocao);

    string GetNumeroChassi();

    int SetNumeroChassi(string numeroChassi);

    string GetModelo();

    int SetModelo(string modelo);

    string GetLocalizacao();

    int SetLocalizacao(string localizacao);

    bool GetIsAtivo();
    
    void SetIsAtivo(bool IsAtivo);
};

#endif