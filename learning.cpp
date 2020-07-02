#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//test

void dessineRectangle(int l, int h, char fill)
{
    if(l >= 0 && h >= 0)
    {
        for(int ligne = 0; ligne < h; ligne++)
        {
            for(int colonne = 0; colonne < l; colonne++)
            {
                cout << fill;
            }
            cout << endl;
        }
    }
    else
    {
        cout << "La largeur et la hauteur doivent étre positif.";
    }
    
}

int main()
{
    
    int l = 0, h = 0;
    char fill = '*';

    cout << "Largeur : ";
    cin >> l;

    cout << "Hauteur : ";
    cin >> h;

    cout << "Remplissage : ";
    cin >> fill;

    dessineRectangle(l, h, fill);

    return 0;
}
