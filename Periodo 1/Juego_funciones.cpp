#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

// Prototipos
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std::string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);
void procesarEntradaJugadorLagarto(std::string computadora);
void procesarEntradaJugadorSpock(std::string computadora);

int main(){
	using namespace std;
	
	string movimientoComputadora;
	string movimientoJugador;
	
	movimientoJugador = obtenerMovimientoJugador();
	movimientoComputadora = generarMovimientoComputadora();
	determinarGanador (movimientoComputadora, movimientoJugador);
	
	return 0;
}

//Implementacion

std::string generarMovimientoComputadora(){
	std::string movimiento;
	int numeroAleatorio;
	
	//Genero numero aleatorio
	srand(time(0));
	numeroAleatorio = rand() % 3 + 1;
	
	switch(numeroAleatorio)
	{
	case 1:
		movimiento = "piedra";
		break;
	case 2:
		movimiento = "papel";
		break;
	case 3:
		movimiento = "tijera";
		break;
	case 4:
		movimiento = "lagarto";
		break;
	case 5:
		movimiento = "spock";
		break;
	}
	
	std::cout << "Computadora: " << movimiento << "\n";
	
	return movimiento;
}


std::string obtenerMovimientoJugador(){
	using namespace std;
	string movimiento;
	
	cout << "Autor: Edith Herrera \n piedra, papel, tijera, lagarto o spock (para temrinar el juego escriba salir)?";
	cin >> movimiento;
	
	return movimiento;	
}

void determinarGanador(std::string computadora, std::string jugador){
	if(computadora == jugador){
		std::cout << "Empate!\n";
	}else if(jugador == "piedra"){
		procesarEntradaJugadorPiedra(computadora);
	}else if(jugador == "papel"){
		procesarEntradaJugadorPapel(computadora);
	}else if(jugador == "tijera"){
		procesarEntradaJugadorTijera(computadora);
	}else if(jugador == "spock"){
		procesarEntradaJugadorSpock(computadora);
	}else if(jugador == "lagarto"){
		procesarEntradaJugadorLagarto(computadora);
	}else{
		std::cout << "Entrada no valida. Ingrese piedra, papel o tijera. \n";
	}
}

void procesarEntradaJugadorPiedra(std::string computadora){
	if(computadora == "papel"){
		std::cout << "La computadora gana. Papel cubre piedra.\n";
	}
	else if(computadora == "tijera"){
		std::cout << "Usted gana. Piedra rompe tijera.\n";
	}
	else if(computadora == "spock"){
		std::cout << "La computadora gana. Spock desintegra la piedra.\n";
	}
	else if(computadora == "lagarto"){
		std::cout << "Usted gana. Piedra aplasta al lagarto.\n";
	}
}

void procesarEntradaJugadorPapel(std::string computadora){
	if(computadora == "piedra"){
		std::cout << "Usted gana. Papel cubre piedra.\n";
	}
	else if(computadora == "tijera"){
		std::cout << "La computadora gana. Tijera corta papel.\n";
	}
	else if(computadora == "spock"){
		std::cout << "Usted gana. El papel desaprueba a spock.\n";
	}
	else if(computadora == "lagarto"){
		std::cout << "La computadora gana. Lagarto debora el papel.\n";
	}
}

void procesarEntradaJugadorTijera(std::string computadora){
	if(computadora == "piedra"){
		std::cout << "Usted gana. Piedra aplasta las tijeras .\n";
	}
	else if(computadora == "papel"){
		std::cout << "La computadora gana. Tijera corta papel.\n";
	}
	else if(computadora == "spock"){
		std::cout << "La computadora gana. Spock aplasta las tijeras.\n";
	}
	else if(computadora == "lagarto"){
		std::cout << "Usted gana. Tijera decapita al lagarto.\n";
	}
}

void procesarEntradaJugadorLagarto(std::string computadora){
	if(computadora == "papel"){
		std::cout << "Usted gana. Lagarto debora el papel .\n";
	}
	else if(computadora == "piedra"){
		std::cout << "La computadora gana. Piedra aplasta al lagarto.\n";
	}
	else if(computadora == "spock"){
		std::cout << "Usted gana. Lagarto envenena a spock.\n";
	}
	else if(computadora == "tijera"){
		std::cout << "La computadora gana. Tijera decapita al lagarto.\n";
	}
	
}

void procesarEntradaJugadorSpock(std::string computadora){
	if(computadora == "papel"){
		std::cout << "La computadora gana. papel desaprueba a spock.\n";
	}
	else if(computadora == "piedra"){
		std::cout << "Usted gana. Spock desintegra la piedra.\n";
	}
	else if(computadora == "lagarto"){
		std::cout << "La computadora gana. Lagarto envenena a spock.\n";
	}
	else if(computadora == "tijera"){
		std::cout << "Usted gana. Spock aplasta la tijera.\n";
	}
} 

void procesarEntradaJugadorSalir(std::string computadora){
	
} 
