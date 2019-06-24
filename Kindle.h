#ifndef KINDLE_H
#define KINDLE_H
#include "LeitorDigital.h"
#include <iostream>
#include <string>
using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Kindle : public LeitorDigital
{
	friend ostream &operator<<(ostream &,const Kindle &);
	public:
		Kindle(const string &,int);
		Kindle();
		Kindle(const Kindle &);
		~Kindle();
		
		//Get/Set
		
		void setServico(bool);
		bool getServico();
		void setValor(int);
		int getValor();
		
		//Operator
		
		bool operator==(const Kindle &)const;
		bool operator!=(const Kindle &)const;
		const Kindle &operator=(const Kindle &);
		
	private:
		bool servico;
		int valor;
};

#endif
