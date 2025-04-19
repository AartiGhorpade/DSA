#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            num++;
            cout << num;
        }
        cout << endl;
    }
}