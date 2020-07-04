#include <string>
#include <iostream>

using namespace std;

void dessineRectangle(int const l, int const h, char const fill)
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