#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int evenCount = 0, oddCount = 0, evenIndex = -1, oddIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        if (nums[i] % 2 == 0) {
            evenCount++;
            evenIndex = i + 1;
        } else {
            oddCount++;
            oddIndex = i + 1;
        }
    }
    
    if (evenCount > 1) cout << oddIndex << endl;
    else cout << evenIndex << endl;
    
    return 0;
}
