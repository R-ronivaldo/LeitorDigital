#include "UserBasic.h"

UserBasic::UserBasic(const string &nome,int idade, const string &pais,bool licens,int valid)
:User(nome,idade,pais)
{
	setLisenca(licens);
	setValidade(valid);
}

UserBasic::UserBasic()
:User()
{
	bool licens = false;
	int valid = 0;
	setLisenca(licens);
	setValidade(valid);
	
}

UserBasic::~UserBasic(){
	
}

void UserBasic::setLisenca(bool licens){
	this->lisenca = licens;
}

bool UserBasic::getLisenca(){
	return this->lisenca;
}

void UserBasic::setValidade(int valid){
	this->valLisenca = valid;
}

int UserBasic::getValidade(){
	return this->valLisenca;
}
