#include <iostream> 
#include <array>
using namespace std;
const int TAMANIO = 10; // Numero de elementos en el arregLo
// Imprime hasta num_eLementos de un arregLo
void imprimirArreglo(array<int, TAMANIO> &arr, int num_elementos) { 
	for (int i = 0; i < arr.size() && i < num_elementos; i++) { 
		cout << arr[i] << endl;
	}
}
int main() {
	array<int, TAMANIO> miArreglo;
	for (int i = 0; i < TAMANIO; i++) { 
		cin >> miArreglo[i];
	}
	cout << "Cantidad de elementos: " << miArreglo.size() << endl;
	cout << "Primeros 10 elementos: " << endl; 
	imprimirArreglo(miArreglo, 10);
	return 0;
}

