/*
    Escriba un programa que permita generar tablas de multiplicar a partir de un rango ( n hasta n ) de multiplicandos y un rango (n hasta n)
    de multiplicadores ingresados por el usuario, Ej si el usuario ingresa (1, 7) y (2, 10) en pantalla deberian mostrarse las tablas del 
    1 al 7 empezando del 2 hasta el 10 en sus multiplicadores (1x2, 1x3, 1x4, 1x5, 1x5, ...).
*/
#include <iostream>
#include <conio.h> // Para getch()

int main(void)
{
    char option = 'Y';
    do
    {
        int multiplying_upper = 0, multiplying_lower = 0, multipliers_upper = 0, multipliers_lower = 0;
        std::cout << "Introduzca el rango inferior de multiplicandos: ";
        std::cin >> multiplying_lower;
        std::cout << "Introduzca el rango superior de multiplicandos: ";
        std::cin >> multiplying_upper;
        std::cout << "Introduzca el rango inferior de multiplicadores: ";
        std::cin >> multipliers_lower;
        std::cout << "Introduzca el rango superior de multiplicadores: ";
        std::cin >> multipliers_upper;

        for(int multiplying = multiplying_lower; multiplying <= multiplying_upper; multiplying ++)
        {
            std::cout << std::endl << "Tabla del " << multiplying << std::endl;
            for(int multiplier = multipliers_lower; multiplier <= multipliers_upper; multiplier ++)
            {
                std::cout << multiplying << "x" << multiplier << " = " << multiplying*multiplier << std::endl;
            }
        }

        std::cout << "Desea continuar? (Y/N): " << std::endl;
        option = getch();
    } while (option == 'Y' || option == 'y');

    return 1;
}