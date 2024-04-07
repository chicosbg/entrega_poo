#include <iostream>
#include "../headers/Cliente.h"

using namespace std;

Cliente::Cliente() { }

Cliente::~Cliente() { }

string Cliente::GetNome()
{
    return this->nome;
}

void Cliente::SetNome(string nome)
{
    nome = this->nome;
}

string Cliente::GetCpf()
{
    return this->cpf;
}

void Cliente::SetCpf(string cpf)
{
    cpf = this->cpf;
}

string Cliente::GetEmail() 
{
    return this->email;
}

void Cliente::SetEmail(string email)
{
    email = this->email;
}

string Cliente::GetEndereco() 
{
    return this->endereco;
}

void Cliente::SetEndereco(string endereco)
{
    endereco = this->endereco;
}