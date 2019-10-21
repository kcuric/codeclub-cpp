#include <iostream>

int main()
{
    char text[1000];
    std::cin.getline(text, 1000);

    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i] == 'a'){
            text[i] = 'b';
        }
        else if(text[i] == 'A')
        {
            text[i] = 'B';
        }
    }

    std::cout << text;
    return 0;
}