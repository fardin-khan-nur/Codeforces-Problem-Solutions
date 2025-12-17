#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long s=0,c=0;
    if (n==1 || n==2)
    {
        cout << 1 << endl;
    }
    else
    {
        for (long long i = 3; ; i++)
        {
            if(i%2==0) n-=2;
            else n-=1;
            c++;
            
            if(n <= 0) break;
        }
        cout << c << endl;
    }
    return 0;
}
//! Accped
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int k = n / 3;
    int r = n % 3;
    
    int presents = 2 * k + (r > 0 ? 1 : 0);
    
    cout << presents << endl;
    
    return 0;
}
