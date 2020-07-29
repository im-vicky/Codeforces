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

    int test, kthplace;
    cin >> test >> kthplace;
    int arr[test];
    for (int i = 0; i < test; i++)
    {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    int kthnumber = arr[kthplace - 1];
    int count = 0;
    for (int i = 0; i < test; i++)
    {
        if (arr[i] > 0 && arr[i] >= kthnumber)
        {
            count++;
        }
    }
    cout << count;
}