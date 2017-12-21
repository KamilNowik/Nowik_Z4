#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int n, liczba, dolny, gorny, suma=0, dzielnik=0, srednia;
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
        srednia=suma/dzielnik;
        cout << "Srednia z podanych liczb, nalezacych do przedzialu: <" << dolny << ", " << gorny << "> wynosi: " << srednia << endl;

    }
    else
    {
        cout << "Nie mozna obliczyc sredniej, poniewaz zadna z liczb nie miesci sie w podanym przedziale" << endl;
    }















    return 0;
}
