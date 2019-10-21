#include <iostream>

void uvecaj_brojeve(int *brojevi)
{
    for (int i = 0; i < 5; i++)
    {
        brojevi[i] = brojevi[i] + 1;
    }
}

int main(){
    int brojevi[5] = {1,2,3,4,5};
    uvecaj_brojeve(brojevi);
    for(int i = 0; i < 5; i++)
    {
        std::cout << brojevi[i] << " ";
    }
    return 0;
}