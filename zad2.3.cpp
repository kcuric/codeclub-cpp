/*

C++ radionica, zima 2018/2019
28.12.2018. - DAN 2
Literatura (za one koji žele znati više): 
-> "Demistificirani C++; Julijan Šribar i Boris Motik; Element"
-----------------------------

ZADATAK 2.3.

*/

#include <iostream>

int binom(int a, int b, int c, int x)
{
    return a*(x*x) + b * x + c;
}

int main()
{
    int a, b, c, x;
    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;
    std::cout << "c = "; std::cin >> c;
    std::cout << "x = "; std::cin >> x;
    std::cout << binom(a,b,c,x) << std::endl;
    return 0;
}