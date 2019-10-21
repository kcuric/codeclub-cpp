/*

C++ radionica, zima 2018/2019
28.12.2018. - DAN 2
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 2.2.

*/

#include <iostream>

int main()
{
    int polje[5];
    int temp;
    std::cin >> temp;

    for(int i = 0; i <= 4; i++)
    {
        polje[i] = temp;
        temp *= polje[0];
    }

    for(int i = 0; i <= 4; i++)
    {
        std::cout << polje[i] << std::endl;
    }

    return 0;
}
