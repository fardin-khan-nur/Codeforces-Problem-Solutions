#include <iostream>
#include <set>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> damagedDragons;

    for (int i = k; i <= d; i += k) damagedDragons.insert(i);
    for (int i = l; i <= d; i += l) damagedDragons.insert(i);
    for (int i = m; i <= d; i += m) damagedDragons.insert(i);
    for (int i = n; i <= d; i += n) damagedDragons.insert(i);

    cout << damagedDragons.size() << endl;

    return 0;
}
