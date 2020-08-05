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
    string str1;
    string str2;

    cin >> str1 >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    if (str1.compare(str2) == 0)
    {
        cout << 0;
    }
    else if (str1.compare(str2) < 0)
    {
        cout << -1;
    }
    else
    {
        cout << 1;
    }
}