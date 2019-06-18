#include "LeitorDigital.h"

int LeitorDigital::numDeUserAtivos = 0;

LeitorDigital::LeitorDigital(const string &nu)
{
	setUser(nu);
	this->quantBiblio = 0;
}

LeitorDigital::LeitorDigital(){
	string nu = "Desconhecido";
	setUser(nu);
	this->quantBiblio = 0;
}

LeitorDigital::LeitorDigital(const LeitorDigital &link3)
 : quantBiblio(link3.quantBiblio)
{
	lBiblioteca = new Biblioteca[ quantBiblio ];
		
	for (int i=0;i<quantBiblio;i++)
		this->lBiblioteca[i] = link3.lBiblioteca[i];
		
	this->user = link3.user;
	
	
}

LeitorDigital::~LeitorDigital(){

}

string LeitorDigital::getUser(){
	return user;
	
}

void LeitorDigital::setUser(const string &nu){
	this->user = nu;
	numDeUserAtivos++;
}

void LeitorDigital::cadastrarLista(const Biblioteca &bi){
	
	quantBiblio++;
	lBiblioteca = new Biblioteca[quantBiblio];
	lBiblioteca[0] = bi;
		
		
	cout << "A Biblioteca '" << lBiblioteca[0].getNomeBiblio() << "' foi adicionada ao usuario com sucesso!" << endl;
}

void LeitorDigital::adicionarBiblioteca(const Biblioteca &bi){
	if (quantBiblio == 0){
		cadastrarLista(bi);
	} else {
		
		Biblioteca *aux2 = new Biblioteca[quantBiblio];
		
		for(int i = 0; i < quantBiblio; i++){
			aux2[i] = lBiblioteca[i];
			}
			
		delete [] lBiblioteca;
		
		lBiblioteca = new Biblioteca[quantBiblio+1];
		
		for(int i = 0; i < quantBiblio; i++){
			lBiblioteca[i] = aux2[i];
		}
			
		lBiblioteca[quantBiblio] = bi;
		
		delete [] aux2;
	
	cout << "A Biblioteca '" << lBiblioteca[quantBiblio].getNomeBiblio() << "' foi Adicionada ao usuario com sucesso!" << endl;
	quantBiblio++;
}
}

ostream &operator<<(ostream &output, const LeitorDigital &leitorDigital){
	output << "Numero de usuarios: " << leitorDigital.numDeUserAtivos << endl;
	output << "Usuario: " << leitorDigital.user << endl;
 	output << "Numero de Bibliotecas: " << leitorDigital.quantBiblio << endl;
 	output << "Bibliotecas: ";
 	for (int i=0; i < leitorDigital.quantBiblio; i++){
 		output << leitorDigital.lBiblioteca[i].getNomeBiblio() << endl;
		}
 	return output;
}

