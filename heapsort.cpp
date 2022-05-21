#include <iostream>
using namespace std;

void wypisz(long int tab[],long int rozmiar)
{
    if (rozmiar > 1)
    {
        for (int i = 0; i < rozmiar; i++)
        {
            cout << tab[i] << " ";
        }
        cout << endl;
    }
    
}
void zamien(long int tab[],long int rozmiar)
{
    long int tym;
    tym = tab[0];
    tab[0] = tab[rozmiar - 1];
    tab[rozmiar - 1] = tym;
}
void wstaw(long int tab[], long int rozmiar)
{
    for (int i = -0; i < rozmiar; i++)
    {
        cin >> tab[i];
    }
}
void kopcowanie(long int tab[], long int rozmiar)
{
    int tym;
    int j = 0;
    while (rozmiar > 0)
    {
        while (j < rozmiar)
        {
            for (int i = j; i!=0; i = (i - 1) / 2)
            {
                if (tab[i] > tab[(i - 1) / 2])
                {
                    tym = tab[i];
                    tab[i] = tab[(i - 1) / 2];
                    tab[(i - 1) / 2] = tym;
                }
                else break;
                
            }
            j++;
        }
        j = 0;
        wypisz(tab, rozmiar);
        zamien(tab, rozmiar);
        rozmiar--;

    }
    
}
using namespace std;
int main()
{
    long int ilosc;
    cin >> ilosc;
    while (ilosc > 0)
    {
        long int rozmiar;
        cin >> rozmiar;
        long int* tab = new long int[rozmiar];
        wstaw(tab, rozmiar);
        kopcowanie(tab, rozmiar);
        wypisz(tab, rozmiar);
        cout << endl;
        delete[] tab;
        ilosc--;
    }
    return 0;
}
