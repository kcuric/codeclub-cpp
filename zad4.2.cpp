#include <iostream>

int main()
{
    int polje[4] = {5, 10, 15, 20};
    for(int i = 0; i < 4; i++)
    {
        std::cout << polje[i] << " -> " << &polje[i] << std::endl;
    }
    return 0;
}
