#include "Kindle.h"

Kindle::Kindle(const string &nu, int valor)
:LeitorDigital(nu)
{
	bool serv = true;
	setServico(serv);
	setValor(valor);	
}

Kindle::Kindle(){
	bool serv = false;
	valor = 0;
	setServico(serv);
	setValor(valor);	
}

Kindle::Kindle(const Kindle &leitor)
:LeitorDigital( static_cast< LeitorDigital >( leitor ))
{
	this->servico = leitor.servico;
	this->valor = leitor.valor;
}

Kindle::~Kindle(){
}

void Kindle::setServico(bool serv){
	this->servico = serv;
}

bool Kindle::getServico(){
	return this->servico;
}

void Kindle::setValor(int valor){
	this->valor = valor;
}

int Kindle::getValor(){
	return this->valor;
}

ostream &operator<<(ostream &output,const Kindle &kindle){
	output << static_cast< LeitorDigital >( kindle ) << endl;
	output << "Serviços Ativo: " << kindle.servico << "." << endl;
	output << "Valor: " << kindle.valor << "." << endl;
	return output;
}

bool Kindle::operator==(const Kindle &kindle)const{
	if (servico != kindle.servico && valor != kindle.valor){
		return false;
	} else {
		return true;
	}
}

bool Kindle::operator!=(const Kindle &kindle)const {
	return ! (*this == kindle);
}

const Kindle &Kindle::operator=(const Kindle &kindle){
	*static_cast< LeitorDigital * >(this) = static_cast< LeitorDigital >(kindle);
	this->servico = kindle.servico;
	this->valor = kindle.valor;
	
	return *this;
}
