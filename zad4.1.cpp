#include <iostream>

int main()
{
    int broj;
    std::cin >> broj;
    for(int i = 1; i <= broj * broj; i++)
    {
        if(i % broj == 0)
        {
            std::cout << i << " ";
        }
    }
    return 0;
}
