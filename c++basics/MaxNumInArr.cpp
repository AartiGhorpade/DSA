#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 2, 5, 6, 8, 252, 4558, 42, 41};
    int maxNo = arr[0];
    int sizeofArr = sizeof(arr) / sizeof(maxNo);

    for (int i = 1; i <= sizeofArr; i++)
    {
        if (maxNo < arr[i])
        {
            maxNo = arr[i];
        }
    }

    cout << maxNo;
    return 0;
}