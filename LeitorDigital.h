#ifndef LEITORDIGITAL_H
#define LEITORDIGITAL_H
#include "Biblioteca.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>

using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class LeitorDigital
{
	friend ostream &operator<<(ostream &, const LeitorDigital &);
	public:
		LeitorDigital(const string &);
		LeitorDigital();
		LeitorDigital(const LeitorDigital &);
		virtual ~LeitorDigital();
		string getUser();
		void setUser(const string &);
		void adicionarBiblioteca(const Biblioteca &);
		void cadastrarLista(const Biblioteca &);
		
	private:
		string user;
		
		Biblioteca *lBiblioteca;
		int quantBiblio;
		
		static int numDeUserAtivos;
};

#endif
