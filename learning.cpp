#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//test

void dessineRectangle(int l, int h)
{
    for(int ligne = 0; ligne < h; ligne++)
    {
        for(int colonne = 0; colonne < l; colonne++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    
    int l = 0, h = 0;

    cout << "Largeur : ";
    cin >> l;

    cout << "Hauteur : ";
    cin >> h;

    dessineRectangle(l, h);

    return 0;
}
