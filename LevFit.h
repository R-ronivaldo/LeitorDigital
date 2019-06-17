#ifndef LEVFIT_H
#define LEVFIT_H
#include "LeitorDigital.h"
#include <iostream>
#include <string>
using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class LevFit: public LeitorDigital
{
	friend ostream &operator<<(ostream &,const LevFit &);
	public:
		LevFit(const string &,bool);
		~LevFit();
		
		//Set/Get
		
		void setCaneta(bool);
		bool getCaneta();
		void setEscrever(const string &);
		string getEscrever();
		
		//Operator
		
		bool operator==(const LevFit &)const;
		bool operator!=(const LevFit &)const;
		const LevFit &operator=(const LevFit &);
		
	private:
		bool caneta;
		string escrever;
};

#endif
