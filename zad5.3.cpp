#include <iostream>

int prebroji_slova(char *text)
{
    int brojac = 0;
    for(int i = 0; text[i] != '\0'; i++)
    {
        brojac++;
    }
    return brojac;
}

int main()
{   
    char text[100];
    std::cin.getline(text, 100);
    std::cout << prebroji_slova(text) << std::endl;
    return 0;
}