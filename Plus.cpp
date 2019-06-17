#include "Plus.h"

Plus::Plus(const string &nu,int valor,int cap)
:Kindle(nu,valor)
{
	bool nuv = true;
	setNuvem(nuv);
	setCapacidade(cap);
}

Plus::~Plus(){	
}

void Plus::setNuvem(bool nuv){
	this->nuvem = nuv;
}

bool Plus::getNuvem(){
	return this->nuvem;
}

void Plus::setCapacidade(int cap){
	this->capacidade = cap;
}

int Plus::getCapacidade(){
	return this->capacidade;
}

ostream &operator<<(ostream &output,const Plus &pluss){
	output << static_cast< Kindle >( pluss ) << endl;
	output << "Serviços de nuvem Ativo: " << pluss.nuvem << "." << endl;
	output << "Capacidade: " << pluss.capacidade << " GB." << endl;
	
	return output;
}

bool Plus::operator==(const Plus &pluss)const{
	if (nuvem != pluss.nuvem && capacidade != pluss.capacidade){
		return false;	
	} else {
		return true;
	}
}

bool Plus::operator!=(const Plus &pluss)const{
	return ! (*this == pluss);
}

const Plus &Plus::operator=(const Plus &pluss){
	if (&pluss != this){
		nuvem = pluss.nuvem;
		capacidade = pluss.capacidade;
	}
}
