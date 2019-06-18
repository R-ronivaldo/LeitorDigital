#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
using std::ostream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

class User
{
	public:
		User(const string &,int,const string &);
		User();
		virtual ~User();
		
		void setNome(const string &);
		string getNome();
		void setIdade(int);
		int getIdade();
		void setPais(const string &);
		string getPais();
		
	private:
		string nome;
		int idade;
		string pais;
};

#endif
