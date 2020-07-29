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
    int weight;
    cin >> weight;
    if (weight == 2)
    {
        cout << "NO";
    }
    else if (weight % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}