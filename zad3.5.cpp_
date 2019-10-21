/*

C++ radionica, zima 2018/2019
29.12.2018. - DAN 3
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 3.5.

*/

#include <iostream>
#include <cstdlib> //stdlib.h u C
#include <time.h>

int main()
{
    srand(time(NULL));
    int pokusaj;
    int generirani_broj = rand() % 21;

    int broj_pokusaja = 5;
    while(broj_pokusaja > 0)
    {
        std::cin >> pokusaj;
        if(pokusaj == generirani_broj)
        {
            std::cout << "Pogodio si!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Pokusaj ponovno!" << std::endl;
        }
        broj_pokusaja--;
    }

    if(broj_pokusaja == 0)
    {
        std::cout << "Nisi pogodio! Vise srece drugi put! Broj koji je bio generiran je: " << generirani_broj << std::endl;
    }
    
    return 0;
}