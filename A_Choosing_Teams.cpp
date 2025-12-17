#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k, c = 0; cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] + k <= 5) c++;
    }
    cout << c / 3;
}