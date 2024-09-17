#pragma once
#include "EscenarioInicio.h"
#include <iostream>
using namespace std;

class Escenario1 : public EscenarioInicio {
public:

    Escenario1()
    {

    }

    void MostrarEscenario1() 
    
    {
        Console::SetCursorPosition(30, 30);
        cout << "Escenario 1" << endl;
    }
};