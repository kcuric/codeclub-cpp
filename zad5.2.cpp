#include <iostream>

int potenciraj(int baza, int eksponent)
{
    int rezultat = 1;
    for(int i = 0; i < eksponent; i++)
    {
        rezultat = rezultat * baza;
    }

    return rezultat;
}

int main()
{
    int baza, eksponent;
    std::cin >> baza >> eksponent;
    std::cout << potenciraj(baza, eksponent) << std::endl;
    return 0;
}