#include <iostream>
#include "../headers/Cliente.h"

using namespace std;

Cliente::Cliente() { }

Cliente::~Cliente() { }

string Cliente::GetNome()
{
    return this->nome;
}

int Cliente::SetNome(string nome)
{
    if(nome == "") return 0;
    this->nome = nome;
    return 1;
}

string Cliente::GetCpf()
{
    return this->cpf;
}

void Cliente::SetCpf(string cpf)
{
    this->cpf = pf;
}

string Cliente::GetEmail() 
{
    return this->email;
}

void Cliente::SetEmail(string email)
{
    this->email = email;
}

string Cliente::GetEndereco() 
{
    return this->endereco;
}

void Cliente::SetEndereco(string endereco)
{
    this->endereco = endereco;
}