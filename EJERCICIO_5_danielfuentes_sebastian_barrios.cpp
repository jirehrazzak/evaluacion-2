/*Realice un programa que calcule todos los numeros primos en un rango ingresado por el usuario*/
#include <iostream>
#include <CMATH>
#include <conio.h> // Para getch()

int main(void)
{
    char option = 'Y';
    do
    {
        int lower_limit = 0, upper_limit;
        std::cout << "Introduce el limite inferior del rango: ";
        std::cin >> lower_limit;
        std::cout << "Introduce el limite superior del rango: ";
        std::cin >> upper_limit;

        for(int number = lower_limit; number <= upper_limit; number ++)
        {
            //Verificar si es primo;
            bool isPrime = true;
            for(int divisor = 2; divisor <= sqrt(number); divisor ++)
            {
                //std::cout << number % divisor << std::endl;
                //std::cout << "Numero: " << number << " Divisor: " << divisor << std::endl;
                //std::cout << "Resto de la division" << number % divisor << std::endl;
                if(number % divisor == 0) isPrime = false;
            }
            if(isPrime) 
            {
                std::cout << "El numero " << number << " es primo" << std::endl;
            }
        }
        std::cout << "Desea continuar? (Y/N): " << std::endl;
        option = getch();
    } while (option == 'Y' || option == 'y');
    

    return 1;
}