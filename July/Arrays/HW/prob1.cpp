// #include <iostream>
// using namespace std;
// int main()
// {

//     int arr[] = {1, 2, 3, 4, 5};
//     int smallest = __INT16_MAX__;
//     int index_of_smallest;

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < smallest)
//         {
//             smallest = arr[i];
//             index_of_smallest = i;
//         }
//     }
//     cout << "Index of smallest number : " << index_of_smallest;

//     return 0;
// }


// largest number index
#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int largest = INT8_MIN;
    int index_largest;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            index_largest = i;
        }
    }
    cout << "Index of largest number : " << index_largest;
    return 0;
}
