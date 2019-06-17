#ifndef PLUS_H
#define PLUS_H
#include "Kindle.h"
#include <iostream>
#include <string>
using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class Plus : public Kindle
{
	friend ostream &operator<<(ostream &,const Plus &);
	public:
		Plus(const string &,int,int);
		Plus(const Plus &);
		~Plus();
		
		//Get/Set
		
		void setNuvem(bool);
		bool getNuvem();
		void setCapacidade(int);
		int getCapacidade();
		
		//Operator
		
		bool operator==(const Plus &)const;
		bool operator!=(const Plus &)const;
		const Plus &operator=(const Plus &);
		
	private:
		bool nuvem;
		int capacidade;
};

#endif
