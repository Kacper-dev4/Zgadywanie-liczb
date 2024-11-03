#include<iostream>


void sprawdzLiczbe(int losowaLiczba, int proba)
{
    int liczba;
    std::cout << "Zgadnij jaka to moze być liczba masz jeszcze: " << 6 - proba << " prob! ";
    std::cin >> liczba;

    if(liczba == losowaLiczba)
    std::cout << "Jej udalo ci sie zgadnac!";
    else if(proba<6)
    {
        proba++;
        std::cout << "Niestety nie udało sie :<<" << std::endl;
        sprawdzLiczbe(losowaLiczba,proba);
    }


}


int main()
{
    int proba = 1;
    
    int losowaLiczba;
    srand(time(NULL));
    losowaLiczba = rand() % 10;
    std::cout << "Wylosowano liczbe zgadnij jaka to ?! masz piec prob!" << std::endl;
    sprawdzLiczbe(losowaLiczba,proba);

    return 0;
}