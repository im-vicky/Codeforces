#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test, count = 0;
    cin >> test;
    while (test--)
    {
        string temp;
        cin >> temp;
        if (temp[1] == '+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    cout << count;
}