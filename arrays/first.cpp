#include <iostream>
using namespace std;

int main()
{
    int a[5];
    for (size_t i = 0; i < 5; i++)
    {
        a[i] = i;
    }

    for (size_t i = 0; i < 5; i++)
    {
        cout << i << " ";
    }
    return 0;
}