#ifndef USERBASIC_H
#define USERBASIC_H
#include "User.h"
#include <iostream>
#include <string>
using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class UserBasic : public User
{
	public:
		UserBasic(const string &,int,const string &,bool,int);
		UserBasic();
		~UserBasic();
		
		void setLisenca(bool);
		bool getLisenca();
		void setValidade(int);
		int getValidade();	
	private:
		bool lisenca;
		int valLisenca;
};

#endif
