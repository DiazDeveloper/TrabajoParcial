#pragma once
#include "EntidadBase.h"
#include "EscenarioInicio.h"

class PersonajePrincipal : public EntidadBase
{
public:

    EscenarioInicio* escenarioBase = new EscenarioInicio; 
    Rectangle BoxPersonaje;

    PersonajePrincipal() : EntidadBase()
    {
        alto = 2;
        ancho = 4;
        Dx = 2;
        Dy = 2;
        x = (ANCHO - ancho) / 2;
        y = (ALTO - alto) / 2;

        BoxPersonaje = Rectangle (x, y, ancho, alto);    
    }

    void dibujarPersonaje()
    {
        Console::ForegroundColor = ConsoleColor::DarkMagenta;
        Console::SetCursorPosition(x, y);      cout << "-**-";
        Console::SetCursorPosition(x, y + 1);  cout << " || ";

    }

    bool EsMovimientoValido(int nuevoX, int nuevoY)
    {

        if (nuevoX >= Console::WindowLeft && nuevoX + ancho <= Console::WindowWidth &&
            nuevoY >= Console::WindowTop && nuevoY + alto <= Console::WindowHeight)
        {

            Rectangle nuevoHitbox = Rectangle(nuevoX, nuevoY, ancho, alto);
            return !escenarioBase->VerificarColisionConCuadradosInteriores(nuevoHitbox);
        }
        return false; 
    }

    void VerificarTepeo(char tecla)
    {
        if (toupper(tecla) == 'M') {
  
            if (escenarioBase->EnZonaTepeoIzquierda(BoxPersonaje)) {
                system("cls");
                // Funcion del Mundo 1
                escenarioBase->AccionZonaTepeoIzquierda();
            }

            if (escenarioBase->EnZonaTepeoDerecha(BoxPersonaje)) {
                system("cls");
                // Funcion del Mundo 2
                escenarioBase->AccionZonaTepeoDerecha();
            }

            if (escenarioBase->EnZonaTepeoArriba(BoxPersonaje)) {
                system("cls");
                // Funcion del Mundo 3
                escenarioBase->AccionZonaTepeoArriba();
            }

        }
    }

    void MoverPersonaje()
    {
        char tecla;
        if (_kbhit()) {
            tecla = toupper(getch());

            if (tecla == 'W' && EsMovimientoValido(x, y - Dy)) { 
                y -= Dy;
            }

            if (tecla == 'S' && EsMovimientoValido(x, y + Dy)) { 
                y += Dy; 
            }

            if (tecla == 'A' && EsMovimientoValido(x - Dx, y)) { 
                x -= Dx;
            }

            if (tecla == 'D' && EsMovimientoValido(x + Dx, y)) { 
                x += Dx;
            }

            BoxPersonaje.X = x; 
            BoxPersonaje.Y = y; 
            
            VerificarTepeo(tecla);

        }
    }

    void InicializarPersonaje()
    {
        while (true)
        {
            borrar();
            MoverPersonaje();
            dibujarPersonaje(); 
            _sleep(100);
        }
       
    }

};

