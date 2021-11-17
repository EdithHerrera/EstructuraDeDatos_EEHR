// Lista_generica.hpp 
// lista generica

#ifndef lista_generica_hpp
#define lista_generica_hpp

#include <iostream> 
#include <string> 
#include <sstream>

using std::string; 
using std::ostringstream; 
using std::cout; 
using std::endl;
template <typename TIPODATO>

class Lista { 
	private:
		int cuenta; int capacidad; TIPODATO *items;
		void agrandar(); 
	public:
		Lista(int capacidad); Lista();
		Lista(); Lista(const Lista &otra); // Construir una lista a partir de otra en una direcciîn de memoria 
		bool estaVacia(); 
		int tamano(); 
		void insertar(int indice, TIPODATO item); 
		void adjuntar (TIPODATO item); 
		TIPODATO obtener(int indice); 
		bool contiene (TIPODATO item); 
		TIPODATO remover(int indice); 
		string comoCadena();
		bool contiene (TIPODATO item); 
		TIPODATO remover(int indice); 
		string comoCadena();
	// Constructor 
	template <typename TIPODATO>
	Lista<TIPODATO>::Lista(int capacidad) {
		cout << "Creando una lista vacia..." << endl; 
		this->cuenta = 0; 
		this->capacidad = capacidad; 
		this->items - new TIPODATO [capacidad];
		cout << " La lista tiene capacidad para " << this->capacidad << "elementos" << endl;
	}
	// Constructor con tamaAto por defecto, en este caso 4 
	template <typename TIPODATO> 
	Lista <TIPODATO>:: Lista() : Lista(4) {}
	
	// Destructor de la lista 
	template <typename TIPODATO> 
	Lista<TIPODATO>::~Lista() {
		cout << "Destruyendo la lista..." << endl; 
		delete[] items;
	}
	
	// Construir una lista a partir de otra 
	template <typename TIPODATO> 
	Lista<TIPODATO>::Lista(const Lista<TIPODATO> &otra) {
		cout << "Copiando una lista desde otra..." << endl; 
		this->cuenta = otra.cuenta; 
		this->capacidad = otra.capacidad;
		this->items = new TIPODATO[ capacidad]; 
		for (int i = 0; i < this->cuenta; i++)
		this->items[i] = otra.items[i];
	}	
	
	cout << "Insertando un elemento..." << endl; 
	// Desplazar elementos a partir del indice a la derecha 
	for (int i = cuenta - 1; i >= indice; i--) {
		cout << " Desplazando elemento " << items[i] << " del indice "; 
		cout << i << " al indice " << (i+1) << endl; 
		this->items [i+1] = this->items[i];
	
		// Insertar nuevo elemento 
		cout << " Insertando elemento " << item << "en el indice " << indice << endl;
		this->items[indice] = item;
		
		// Incrementar la cuenta de elementos 
		cout << " Incrementando la cuenta de elementos" << endl; 
		this->cuenta++;
	}
	
	// Agregar un elemento al final 
	template <typename TIPODATO>
	void Lista<TIPODATO>:: adjuntar(TIPODATO item) {
		this->insertar(this->cuenta, item);
	}
	
	// Valor del elemento en la posicion indice 
	template <typename TIPODATO>
	TIPODATO Lista<TIPODATO>:: obtener(int indice) {
		
		// Validar el indice 
		if (indice <a || indice >= this->cuenta) throw "Indice fuera de rango";
		if (this->estaVacia()) throw "No se pued recuperar elementos de una lista vacia";
		cout << "Recuperando elemento en el indice " << indice << endl; return this->items[indice);
		
		// Esta el item en la lista
		template <typename TIPODATO> 
		bool Lista<TIPODATO>:: contiene (TIPODATO item) { 
			for (int i = 0; i < this->cuenta; i++) {
				cout << "Recorriendo elemento con indice "<<i<< endl;
			}
		}
	}
		
		
		
		template <typename TIPODATO bool Lista<TIPODATO>::estaVacia() {
cout << "Comprobando si la lista esta vacia..." << endl; return this->cuenta == 0;
// Tamano de la lista template <typename TIPODATO int Lista<TIPODATO::tamano() {
cout << "Obteniendo el tamano de la lista..." << endl; return this->cuenta;
template <typename TIPODATO void Lista<TIPODATO): : agrandar() {
cout << "Duplicando el tamano de la lista..." << endl; TIPODATO *temp = this->items; this->capacidad *= 2; this->items = new TIPODATO[ capacidad]; for (int i = 0; i < cuenta; i++)
this->items[i] = temp[i]; delete[] temp; cout << " La lista tiene capacidad para " << this->capacidad << " elementos" << endl;
J/ Insertar un elemento en un indice especifico template <typename TIPODATO> void Lista<TIPODATO>:: insertar(int indice, TIPODATO item) {
// Validar el indice if (indice < || indice > this->cuenta) throw "Indice fuera de rango";
// Agrandar la lista si el elemento no cabe if (this->cuenta >= this->capacidad) this->agrandar();
cout << "Insertando un elemento..." << endl; // Desplazar elementos a partir del indice a la derecha for (int i = cuenta - 1; i >= indice; i--) {



		
		
