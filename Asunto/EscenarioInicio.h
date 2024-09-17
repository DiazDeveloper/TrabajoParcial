#pragma once
#include <iostream>
#include <conio.h>
using namespace std;
#using <system.drawing.dll>
using namespace System;
using namespace System::Drawing;

class EscenarioInicio
{
private:

    int Alto = 50;
    int Ancho = 150;
    int AnchoCuadradosInteriores = 40;
    int AltoCuadradosInteriores = 7;

    Rectangle rectanguloSuperiorIzquierdo;
    Rectangle rectanguloSuperiorDerecho;
    Rectangle rectanguloInferiorIzquierdo;
    Rectangle rectanguloInferiorDerecho;

    Rectangle ZonaTepeoIzquierda;
    Rectangle ZonaTepeoArriba;
    Rectangle ZonaTepeoDerecha; 

public:

    EscenarioInicio() {

        // Zonas de tepeo
        ZonaTepeoIzquierda = Rectangle(13, 20, 6, 3);
        ZonaTepeoArriba = Rectangle(73, 5, 6, 3);
        ZonaTepeoDerecha = Rectangle(132, 20, 6, 3);

        // Cuadrados interiores
        rectanguloSuperiorIzquierdo = Rectangle(10, 5, AnchoCuadradosInteriores, AltoCuadradosInteriores);
        rectanguloSuperiorDerecho = Rectangle(100, 5, AnchoCuadradosInteriores, AltoCuadradosInteriores);
        rectanguloInferiorIzquierdo = Rectangle(10, 30, AnchoCuadradosInteriores, AltoCuadradosInteriores);
        rectanguloInferiorDerecho = Rectangle(100, 30, AnchoCuadradosInteriores, AltoCuadradosInteriores);

    }

    void DibujarCuadradoInterior(int posX, int posY)
    {

        Console::SetCursorPosition(posX, posY);
        cout << "****************************************";

        for (int i = 1; i < AltoCuadradosInteriores - 1; i++)
        {
            Console::SetCursorPosition(posX, posY + i);
            cout << "*                                      *";
        }

        Console::SetCursorPosition(posX, posY + AltoCuadradosInteriores - 1);
        cout << "****************************************";
    }

    void DibujarZonaDeTepeo(int posX, int posY)
    {

        Console::SetCursorPosition(posX, posY);
        cout << "******";
        Console::SetCursorPosition(posX, posY + 1);
        cout << "******";
        Console::SetCursorPosition(posX, posY + 2);
        cout << "******";

    }

    void DibujarEscenario() {

        Console::SetWindowSize(Ancho, Alto);

        DibujarCuadradoInterior(10, 5);     // Cuadrado superior izquierdo
        DibujarCuadradoInterior(100, 5);    // Cuadrado superior derecho
        DibujarCuadradoInterior(10, 30);    // Cuadrado inferior izquierdo
        DibujarCuadradoInterior(100, 30);   // Cuadrado inferior derecho

        DibujarZonaDeTepeo(13, 20);  // Izquierda -> Escenario 1
        DibujarZonaDeTepeo(73, 5);   // Arriba    -> Escenario 3
        DibujarZonaDeTepeo(132, 20); // Derecha   -> Escenario 2
    }

    void BorrarEscenario()
    {
        system("cls");
    }

    void DibujarTemporizador(int TiempoRestante)
    {
        int Tiempo = TiempoRestante;

        for (int i = 0; i < TiempoRestante; i++)
        {
            Console::SetCursorPosition(110, 45);
            cout << "Tiempo restante: " << Tiempo;
            Tiempo--;
            _sleep(1000);
        }
    }


    bool VerificarColisionConCuadradosInteriores(Rectangle personaje) {
    
        if (personaje.IntersectsWith(rectanguloSuperiorIzquierdo) ||
            personaje.IntersectsWith(rectanguloSuperiorDerecho) ||
            personaje.IntersectsWith(rectanguloInferiorIzquierdo) ||
            personaje.IntersectsWith(rectanguloInferiorDerecho)) {
            return true; 
        }
        return false; 
    }

    bool EnZonaTepeoIzquierda(Rectangle personaje) {
        return personaje.IntersectsWith(ZonaTepeoIzquierda);
    }

    bool EnZonaTepeoArriba(Rectangle personaje) {
        return personaje.IntersectsWith(ZonaTepeoArriba);
    }
        
    bool EnZonaTepeoDerecha(Rectangle personaje) {
        return personaje.IntersectsWith(ZonaTepeoDerecha);
    }

    void AccionZonaTepeoIzquierda() 
    {
        cout << "Teletransportado a Escenario 1 (Izquierda)" << endl;
    }

    void AccionZonaTepeoArriba() {
        cout << "Teletransportado a Escenario 3 (Arriba)" << endl;
    }

    void AccionZonaTepeoDerecha() {
        cout << "Teletransportado a Escenario 2 (Derecha)" << endl;
    }

};

