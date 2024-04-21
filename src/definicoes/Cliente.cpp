#include <iostream>
#include <regex>
#include "../headers/Cliente.h"

using namespace std;

Cliente::Cliente() { }

Cliente::Cliente(string nome, string cpf, string email, string endereco) {
    this->setNome(nome);
    this->setCpf(cpf);
    this->setEmail(email);
    this->setEndereco(endereco);
}

Cliente::~Cliente() {}

string Cliente::getNome()
{
    return this->nome;
}

void Cliente::setNome(string nome)
{
    if(nome.empty()) throw invalid_argument("Nao eh permitido nome vazio.");
    this->nome = nome;
}

string Cliente::getCpf()
{
    return this->cpf;
}

void Cliente::setCpf(string cpf)
{
    std::regex cpfRegex("^\\d{3}(\\.?\\d{3}){2}-?\\d{2}$");
    if(!std::regex_match(cpf, cpfRegex)) throw invalid_argument("Padrao de cpf incompativel.");   
    this->cpf = cpf;
}

string Cliente::getEmail() 
{
    return this->email;
}

void Cliente::setEmail(string email)
{
    if(this->email.empty()) throw invalid_argument("Nao eh permitido email vazio.");
    if(!this->email.find('@')) throw invalid_argument("Email invalido"); 
    this->email = email;
}

string Cliente::getEndereco() 
{
    return this->endereco;
}

void Cliente::setEndereco(string endereco)
{
    if(this->endereco.empty()) throw invalid_argument("Nao eh permitido endereco vazio.");
    this->endereco = endereco;
}