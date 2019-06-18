#ifndef USERPREMIUM_H
#define USERPREMIUM_H
#include "User.h"
#include <iostream>
#include <string>
using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class UserPremium : public User
{
	public:
		UserPremium(const string &,int,const string &,int);
		UserPremium();
		~UserPremium();
		
		void setAcesso(bool);
		bool getAcesso();
		void setBonus(int);
		int getBonus();
		
	private:
		bool acessoIlimitado;
		int bonusCredit;
};

#endif
