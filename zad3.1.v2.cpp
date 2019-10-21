/*

C++ radionica, zima 2018/2019
29.12.2018. - DAN 3
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 3.1. v2

*/

#include <iostream>
#include <string>
#include <bits/stdc++.h> 

int main()
{
    std::string rijec, rijec_obrnuto;

    std::cin >> rijec_obrnuto;
    rijec = rijec_obrnuto;
    reverse(rijec_obrnuto.begin(), rijec_obrnuto.end());

    if(rijec == rijec_obrnuto)
    {
        std::cout << "Rijec je palindrom!" << std::endl;
    }
    else
    {
        std::cout << "Rijec nije palindrom!" << std::endl;
    }

    
    return 0;
}