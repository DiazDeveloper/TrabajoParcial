#pragma once
#include "pch.h"
#include <iostream>
using namespace std;
using namespace System;
#define ALTO 50
#define ANCHO 150

class MenuDeInicio

{
public:

	void ImprimirLogo()
	{
		Console::ForegroundColor = ConsoleColor::White; 
		Console::SetCursorPosition(45, 11); cout << "                             **                                ";
		Console::SetCursorPosition(45, 12); cout << "                            ***                                ";
		Console::SetCursorPosition(45, 13); cout << "                          ******                               ";
		Console::SetCursorPosition(45, 14); cout << "                         :******                               ";
		Console::SetCursorPosition(45, 15); cout << "          -              ********                       =      ";
		Console::SetCursorPosition(45, 16); cout << "         *              **********                       *     ";
		Console::SetCursorPosition(45, 17); cout << "        *+              ************                     +*    ";
		Console::SetCursorPosition(45, 18); cout << "        *+              ************                     +*    ";
		Console::SetCursorPosition(45, 19); cout << "       **               **************                    **   ";
		Console::SetCursorPosition(45, 20); cout << "      ***                ***************                  ***  ";
		Console::SetCursorPosition(45, 21); cout << "     ****                 ***************                 **** ";
		Console::SetCursorPosition(45, 22); cout << "     ****                  ***************                **** ";
		Console::SetCursorPosition(45, 23); cout << "    =****=                  **************               :****+";
		Console::SetCursorPosition(45, 24); cout << "    ******+                     ***********             -******";
		Console::SetCursorPosition(45, 25); cout << "    ******+                     ***********             -******";
		Console::SetCursorPosition(45, 26); cout << "    *******                       ********-             *******";
		Console::SetCursorPosition(45, 27); cout << "     ********+                     +*****            +******** ";
		Console::SetCursorPosition(45, 28); cout << "      *********                     ****            *********  ";
		Console::SetCursorPosition(45, 29); cout << "      .**********                   **-           **********-  ";
		Console::SetCursorPosition(45, 30); cout << "       =************               =:          ************=   ";
		Console::SetCursorPosition(45, 31); cout << "         ***************                   +**************.    ";
		Console::SetCursorPosition(45, 32); cout << "          *********************+++*+*********************      ";
		Console::SetCursorPosition(45, 33); cout << "           :*******************************************-       ";
		Console::SetCursorPosition(45, 34); cout << "             -***************************************-         ";
		Console::SetCursorPosition(45, 35); cout << "                ***********************************            ";
		Console::SetCursorPosition(45, 36); cout << "                   *****************************               ";
		Console::SetCursorPosition(45, 37); cout << "                       *********************                   ";
		_sleep(4000);  
		system("cls");  
	}

	void MenuOpciones()
	{
		Console::ForegroundColor = ConsoleColor::DarkGreen; 
		Console::SetCursorPosition(12, 13); cout << "  .=+++++++-      .=+++=:       :=+**+=:                           ==        =-    .=+++++++:   .=+++==:         :=+**+=:      ";
		Console::SetCursorPosition(12, 14); cout << "  :@*------:    :#%+---=#%-   :#%+-::-+@#:                         ##        %#    -@+------:   -@+--=+%%-     :#%+-::-+%#:    "; 
		Console::SetCursorPosition(12, 15); cout << "  :@-          :@*       ..  -@+       .#%.                        ##        %#    -@:          -@-     #@    -@+       .#@:   "; 
		Console::SetCursorPosition(12, 16); cout << "  :@-          %#            %#         .@*                        ##        %#    -@:          -@-     *@.   %#         .@#   "; 
		Console::SetCursorPosition(12, 17); cout << "  :@-         -@-           -@-          #@                        ##        %#    -@:          -@-    =@+   :@=          *@   ";  
		Console::SetCursorPosition(12, 18); cout << "  :@%%%%%%+   =@:           =@:          *@.                       #@%%%%%%%%@#    -@%%%%%%=    -@%%%%@*:    =@-          +@.  "; 
		Console::SetCursorPosition(12, 19); cout << "  :@-         =@:           =@-          *@        =======         ##        %#    -@:          -@-  :+@=    -@-          *@.  ";  
		Console::SetCursorPosition(12, 20); cout << "  :@-         :@+           :@+          %#        =======         ##        %#    -@:          -@-    =@:   .@+          %#   "; 
		Console::SetCursorPosition(12, 21); cout << "  :@-          *@:           #@:        *@:                        ##        %#    -@:          -@-     #%    *@:        +@:   ";  
		Console::SetCursorPosition(12, 22); cout << "  :@=           *@+:   .-#=  .#@=.   .-#%-                         ##        %#    -@-          -@-     :@+   .#@+.    -#%-    "; 
		Console::SetCursorPosition(12, 23); cout << "  .#%%%%%%%*     :+#%%%#+-     -*#%%%%*=                           **        #*    :#%%%%%%%+   :%:      +%.    :*#%%%%*=.     ";  

		Console::ForegroundColor = ConsoleColor::White; 
		Console::SetCursorPosition(10, 28); cout << "      -------------------------------------------------------------------------------------------------------------------      "; 
		Console::SetCursorPosition(10, 29); cout << "      -------------------------------------------------------------------------------------------------------------------      ";
		Console::SetCursorPosition(10, 33); cout << "                                                        [1] PLAY                                                               ";  
		Console::SetCursorPosition(10, 34); cout << "                                                        [2] INSTRUCCIONES                                                      "; 
		Console::SetCursorPosition(10, 35); cout << "                                                        [3] CREDITOS                                                           "; 

	}

	void MostrarInstrucciones()
	{
		Console::SetCursorPosition(50, 23); cout << " INSTRUCCION 1: Me dio flojera terminar las instrucciones, luego lo avanzo ";
	}

	void MostrarCreditos()
	{
		Console::SetCursorPosition(60, 23); cout << "  - SEBASTIAN DIAZ MENDOZA  ";
		Console::SetCursorPosition(60, 24); cout << "  - PIERO ANTONIO AGUILAR  ";
		Console::SetCursorPosition(60, 25); cout << "  - ADRIAN ARMESTAR FELIPA  ";
	}

};

