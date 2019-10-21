/*
    Korisnik u polje unosi 5 brojeva u POLJE dimenzije 5! 
    Izradi funkciju 'pomnozi' koja pomnoži tih pet brojeva.
    Izradi funkciju 'ispisi' koja ispiše umnožak dobiven u funkciji 'pomnozi'.
*/

#include <iostream>

void ispisi(int broj)
{
    std::cout << "Umnozak je: " << broj << std::endl;
}

int pomnozi(int brojevi[]){
    int umnozak = 1;
    for(int i = 0; i < 5; i++)
    {
        umnozak = brojevi[i] * umnozak;
    }
    return umnozak;
}

int main()
{   
    int lista_brojeva[5];
    for(int i = 0; i < 5; i++)
    {
        std::cout << "Upisi broj: ";
        std::cin >> lista_brojeva[i];
    }
    ispisi(pomnozi(lista_brojeva));
    return 0;
}