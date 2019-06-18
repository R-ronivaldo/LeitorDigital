#include "LevFit.h"


LevFit::LevFit(const string &nu,bool can)
:LeitorDigital(nu)
{
	string esc = "...";
	setCaneta(can);
	setEscrever(esc);
}

LevFit::LevFit()
:LeitorDigital()
{
	string esc = "vazio";
	bool can = false;
	setCaneta(can);
	setEscrever(esc);
	
}

LevFit::~LevFit(){
	
}

void LevFit::setCaneta(bool can){
	this->caneta = can;	
}

bool LevFit::getCaneta(){
	return this->caneta;
}

void LevFit::setEscrever(const string &esc){
	if (this->caneta == true){
	this->escrever = esc;
	} else {
		cout << "Funcao 'Escrever' desabilitada devido Caneta esta desativa!" << endl;
	}
}

string LevFit::getEscrever(){
	return this->escrever;
}

bool LevFit::operator==(const LevFit &lev)const{
	if (caneta != lev.caneta && escrever != lev.escrever){
		return false;
	} else {
		return true;
	}
}

bool LevFit::operator!=(const LevFit &lev)const{
	return ! (*this == lev);
}

const LevFit &LevFit::operator=(const LevFit &lev){
	if (&lev != this) {
		caneta = lev.caneta;
		escrever = lev.escrever;
	}
}
		
ostream &operator<<(ostream &output,const LevFit &lev){
	output << static_cast< LeitorDigital >( lev ) << endl;
	output << "Caneta Ativa: " << lev.caneta << "." << endl;
	output << "Lendo: " << lev.escrever << "." << endl;
	
	return output;
}
