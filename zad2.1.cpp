/*

C++ radionica, zima 2018/2019
28.12.2018. - DAN 2
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 2.1.

*/
#include <iostream>

int main()
{
    int polje_brojeva[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++)
    {
        std::cout << &polje_brojeva[i] << std::endl;
    }
    return 0;
}