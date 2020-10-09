#include <bits/stdc++.h>
using namespace std;

int btd(long long n)
{
    int rem, dec = 0, i = 0;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        i++;
    }
    return dec;
}

int main()
{
    cout << btd(11111111111);
    return 0;
}