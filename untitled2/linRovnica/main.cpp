#include <iostream>
#include "linRovnica.h"

int main()
{
    Rovnica Prva(2);
    //Rovnica Druha(3, 'a');
    //Rovnica Tretia(4, 5.f);
    //Rovnica Stvrta;

    Prva.vypisRovnicu();
    Prva.vratKoren();
    std::cout<<"\nkoren je: "<<Prva.vratKoren()<<std::endl;
    // Druha.vypisRovnicu();
    //Tretia.vypisRovnicu();
    //Tretia.vratKoren();
    //std::cout<<"\nkoren je: "<<Tretia.vratKoren()<<std::endl;
    //Stvrta.vypisRovnicu();
    //Stvrta.vratKoren();
    //std::cout<<"\nkoren je: "<<Stvrta.vratKoren()<<std::endl;
    return 0;
}


Rovnica::Rovnica(float mojeA, float mojeB)
{
    koefA = mojeA;
    koefB = mojeB;
}

Rovnica::Rovnica(float mojKoef, char ktory)
{

    if (ktory == 'a')
    {
        koefA=mojKoef;
        std::cout<<"Zadaj koef b: ";
        std::cin>>koefB;
    }

    else if (ktory == 'b')
    {
        koefB= mojKoef;
        std::cout<<"Zadaj koef a: ";
        std::cin>>koefA;
    }


}

float Rovnica::vratKoren() const
{
    return -(koefB/koefA);
}

Rovnica::Rovnica()
{
    std::cout<<"Zadaj koef a: ";
    std::cin>>koefA;
    std::cout<<"Zadaj koef b: ";
    std::cin>>koefB;
}

void Rovnica::vypisRovnicu() const
{
    std::cout<<"\nRovnica ma tvar: "<< koefA<<"*x"<< ((koefB<0)? " ":" + ")<<koefB<<" = 0";
}























/*#include <iostream>
#include "linRovnica.h"
int main()
{
    //Rovnica prva (3,4.f);
    Rovnica druha (3,'a');
    //Rovnica tretia (3);

    return 0;
}

Rovnica::Rovnica(float mojeA, float mojeB)
{
    std::cout<<"Zadaj koef a: ";
    std::cin>>koefA;
    std::cout<<"Zadaj koef b: ";
    std::cin>>koefB;
}
void Rovnica::vypisRovnicu() const
{
    std::cout<<koefA<<"x+"<<koefB <<"= 0"<<std::endl;
}
Rovnica::Rovnica(float mojKoef, char ktory)
{
    std::cout<<"Zadaj koeficient: ";
    std::cin>>mojKoef;
}
*/