#include <iostream>
using namespace std;
// 1111
//   222
//    33
//     4

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout << " ";
        }
        for (int k = 1; k < i; k++)
        {   
            cout << k;
        }
        for (int m = i+1; m > 0; m--)
        {
            cout << m;
        }
        cout << endl;
    }
}