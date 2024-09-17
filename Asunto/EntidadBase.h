#pragma once
#include "EscenarioInicio.h"
#include <iostream>
#include <conio.h>
#using <system.drawing.dll>

#define ALTO 50
#define ANCHO 150

using namespace System;
using namespace std;
using namespace System::Drawing;

class EntidadBase
{
protected:
	int x, y, ancho, alto, Dx, Dy;

public:

	EntidadBase()
	{
		Dx = Dy = 1;
	}

	virtual void dibujar() {}

	void borrar()
	{
		for (int i = 0; i < alto; i++)
		{
			for (int j = 0; j < ancho; j++)
			{
				Console::SetCursorPosition(x + j, y + i);
				cout << " ";
			}
		}
	}
	virtual void mover() {}

	Rectangle obtenerRectangulo()
	{
		return Rectangle(x, y, ancho, alto);
	}

	int getX()
	{
		return x;
	}

	int getY()
	{
		return y;
	}

};

