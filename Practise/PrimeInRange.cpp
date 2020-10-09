#include <bits/stdc++.h>
using namespace std;

int64_t pri(int a, int b)
{
    int sum = 0;
    for (int i = a + 1; i < b; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            sum = sum + i;
    }
    return sum;
}

int main()
{
    cout << pri(1, 5);
    return 0;
}