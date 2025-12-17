#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    int maxRoll = max(y, w);
    int favorableOutcomes = 6 - maxRoll + 1;
    int gcd = __gcd(favorableOutcomes, 6);
    cout << (favorableOutcomes / gcd) << "/" << (6 / gcd) << endl;
    return 0;
}
