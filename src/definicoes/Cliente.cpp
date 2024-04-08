#include <iostream>
#include <regex>
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

int Cliente::SetCpf(string cpf)
{
    std::regex cpfRegex("^\\d{3}(\\.?\\d{3}){2}-?\\d{2}$");
    if(!std::regex_match(cpf, cpfRegex)) return 0;   
    this->cpf = cpf;
    return 1;
}

string Cliente::GetEmail() 
{
    return this->email;
}

int Cliente::SetEmail(string email)
{
    if(this->email == "") return 0;
    this->email = email;
    return 1;
}

string Cliente::GetEndereco() 
{
    return this->endereco;
}

int Cliente::SetEndereco(string endereco)
{
    if(this->email == "") return 0;
    this->endereco = endereco;
    return 1;
    
}