/*

C++ radionica, zima 2018/2019
27.12.2018. - DAN 1
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 1.5.

*/

#include <iostream>

int main()
{
    int prvi_broj, drugi_broj;
    std::cin >> prvi_broj;
    std::cin >> drugi_broj;

    if(prvi_broj > drugi_broj)
    {
        std::cout << "Prvi broj je veci!" << std::endl;
    }
    else if(drugi_broj > prvi_broj)
    {
        std::cout << "Drugi broj je veci!" << std::endl;
    }
    else
    {
        std::cout << "Brojevi su jednaki!" << std::endl;
    }

    return 0;
}