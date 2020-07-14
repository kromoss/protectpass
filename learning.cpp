#include <iostream>
#include "addTwo.cpp"
using namespace std;

//test
int main()
{
    
    int nb = 0;

    cout << "Tapez un nombre : ";
    cin >> nb;

    cout << nb << " + 2 = " << addTwo(nb);
}
