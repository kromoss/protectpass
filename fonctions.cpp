#include <iostream>

/*
    * Function adds 2 to her argument
    * - nb : number to wich 2 are added (reference)
    * return nb added 2
*/

double moyenne(double bestScore[], int arrayLenght);

double moyenne(double bestScore[], int arrayLenght)
{
    double total = 0;

    for(int i = 0; i < arrayLenght; i++)
    {
        total += bestScore[i];
    }

    return total / 5;
}