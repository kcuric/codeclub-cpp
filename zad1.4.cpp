/*

C++ radionica, zima 2018/2019
27.12.2018. - DAN 1
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 1.4.

*/

#include <iostream>

int main()
{
    short godina_rodjenja;
    std::cin >> godina_rodjenja;
    short broj_godina = 2018 - godina_rodjenja;
    
    if(broj_godina >= 18)
    {
        std::cout << broj_godina << ", korisnik je punoljetan!" << std::endl;
    }
    else
    {
        std::cout << broj_godina << ", korisnik nije punoljetan!" << std::endl;
    } 
    return 0;
}