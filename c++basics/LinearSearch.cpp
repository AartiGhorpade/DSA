#include <iostream>
using namespace std;

int linearSearch(int target, int arr[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (target == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int target = 101;
    int arr[] = {4, 5, 8, 445, 54, 68, 544, 36, 11};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    cout << target << " " << "found at" << " " << linearSearch(target, arr, arrSize) << " " << "th position" << endl;
}