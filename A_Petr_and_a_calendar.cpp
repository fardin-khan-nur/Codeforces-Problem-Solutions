#include <iostream>
using namespace std;

int main() {
    int m, d;
    cin >> m >> d;

    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = days_in_month[m - 1];
    
    int total_days = days + (d - 1);
    int columns = (total_days + 6) / 7;
    
    cout << columns << endl;
    return 0;
}
