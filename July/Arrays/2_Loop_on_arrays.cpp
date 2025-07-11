#include <iostream>
using namespace std;
int main()
{
    int marks[5] = {99, 89, 24, 87, 56};
    int size = 5;
    for (int i = 0; i < size - 1; i++)
    {
        cout << marks[i] << endl;
    }
    // taking input array
    for (int i = 0; i < size - 1; i++)
    {
        cin >> marks[i];
    }
    // output array
    for (int i = 0; i < size - 1; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}