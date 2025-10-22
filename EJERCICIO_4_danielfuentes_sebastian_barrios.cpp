/*
    Realiece un programa que permita leer un numero y diga si es perfecto. Un numero perfecto es un numero entero positivo que es igual a
    la suma de sus divisores, excluyendose a si mismo. ej 6 = 1 + 2 + 3
*/
#include <iostream>
#include <conio.h> // Para getch()


int main(void)
{
    char option = 'Y';
    do
    {
        int number = 0;
        std::cout << "Introduce el numero para verificar si es perfecto: ";
        std::cin >> number;

        int sum = 0;
        for(int divisor = 1; divisor < number; divisor ++) if(number % divisor == 0 ) sum += divisor;
        
        if(sum == number) std::cout << "El numero " << number << " es perfecto" << std::endl;
        else std::cout << "El numero " << number << " no es perfecto" << std::endl;

        std::cout << "Desea continuar? (Y/N): " << std::endl;
        option = getch();
    } while (option == 'Y' || option == 'y');

    return 1;
}