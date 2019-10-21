/*

C++ radionica, zima 2018/2019
29.12.2018. - DAN 3
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 3.3.

*/

#include <iostream>
#include <cmath>

float hipotenuza(float a, float b)
{
    return sqrt(pow(a, 2) + pow(b, 2));
}

float opseg(float a, float b, float c)
{
    return a + b + c;
}

int main()
{
    float a, b;
    std::cout << "Unesi duzinu katete a: "; std::cin >> a;
    std::cout << "Unesi duzinu katete b: "; std::cin >> b;
    std::cout << hipotenuza(a, b) << " " << opseg(a, b, hipotenuza(a, b)) << std::endl;
    
    return 0;
}