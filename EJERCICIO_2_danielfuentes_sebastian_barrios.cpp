/*
    Programa que emplee instrucciones repetitivas para determinar el numero de vehiculos cuyo precio de venta sea menor de 25.000, entre 75.000 y 120.000 y mayores de 
    120.0000 de un total N de ventas realizadas mensualmente ingresadas por teclado.
*/
#include <iostream>
#include <conio.h> // Para getch()

int main(void)
{
    char option = 'Y';
    do
    {
        int n = 0;
        std::cout << "Introduce la cantidad de vehiculos vendidos: "<< std::endl;
        std::cin >> n;

        int firstRange = 0; //El primer rango es para precios menores a 25.000
        int secondRange = 0; //El segundo rango es para precios entre 75.000 y 120.000
        int thirdRange = 0; //El tercer rango es para precios mayores a 120.000
        int fourdRange = 0; //El cuarto rango es para precios que no se encuentran en ninguno de los rangos anteiores.

        for(int vehicle = 0; vehicle < n; vehicle ++)
        {
            int price = 0;
            std::cout << "Introduce el precio del vehiculo n." << vehicle+1 << std::endl;
            std::cin >> price;

            if(price < 25000) firstRange ++;
            else if(price > 75000 && price < 120000) secondRange ++;
            else if(price > 120000) thirdRange ++;
            else fourdRange ++;
        }

        std::cout << "Hay " << firstRange << " vehiculos que cuestan menos de $25.000"<< std::endl;
        std::cout << "Hay " << secondRange << " vehiculos que cuestan entre $75.000 y $120.000"<< std::endl;
        std::cout << "Hay " << thirdRange << " vehiculos que cuestan mas de $120.000"<< std::endl;
        std::cout << "Hay " << fourdRange << " vehiculos que se encuentran en otro rango de precios."<< std::endl;

        std::cout << "Desea volver a calcular? (Y/N): " << std::endl;
        option = getch();
    } while (option == 'Y' || option == 'y');
    
    return 1;
}