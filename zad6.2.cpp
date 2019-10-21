/*
    Korisnik upiše tekst. Program broji sve pojave velikih slova (npr. A,D,T,H ...).
    Na kraju program ispiše koliko je velikih slova bilo u tekstu.
*/

#include <iostream>

int main()
{
    char text[1000];
    int brojac = 0;
    std::cin.getline(text, 1000);
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(int(text[i]) >= 65 and int(text[i]) <= 90)
        {
            brojac++;
        }
    }
    std::cout << brojac << std::endl;
    return 0;
}