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

    void SetTipo(string tipo);

    float GetCapacidadeDeCarga();

    void SetCapacidadeDeCarga(float capacidadeDeCarga);

    int GetAnoFabricaocao();

    void SetAnoFabricaocao(int anoFabricaocao);

    string GetNumeroChassi();

    void SetNumeroChassi(string numeroChassi);

    string GetModelo();

    void SetModelo(string modelo);

    string GetLocalizacao();

    void SetLocalizacao(string localizacao);

    bool GetIsAtivo();
    
    void SetIsAtivo(bool IsAtivo);
};

#endif