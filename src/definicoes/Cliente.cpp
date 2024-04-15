#include <iostream>
#include <regex>
#include "../headers/Cliente.h"

using namespace std;

Cliente::Cliente() { }

Cliente::~Cliente() { }

string Cliente::getNome()
{
    return this->nome;
}

int Cliente::setNome(string nome)
{
    if(nome == "") return 0;
    this->nome = nome;
    return 1;
}

string Cliente::getCpf()
{
    return this->cpf;
}

int Cliente::setCpf(string cpf)
{
    std::regex cpfRegex("^\\d{3}(\\.?\\d{3}){2}-?\\d{2}$");
    if(!std::regex_match(cpf, cpfRegex)) return 0;   
    this->cpf = cpf;
    return 1;
}

string Cliente::getEmail() 
{
    return this->email;
}

int Cliente::setEmail(string email)
{
    if(this->email == "") return 0;
    this->email = email;
    return 1;
}

string Cliente::getEndereco() 
{
    return this->endereco;
}

int Cliente::setEndereco(string endereco)
{
    if(this->email == "") return 0;
    this->endereco = endereco;
    return 1;
    
}