#include <bits/stdc++.h>
using namespace std;

int dtb(int n)
{
    int rem, ans = 0, i = 1;
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        ans = ans + rem * i;
        i *= 10;
    }
    return ans;
}

int main()
{
    cout << dtb(15);
    return 0;
}