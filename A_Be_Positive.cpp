#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin>>T;

    while(T--) {
        int n,x; cin>>n;
        int z=0,neg=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==0) z++;
            else if(x==-1) neg++;
        }
        if(neg%2==1) z+=2;
        cout <<z<< endl;
    }
    
    return 0;
}