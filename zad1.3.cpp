/*

C++ radionica, zima 2018/2019
27.12.2018. - DAN 1
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 1.3.

*/

#include <iostream>

int main()
{
    int prvi_broj, drugi_broj;
    std::cin >> prvi_broj;
    std::cin >> drugi_broj;
    std::cout << prvi_broj + drugi_broj << std::endl;
    //std::cout << prvi_broj - drugi_broj << std::endl;
    //std::cout << prvi_broj * drugi_broj << std::endl;

    /*
    Kod diljenja zamjetite da program zaokružuje rezultat.
    Tome je tako jer "radimo" s  cjelobrojnim varijablama
    koje nemaju pomični zarez. Ukoliko želite probati 
    dijeljenje bez zaokruživanja deklarirajte varijable s
    tipom podataka float. 
    */

    //std::cout << prvi_broj / drugi_broj << std::endl;
    return 0;
}