#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int n, liczba, dolny, gorny, suma=0, dzielnik=0;
    string wypisanie;
    cout << "Podaj, ile liczb calkowitych chcesz wczytac: " << endl;
    cin >> n;
    cout << "Podaj dolny przedzial liczb, z ktorych bedzie liczona srednia: " << endl;
    cin >> dolny;
    cout << "Podaj gorny przedzial liczb, z ktorych bedzie licozna srednia: " << endl;
    cin >> gorny;
    cout << "Podaj " << n << " liczb calkowitych" << endl;
    for (int i=0; i<n; i++)
    {
        cin >> liczba;
        ostringstream ss;
        ss << liczba;
        string str = ss.str();
        wypisanie+=ss.str();
        wypisanie+=" ";
        if(liczba>=dolny && liczba<=gorny)
        {
            suma+=liczba;
            dzielnik++;

        }

    }
    cout << "Podano nastepujace liczby: " << wypisanie << endl;

    if (dzielnik!=0)
    {

        cout << "Srednia z podanych liczb, nalezacych do przedzialu: <" << dolny << ", " << gorny << "> wynosi: " << (double)suma/dzielnik << endl;

    }
    else
    {
        cout << "Nie mozna obliczyc sredniej, poniewaz zadna z liczb nie miesci sie w podanym przedziale" << endl;
    }


    const int N=6;
    int tablica[N];
    cout << "Podaj " << N << " liczb calkowitych: " << endl;
    for (int i=0; i<N; i++)
    {
        cin >> tablica[i];
    }
    int min=tablica[0];
    for (int i=1; i<N; i++)
    {
        if(min>tablica[i])
           {
               min=tablica[i];
           }
    }
    cout << endl << "Najmniejszy element to: " << min << endl;

    cout << endl <<"Podane liczby to (w nawiasie znajduje sie roznica pomiedzy dana liczba, a najmniejsza z podanych liczb): " << endl;
    for (int i=0; i<N; i++)
    {
        cout << tablica[i] << " (" << tablica[i]-min << "), ";
    }

    int schowek;
    for (int i=0; i<(N/2); i++)
    {
        schowek=tablica[N-1-i];
        tablica[N-1-i]=tablica[i];
        tablica[i]=schowek;
    }
    cout << endl <<endl << "Tablica po odwroceniu: ";
    for (int i=0; i<N; i++)
    {
        cout << tablica[i] << ", ";
    }
    return 0;
}
