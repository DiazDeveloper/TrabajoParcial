#pragma once
#include "EscenarioInicio.h"
#include "PersonajePrincipal.h"
#include "MenuDeInicio.h"


class Juego


{
private:

	EscenarioInicio* escenario = new EscenarioInicio;
	PersonajePrincipal* personaje = new PersonajePrincipal;
	MenuDeInicio* menu = new MenuDeInicio;
	
public:

	void IniciarJuego()
	{
		Console::SetWindowSize(150, 50); 
		Console::CursorVisible = false;

		menu->ImprimirLogo(); 		
        ProcesarMenu();

        system("cls");  
		escenario->DibujarEscenario(); 
		personaje->InicializarPersonaje(); 
		

	}

    void ProcesarMenu() {

        bool IniciarJuego = true;
        while (IniciarJuego) {

            menu->MenuOpciones(); 

            char opcion = _getch(); 

            switch (opcion) {
            case '1': 
                IniciarJuego = false;  
                break;
            case '2':  
                system("cls");  
                menu->MostrarInstrucciones();
                _getch(); 
                break;
            case '3': 
                system("cls");
                menu->MostrarCreditos();
                _getch(); 
                system("cls");  
                break;
            }
        }
    }


};

