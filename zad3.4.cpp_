/*

C++ radionica, zima 2018/2019
29.12.2018. - DAN 3
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 3.4.

*/

#include <iostream>

bool provjeri_parnost(int x)
{
    if(x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int broj;
    std::cout << "Unesi broj: "; std::cin >> broj;

    for(int i = 2; i < broj; i++)
    {
        if(provjeri_parnost(i))
        {
            std::cout << i << " ";
        }
    }
    
    return 0;
}