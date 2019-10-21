/*

C++ radionica, zima 2018/2019
28.12.2018. - DAN 2
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 2.4.

*/

#include <iostream>

int main()
{
    float polje_brojeva[5];

    for(int i = 0; i < 5; i++)
    {   
        std::cin >> polje_brojeva[i];
    }

    float temp;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(polje_brojeva[j] > polje_brojeva[j + 1])
            {
                temp = polje_brojeva[j];
                polje_brojeva[j] = polje_brojeva[j + 1];
                polje_brojeva[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        std::cout << polje_brojeva[i] << " ";
    }

    return 0;
}