/*
    Korisnik unosi tekst (max. 1000 znakova). Program broji sve pojave slova 'b'. 
    Program zatim ispiše koliko je tih pojava bilo.
*/

#include <iostream>

int main()
{
    char text[1000];
    int brojac = 0;
    std::cin.getline(text, 1000);
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i] == 'b')
        {
            brojac++;
        }
    }
    std::cout << brojac << std::endl;
    return 0;
}