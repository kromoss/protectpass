#include <iostream>
#include <string>

using namespace std;

//test

int main()
{
    //Variables init
    double nb1 = 0, nb2 = 0, nb3 = 0;

    //Ask first number
    cout << "Nombre 1 :" << endl;
    cin >> nb1;

    //Ask 2nd number    
    cout << "Nombre 2 :" << endl;
    cin >> nb2;

    //Ask 3th number
    cout << "Nombre 3 :" << endl;
    cin >> nb3;

    //Display first calculation
    cout << "(" << nb1 << " + " << nb2 << ") * " << nb3 << " = " << (nb1 + nb2) * nb3 << endl;

    //Display 2nd calculation
    cout << "Le quotient de " << nb1 + nb2 << " / " << nb3 << " est " << (nb1 + nb2) / nb3 << " et le reste est " << int(nb1 + nb2) % int(nb3) << endl;
    return 0;
}
