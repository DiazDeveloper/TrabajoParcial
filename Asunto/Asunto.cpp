#include "pch.h"
#include "Juego.h"
using namespace System;

int main()
{
    Juego* juego = new Juego;

    juego->IniciarJuego();
    _getch();
}
