#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int bilangan;
    srand(time(0));
    bilangan=rand() % 10;

    cout << "nilai awal : " << bilangan << endl;

    if (bilangan >= 5)
    {
     bilangan = 2 * bilangan; 
    }

    cout << "Nilai sekarang = " << bilangan << endl;
}