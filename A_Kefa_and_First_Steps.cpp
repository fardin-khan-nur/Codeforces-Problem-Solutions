#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], mL = 1, cL = 1;

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1]) cL++;
        else cL = 1;
        if (cL > mL) mL = cL;
    }

    cout << mL;
    return 0;
}
