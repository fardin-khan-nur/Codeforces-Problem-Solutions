#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c_a = 0, c_non_a = 0;
    
    for (char c : s)
    {
        if (c == 'a') c_a++;
        else c_non_a++;
    }
    
    if(c_a > c_non_a) cout << c_a + c_non_a << endl;
    else cout << c_non_a - c_a << endl;
    

    return 0;
}

// 2nd one ok
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string t;
    cin >> t;
    cout << min(2*(int)count(t.begin(),t.end(),'a')-1,(int)t.size());
}
