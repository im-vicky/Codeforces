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
    cin >> test;
    int noOfQuestions = 0;
    for (int i = 0; i < test; i++)
    {
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
                count++;
        }
        if (count >= 2)
            noOfQuestions++;
    }
    cout << noOfQuestions;
}