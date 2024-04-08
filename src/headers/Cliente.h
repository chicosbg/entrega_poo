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

    int SetNome(string nome);

    string GetCpf();

    int SetCpf(string cpf);

    string GetEmail();

    int SetEmail(string email);

    string GetEndereco();

    int SetEndereco(string endereco);
};

#endif