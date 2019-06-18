#include "UserPremium.h"
		
UserPremium::UserPremium(const string &nome,int idade, const string &pais,int bonu)
:User(nome,idade,pais)
{
	bool acesso = true;
	setAcesso(acesso);
	setBonus(bonu);
}

UserPremium::UserPremium()
:User()
{
	bool acesso = true;
	int bonu = 0;
	setAcesso(acesso);
	setBonus(bonu);
}

UserPremium::~UserPremium()	{
	
}	

void UserPremium::setAcesso(bool acesso){
	this->acessoIlimitado = acesso;
}

bool UserPremium::getAcesso(){
	return this->acessoIlimitado;
}

void UserPremium::setBonus(int bonu){
	this->bonusCredit = bonu;
}

int UserPremium::getBonus(){
	return this->bonusCredit;
}	
