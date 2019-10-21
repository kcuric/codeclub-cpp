/*

C++ radionica, zima 2018/2019
29.12.2018. - DAN 3
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 3.2.

*/

#include <iostream>
#include <iomanip> // sadrži funkciju setprecision
#include <math.h> // sadrži funkciju pow()

#define PI 3.14159 //definiramo konstantu, ovo se moglo implementirati i drugačije, no čisto da vidite nešto novo

int main()
{
    float podaci[3];

    std::cout << "Unesi radijus: "; std::cin >> podaci[0];
    podaci[1] = 2 * PI * podaci[0];
    podaci[2] = PI * pow(podaci[0], 2);

    for(int i = 0; i < 3; i++)
    {
        std::cout << std::setprecision(4) << podaci[i] << std::endl;
    }
    
    return 0;
}