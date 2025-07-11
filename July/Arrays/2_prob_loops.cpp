#include <iostream>
using namespace std;
int main()
{
    int num[6] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int smallest = INT16_MAX; //like infinty
    for (int i = 0; i <= size - 1; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }
    cout << "Smallest no:" << smallest<<endl;
    return 0;
}