#ifndef KOBO_H
#define KOBO_H
#include "LeitorDigital.h"
#include <iostream>
#include <string>
using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Kobo : public LeitorDigital
{
	friend ostream &operator<<(ostream &,const Kobo &);
	public:
		Kobo(const string &,bool,const string &);
		~Kobo();
		
		//Set/Get
		
		void setCompartilhar(bool);
		bool getCompartilhar();
		void setUserShare(const string &);
		string getUserShare();
		
		//Operator
		
		bool operator==(const Kobo &)const;
		bool operator!=(const Kobo &)const;
		const &operator=(const Kobo &);
		
	private:
		bool compartilhar;
		string userShare;
		
		
		
};

#endif
