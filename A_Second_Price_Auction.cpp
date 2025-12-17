#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int p[n]; 
    int max = 0, smax = 0, pp=0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        if(p[i] > max){
            max = p[i];
            pp=i+1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(p[i] > smax && p[i] != max){
            smax = p[i];
        }
    }

    cout << pp << " " << smax << endl;
    return 0;
}
