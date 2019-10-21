/*
    Korisnik upisuje koliko (n) brojeva zeli unijeti u polje.
    Korisnik u polje dimenzije n unosi n brojeva! 
    Izradi funkciju 'pomnozi' koja pomnoži tih n brojeva.
    Izradi funkciju 'ispisi' koja ispiše umnožak dobiven u funkciji 'pomnozi'.
*/

#include <iostream>

void ispisi(int broj)
{
    std::cout << "Umnozak je: " << broj << std::endl;
}

int pomnozi(int brojevi[], int broj_brojeva){
    int umnozak = 1;
    for(int i = 0; i < broj_brojeva; i++)
    {
        umnozak = brojevi[i] * umnozak;
    }
    return umnozak;
}

int main()
{   
    int broj_brojeva;
    std::cout << "Koliko brojeva zelis upisati u polje?: ";
    std::cin >> broj_brojeva;

    int lista_brojeva[broj_brojeva];
    for(int i = 0; i < broj_brojeva; i++)
    {
        std::cout << "Upisi broj: ";
        std::cin >> lista_brojeva[i];
    }

    ispisi(pomnozi(lista_brojeva, broj_brojeva));
    return 0;
}