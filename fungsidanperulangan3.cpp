#include <iostream>
using namespace std;

{
    int bilangan;

    srand(time(0));

    bilangan = rand() % 10;

    cout << "Bilangan awal = " << bilangan << endl;
    do
    {
