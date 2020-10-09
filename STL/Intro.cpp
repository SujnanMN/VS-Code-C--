#include <bits/stdc++.h>
using namespace std;

int main()
{
    //vector of array
    vector<int> a = {1, 5, 10, 0};
    cout << a[3] << endl;

    //sort
    sort(a.begin(), a.end());
    for (int i = 0; i < 4; i++) //NlogN
        cout << a[i] << " ";
    cout << " " << endl;

    //binary search
    bool search = binary_search(a.begin(), a.end(), 6);
    cout << search << endl;

    //push an element
    a.push_back(-5);

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << " " << endl;
    sort(a.begin(), a.end());

}