/*

C++ radionica, zima 2018/2019
27.12.2018. - DAN 1
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 1.6.

*/

#include <iostream>
#include <string>

int main()
{
    bool kruh, mlijeko;
    std::string odgovor;

    std::cout << "Jesi li kupio kruh?" << std::endl;
    std::cin >> odgovor;
    
    if (odgovor == "da")
    {
        kruh = true;
    }
    else 
    {
        kruh = false;
    }

    std::cout << "Jesi li kupio mlijeko?" << std::endl;
    std::cin >> odgovor;
    
    if (odgovor == "da")
    {
        mlijeko = true;
    }
    else
    {
        mlijeko = false;
    }

    if (kruh && mlijeko)
    {
        std::cout << "Super!" << std::endl;
    }
    else
    {
        std::cout << "Vrati se u trgovinu!" << std::endl;
    }

    return 0;
}