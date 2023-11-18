#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

void zad1()
{
    int ilosc=0;
    int* tablica=nullptr;

    cout << "\nPodaj ilosc elementow w tablicy: ";
    cin >> ilosc;

    tablica = new int[ilosc];

    int iter = 0;
    while (iter < ilosc)
    {
        cout << "Podaj wartosc[" << iter << "]: ";
        cin >> tablica[iter++];
    }

    cout << "Najwiekszy element w tablicy to: " << *max_element(tablica, tablica + ilosc)<<"\n";

    delete[] tablica;
}

void zad2()
{
    int ilosc = 0;
    int* tablica = nullptr;

    cout << "\nPodaj ilosc elementow w tablicy: ";
    cin >> ilosc;

    tablica = new int[ilosc];

    int iter = 0;
    while (iter < ilosc)
    {
        cout << "Podaj wartosc[" << iter << "]: ";
        cin >> tablica[iter++];
    }

    int max_count = 0;
    int count = 0;
    int elem = 0;
    sort(tablica, tablica + ilosc);

    for (int x = 1; x < ilosc; x++)
    {
        if (tablica[x] == tablica[x - 1])
            count++;
        else
            count = 1;

        if (count > max_count)
        {
            max_count = count;
            elem = tablica[x-1];
        }
    }

    cout << "Najczesciej wystepujacy element to: " << elem << "\n";

    delete[] tablica;
}

void zad3()
{
    int** tablica = new int* [10];

    for (int x = 0; x < 10; x++)
        tablica[x] = new int[10];

    //pierwsza kolumna
    for (int x = 0; x <= 9; x++)
        tablica[x][0] = x;

    //druga kolumna
    for (int x = 0; x <= 9; x++)
        tablica[x][1] = 2*x;

    //trzecia kolumna
    for (int x = 0; x <= 9; x++)
        tablica[x][2] = x * x;

    //czwarta kolumna
    for (int x = 0; x <= 9; x++)
        tablica[x][3] = (x+1)+3;

    //pi¹ta kolumna
    for (int x = 0; x <= 9; x++)
        tablica[x][4] = 4-(x + 1);

    for (int x = 0; x <= 9; x++)
        for (int y = 5; y <= 9; y++)
            tablica[x][y] = 0;



    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            cout << setw(4);
            cout << tablica[x][y];
        }
        cout << "\n";
    }

    for (int x = 0; x < 10; x++)
        delete[] tablica[x];//czyszczenie pamieci

    delete[] tablica;
}

int main()
{
    //zad1();
    //zad2();
    zad3();
}
