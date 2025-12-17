#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long total_red = 2 * n;
    long long total_green = 5 * n;
    long long total_blue = 8 * n;

    long long notebooks_red = (total_red + k - 1) / k;
    long long notebooks_green = (total_green + k - 1) / k;
    long long notebooks_blue = (total_blue + k - 1) / k;

    long long min_notebooks =  notebooks_red + notebooks_green + notebooks_blue;

    cout << min_notebooks << endl;

    return 0;
}
