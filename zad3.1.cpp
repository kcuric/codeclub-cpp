/*

C++ radionica, zima 2018/2019
29.12.2018. - DAN 3
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 3.1.

*/

#include <iostream>
#include <string>

int main()
{
    std::string rijec;
    std::cin >> rijec;

    int k = rijec.length() - 1;
    bool palindrom = true;
    for (int i = 0; i < rijec.length() / 2; i++)
    { 
        if(rijec[i] != rijec[k]){
            std::cout << "Rijec nije palindrom!" << std::endl;
            palindrom = false;
            break;
        }
        k--;
    }

    if(palindrom)
    {
        std::cout << "Rijec je palindrom!" << std::endl;
    }
    
    return 0;
}