#include "User.h"

User::User(const string &name,int old,const string &country){
	setNome(name);
	setIdade(old);
	setPais(country);
}

User::User(){
	string name = "Roni";
	int old = 24;
	string country = "Brasil";
	setNome(name);
	setIdade(old);
	setPais(country);
}

User::~User(){
	
}

void User::setNome(const string &name){
	this->nome = name;
}

string User::getNome(){
	return this->nome;
}

void User::setIdade(int old){
	this->idade = old;
}

int User::getIdade(){
	return this->idade;
}

void User::setPais(const string &country){
	this->pais = country;
}

string User::getPais(){
	return this->pais;
}
