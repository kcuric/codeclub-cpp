/*
    Izradi igru "Par nepar!". :)
*/

#include <iostream>
#include <stdlib.h> // rand(), srand()
#include <time.h>

int odabir_racunala()
{
    srand(time(NULL));
    int neki_broj = rand() % 10;
    while(neki_broj == 0){
        neki_broj = rand() % 10;
    }
    return neki_broj;
}

char odabir_parnosti()
{   
    /*
        Korisnik bira želi li biti par ili nepar.
        Ukoliko unese neko drugo slovo osim p i n 
        funkcija javlja gresku. Ukoliko unese
        P ili N funkcija ta slova pretvara u mala 
        slova p i n.
    */
    char korisnik_parnost;
    std::cout << "Zelis li biti par ili nepar (p/n)?: ";
    std::cin >> korisnik_parnost;
    if(korisnik_parnost == 'P' or korisnik_parnost == 'N')
    {
        korisnik_parnost += 32;
    }
    while(korisnik_parnost != 'p' and korisnik_parnost != 'n')
    {
        std::cout << "Nesto si krivo upisao! Zelis li biti par ili nepar? (p/n): "
        << std::endl;
        std::cin >> korisnik_parnost;
        if(korisnik_parnost == 'P' or korisnik_parnost == 'N')
        {
            korisnik_parnost += 32;
        }
    }
    return korisnik_parnost;
}

bool pobjednik(char korisnik_parnost, int korisnik, int racunalo)
{
    if(korisnik_parnost == 'p' && (korisnik + racunalo) % 2 == 0)
    {
        return true;
    }
    else if(korisnik_parnost == 'n' && (korisnik + racunalo) % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void igra(){
    int korisnik_broj, racunalo_broj;
    char korisnik_parnost = odabir_parnosti();

    std::cout << "Par nepar bim bam BUS!: ";
    std::cin >> korisnik_broj;
    racunalo_broj = odabir_racunala();
    
    std::cout << "-------------------" << std::endl;
    std::cout << "KORISNIK: " << korisnik_broj << std::endl;
    std::cout << "RACUNALO: " << racunalo_broj << std::endl;
    std::cout << "-------------------" << std::endl;

    if(pobjednik(korisnik_parnost, korisnik_broj, racunalo_broj))
    {
        std::cout << "Pobjedio si!" << std::endl;
    }
    else
    {
        std::cout << "Racunalo je pobjedilo!" << std::endl;
    }
}

int main()
{   
    igra();
    return 0;
}