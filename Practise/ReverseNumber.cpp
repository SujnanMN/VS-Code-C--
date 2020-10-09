#include <bits/stdc++.h>
using namespace std;

int rev(int n)
{
    int rem, ans = 0;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        ans = ans * 10 + rem;
    }
    return ans;
}

int main()
{
    cout << rev(105);
    return 0;
}