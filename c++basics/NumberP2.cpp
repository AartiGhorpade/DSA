#include <iostream>
using namespace std;
// 1
// 22
// 333
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}