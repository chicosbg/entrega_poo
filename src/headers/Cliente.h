#include <iostream>

#ifndef _CLIENTE_H_
#define _CLIENTE_H_

using namespace std;

class Cliente
{
private:
    string nome;
    string cpf;
    string email;
    string endereco;

public:
    Cliente();

    ~Cliente();

    string GetNome();

    void SetNome(string nome);

    string GetCpf();

    void SetCpf(string cpf);

    string GetEmail();

    void SetEmail(string email);

    string GetEndereco();

    void SetEndereco(string endereco);
};

#endif