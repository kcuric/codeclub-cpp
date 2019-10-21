/*

C++ radionica, zima 2018/2019
27.12.2018. - DAN 1
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 1.2.

*/

#include <iostream>
#include <string>

int main()
{
    std::string ime;
    std::string prezime;
    std::cin >> ime;
    std::cin >> prezime;
    std::cout << "Bok " << ime << " " << prezime << "!" << std::endl;
    return 0;
}