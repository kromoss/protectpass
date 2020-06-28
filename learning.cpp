#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//test

int main()
{
    //Variables init
    double nb1 = 0, nb2 = 0;

    cout << "Nombre 1 :" << endl;
    cin >> nb1;

    cout << "Nombre 2 :" << endl;
    cin >> nb2;

    cout << nb1 << " ^ " << nb2 << " = " << pow(nb1, nb2) << endl;
}
