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

    Cliente(string nome, string cpf, string email, string endereco);

    ~Cliente();

    string getNome();

    void setNome(string nome);

    string getCpf();

    void setCpf(string cpf);

    string getEmail();

    void setEmail(string email);

    string getEndereco();

    void setEndereco(string endereco);

    friend iostream &operator<<(iostream os, Cliente &cliente);

    bool operator==(Cliente &cliente);
};

#endif