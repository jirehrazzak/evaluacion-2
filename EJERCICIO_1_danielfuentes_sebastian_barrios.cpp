/* 
        Escriba un programa que solicite un numero binario (compuesto solo por digitos 0 y 1 ) como una cadena de 
    texto y lo convierta a su equivalente decimal (Base 10).
*/
#define _GLIBCXX_USE_CXX11_ABI 0

#include <iostream>
#include <string>
#include <CMATH>
#include <conio.h> // Para getch()

int main(void)
{
    char option = 'Y';
    do
    {
        std::string binary_text;
        std::cout << "Introduce el numero binario (un maximo de 64 digitos): " << std::endl;;

        std::getline(std::cin, binary_text);

        int decimal_number = 0;

        for(int i = 0; i < binary_text.length(); i ++)
        {
            if(binary_text[i] != '0' && binary_text[i] != '1') 
            {
                std::cout << "El numero no es binario." << std::endl;
                return 0;
            }
            
            int number = 0;
            if(binary_text[i] == '1') number = 1;

            if(number == 0) continue;

            decimal_number += number * pow(2, i);
        }
        std::cout << std::endl << "Numero decimal: " << decimal_number << std::endl;;

        std::cout << "Desea volver a calcular? (Y/N): " << std::endl;
        option = getch();
    } while (option == 'Y' || option == 'y');
    
    return 1;
}