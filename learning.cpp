#include <iostream>
#include <string>

using namespace std;

//test

int main()
{
    double nb1 = 0, nb2 = 0, nb3 = 0;

    cout << "Nombre 1 :" << endl;
    cin >> nb1;

    cout << "Nombre 2 :" << endl;
    cin >> nb2;

    cout << "Nombre 3 :" << endl;
    cin >> nb3;

    cout << "(" << nb1 << " + " << nb2 << ") * " << nb3 << " = " << (nb1 + nb2) * nb3 << endl;
    cout << "Le quotient de " << nb1 + nb2 << " / " << nb3 << " est " << (nb1 + nb2) / nb3 << " et le reste est " << int(nb1 + nb2) % int(nb3) << endl;
    return 0;
}
