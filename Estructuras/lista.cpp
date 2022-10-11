#include "lista.h"

lista::lista()
{
	setPrimerPtr(0);
	setUltimoPtr(0);
}

lista::~lista()
{
	;
}

void lista::setPrimerPtr(nodo* p){
	primerPtr = p;
}
void lista::setUltimoPtr(nodo* u){
	ultimoPtr = u;
}
nodo* lista::getPrimerPtr(){
	return primerPtr;
}
nodo* lista::getUltimoPtr(){
	return ultimoPtr;
}

void lista::insertarFinal(int a){
	nodo* temp = new nodo(a);
	if(getUltimoPtr() == 0){
		setPrimerPtr(temp);
		setUltimoPtr(temp);
	}
	else{
		ultimoPtr->setSiguientePtr(temp);
		setUltimoPtr(temp);
	}
}
void lista::imprimir(){
	cout<<"primerPtr = "<<getPrimerPtr()<<endl;
	cout<<"ultimoPtr = "<<getUltimoPtr()<<endl;
}
