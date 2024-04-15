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

    string getNome();

    int setNome(string nome);

    string getCpf();

    int setCpf(string cpf);

    string getEmail();

    int setEmail(string email);

    string getEndereco();

    int setEndereco(string endereco);
};

#endif