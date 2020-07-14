#include <iostream>

using namespace std;

// Main
int main()
{
    int* freeCaseInt(0);
    freeCaseInt = new int;

    cout << "How old are u ?" << endl;
    cin >> *freeCaseInt;

    cout << "You have " << *freeCaseInt << " years old.";

    delete freeCaseInt;
    freeCaseInt = 0;

    return 0;
}