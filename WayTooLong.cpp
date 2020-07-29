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
    int test;
    string word;

    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> word;
        int lengthOfWord = word.length();
        if (lengthOfWord <= 10)
        {
            cout << word << endl;
        }
        else
        {

            auto result = word[0] + to_string(lengthOfWord - 2) + word[lengthOfWord - 1];
            cout << result << endl;
        }
    }
}