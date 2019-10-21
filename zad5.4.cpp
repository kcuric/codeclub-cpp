#include <iostream>

int main()
{
    char text[100];
    std::cin.getline(text, 100);

    for(int i = 0; text[i] != '\0'; i++)
    {
        if(int(text[i])>=65 && int(text[i])<=90)
        {
            text[i] = char(int(text[i]) + 32);
        }
    }

    std::cout << text << std::endl;
    return 0;
}