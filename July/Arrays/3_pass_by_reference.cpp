#include <iostream>
using namespace std;
void change(int arr[], int s)
{
    for (int i = 0; i <= s - 1; i++)
    {
        cout << 2 * arr[i] << endl;
    }
}
int main()
{
    int arr[] = {1, 2, 3};
    change(arr, 3);
    cout << "in main\n";
    for (int i = 0; i <= 3 - 1; i++)
    {
        cout << arr[i] << endl;
    }
  
    return 0;
}