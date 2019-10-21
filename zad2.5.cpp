/*

C++ radionica, zima 2018/2019
28.12.2018. - DAN 2
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 2.5.

*/

#include <iostream>

void sortiraj(int polje_brojeva[])
{
    int temp;
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
}

void ispisi_polje(int polje_brojeva[])
{
    for(int i = 0; i < 5; i++)
    {
        std::cout << polje_brojeva[i] << " ";
    }
}

int main()
{
    int polje_brojeva[5];

    for(int i = 0; i < 5; i++)
    {   
        std::cin >> polje_brojeva[i];
    }

    sortiraj(polje_brojeva);
    ispisi_polje(polje_brojeva);
    
    return 0;
}