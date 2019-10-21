#include <iostream>

int main()
{
    char text[100];
    std::cin.getline(text, 100);

    int max = 0, brojac = 0, prvi_index = 0, zadnji_index;

    for(int i = 0; text[i] != '\0'; i++)
    {

        if(text[i] != ' '){
            brojac++;
        }
        else
        {
            if(brojac > max)
            {
                max = brojac;
                zadnji_index = i;
                prvi_index = zadnji_index - brojac;
            }
            brojac = 0;
        }
    }

    for(int i = prvi_index; i <= zadnji_index; i++)
    {
        std::cout << text[i];
    }
    return 0;
}