#include "LeitorDigital.h"
#include "Kindle.h"
#include "Plus.h"
#include "LevFit.h"
#include "Kobo.h"
#include "Biblioteca.h"
#include <iostream>
#include <stdio.h>
#include <string.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
		
	Biblioteca biblio1("Saraiva");
	Biblioteca biblio2("Leitura");
	Biblioteca biblio3("Amazon");
	Biblioteca biblio4("Sentur");
	Livro livro1("HarryPotter1","J.K","Fantasia1",2010);
	Livro livro2("HarryPotter2","J.K2","Fantasia2",2011);
	
	cout << endl;
	cout << "**************Kindle******************" << endl;
	cout << endl;
	
	Kindle kindle1("Ronivaldo",24);
	kindle1.adicionarBiblioteca(biblio2);
	biblio1.adicionarLivro(livro1);
	biblio1.adicionarLivro(livro2);

	cout << kindle1;
	
	cout << endl;
	cout << "**************Plus******************" << endl;
	cout << endl;
	
	Plus plus1("Ronivaldo",24,200);	
	plus1.adicionarBiblioteca(biblio2);
	biblio2.adicionarLivro(livro1);
	biblio2.adicionarLivro(livro2);

	cout << plus1;

	cout << endl;
	cout << "**************Lev******************" << endl;
	cout << endl;
	
	LevFit lev1("Ronivaldo",true);
	lev1.adicionarBiblioteca(biblio3);
	biblio3.adicionarLivro(livro1);
	biblio3.adicionarLivro(livro2);
	lev1.setEscrever("Este e o meu rabisco que eu estou testando");
	
	cout << lev1;
	
	cout << endl;
	cout << "**************Kobo******************" << endl;
	cout << endl;
	
	Kobo kobo1("Ronivaldo4",true,"Claudomiro");
	kobo1.adicionarBiblioteca(biblio4);
	biblio4.adicionarLivro(livro1);
	biblio4.adicionarLivro(livro2);
	
	cout << kobo1;
/*	string objL,objB,no,au,ge;
	int opcao,op1,codigol;
	
	cout << "Insira o nome do Usuario :";
	cin >> objL;
	LeitorDigital kindle1 (objL);
	LeitorDigital kindle2 ("Junior");
	
	cout << "Insira o nome da Biblioteca :";
	cin >> objB;
	Biblioteca biblio1(objB);
	kindle1.adicionarBiblioteca(biblio1);
	cout << biblio1;
			
	Livro livro1("HarryPotter1","J.K","Fantasia1",2010);
	Livro livro2("HarryPotter2","J.K2","Fantasia2",2011);
	Livro livro3("HarryPotter3","J.K3","Fantasia3",2010);
	Livro livro4("HarryPotter4","J.K4","Fantasia4",2013);
	Livro livro5("HarryPotter5","J.K5","Fantasia5",2012);
	Livro livro6("HarryPotter6","J.K6","Fantasia6",2012);
	Livro livro7("HarryPotter7","J.K7","Fantasia7",2015);
	Livro livro8("HarryPotter8","J.K8","Fantasia8",2009);
	Livro livro9("HarryPotter9","J.K9","Fantasia9",2010);
	Livro livro10("HarryPotter10","J.K13","Fantasia13",2015);

	while (opcao != 0){
		system("cls");
		cout << "Selecione a opcao desejada" << endl;		
		cout << "[1] Buscar livro disponíveis" << endl;
		cout << "[2] Adicionar livros na biblioteca" << endl;
		cout << "[3] Listar livros da biblioteca" << endl;
		cout << "[4] Informações do sistema" << endl;
		cout << "[0] Sair" << endl;
		cout << "#######################" << endl;
		cin >> opcao;
		
		switch (opcao){
			case 1:
				system("cls");
				cout << "###Lista de livros disponíveis para download###" << endl;
				cout << endl;
				cout << "Titulo: " << livro1.getNomeLivro() << endl;
				cout << "Titulo: " << livro2.getNomeLivro() << endl;
				cout << "Titulo: " << livro3.getNomeLivro() << endl;
				cout << "Titulo: " << livro4.getNomeLivro() << endl;
				cout << "Titulo: " << livro5.getNomeLivro() << endl;
				cout << "Titulo: " << livro6.getNomeLivro() << endl;
				cout << "Titulo: " << livro7.getNomeLivro() << endl;
				cout << "Titulo: " << livro8.getNomeLivro() << endl;
				cout << "Titulo: " << livro9.getNomeLivro() << endl;
				cout << "Titulo: " << livro10.getNomeLivro() << endl;
				cout << endl;
				cout << "###############################################" << endl;
				cout << endl;
				
				do {
					string op1s;
					cout << "Entre com qualquer tecla para voltar: " << endl;
					cin >> op1s;
				} while (op1 != 0 );
				break;
				
			case 2:
				system("cls");
				cout << "Entre com o titulo do livro: ";
				cin >> codigol;
				system("cls");
		 			switch (codigol){
						case 1:
						biblio1.adicionarLivro(livro1);
						break;
						case 2:
						biblio1.adicionarLivro(livro2);
						break;
						case 3:
						biblio1.adicionarLivro(livro3);
						break;
						case 4:
						biblio1.adicionarLivro(livro4);
						break;
						case 5:
						biblio1.adicionarLivro(livro5);
						break;
						case 6:
						biblio1.adicionarLivro(livro6);
						break;
						case 7:
						biblio1.adicionarLivro(livro7);
						break;
						case 8:
						biblio1.adicionarLivro(livro8);
						break;
						case 9:
						biblio1.adicionarLivro(livro9);
						break;
						case 10:
						biblio1.adicionarLivro(livro10);
						break;
					}
				do {
					string op1s;
					cout << "Entre com qualquer tecla para voltar: " << endl;
					cin >> op1s;
				} while (op1 != 0 );
				break;
			case 3:
				system("cls");
				cout << biblio1;
					do {
						string op1s;
						cout << "Entre com qualquer tecla para voltar: " << endl;
						cin >> op1s;
						} while (op1 != 0 );
				system("cls");
				break;		
							
			
			case 4:
				system("cls");
				cout << kindle1;
					do {
						string op1s;
						cout << "Entre com qualquer tecla para voltar: " << endl;
						cin >> op1s;
						} while (op1 != 0 );
				system("cls");
				break;
			
			case 0:
				system("cls");
				cout << "Bye Baby!";
			}
	
	}
	
	cout << endl;
	cout << "Parte apenas para testes!" << endl;
	
	Biblioteca biblio2("teste");
	cout << biblio2;
	cout << biblio1;

	biblio2.adicionarLivro(livro1);
	biblio2.adicionarLivro(livro4);
	biblio2.imprimeBiblio();
	
	if (biblio1 < biblio2){
		cout << "Biblioteca 2 e maior";
	} else {
		cout << "Biblioteca 1 e maior";
	}
	
	if (livro1 < livro2){
		cout << endl;
		cout << "O livro 1 é menor que o livro 2" << endl;
		cout << endl;
	}	else {
		cout << endl;
		cout << "O livro 2 é menor que o livro 1" << endl;
		cout << endl;
	}
	*/
}

