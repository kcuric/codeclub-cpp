/*
    Izradi program koji će biti evidencija ucenika ŠMRCA hehe ..
    Korisnik može ili unijeti novog ucenika ili ispisati postojece
    (sve njihove atribute). Program se izvršava toliko dugo dok korisnik
    ne unese "kraj"; ... BONUS ZADATAK! 
*/

#include <iostream>
#include <string>

struct ucenik
{
    int godine;
    std::string ime;
    std::string omiljeno_pice;
};

void unos(ucenik *svi_ucenici, int zadnji_index)
{
    std::cout << "Ime: "; std::cin >> svi_ucenici[zadnji_index].ime;
    std::cout << "Godine: "; std::cin >> svi_ucenici[zadnji_index].godine;
    std::cout << "Omiljeno pice: "; std::cin >> svi_ucenici[zadnji_index].omiljeno_pice;
}

void ispis(ucenik *svi_ucenici, int zadnji_index)
{
    for(int i = 0; i < zadnji_index; i++)
    {
        std::cout << "======================" << std::endl;
        std::cout << "Ime: " << svi_ucenici[i].ime << std::endl;
        std::cout << "Godine: " << svi_ucenici[i].godine << std::endl;
        std::cout << "Omiljeno pice: " << svi_ucenici[i].omiljeno_pice << std::endl;
        std::cout << "======================" << std::endl;
    }
}

int main()
{
    int zadnji_index = 0, odabir;
    ucenik svi_ucenici[1000];
    std::string jos;

    do
    {
        std::cout << "1) Unesi novog." << std::endl;
        std::cout << "2) Ispisi sve." << std::endl;
        std::cin >> odabir;
        switch(odabir){
            case 1: unos(svi_ucenici, zadnji_index); zadnji_index++; break;
            case 2: ispis(svi_ucenici, zadnji_index); break;
            default: std::cout << "???" << std::endl;
        }
        std::cout << "Zelis li jos nesto raditi? (da/kraj): " << std::endl;
        std::cin >> jos;
    }while(jos == "da");
    return 0;
}