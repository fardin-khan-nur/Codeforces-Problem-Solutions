#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        if(N % 2 == 1) {
            for(int i = 0; i < N; i++){
                cout << (N-i) << " \n"[i+1 == N];
            }
        }
        else {
            cout << -1 << '\n';
        }
    }
    
    return 0;
}