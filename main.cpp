#include <iostream>

using namespace std;

int main()
{
    char gwiazdka = '*';
    int x;
    int y;

    cout << "wprowadz szerokosc prostokata: "; cin >> x;
    cout << "wprowadz wysokosc prostokata: ";  cin >> y;
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << gwiazdka;
        }

        cout << endl;
    }
}
