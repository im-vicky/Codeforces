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
    int m, n, dominoPiece, area, noOfDominos;
    cin >> m >> n;
    dominoPiece = 2 * 1;
    area = m * n;
    noOfDominos = area / dominoPiece;
    cout << noOfDominos;

}