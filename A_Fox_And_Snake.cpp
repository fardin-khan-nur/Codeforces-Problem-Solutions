#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0)
        {
            for (int j = 0; j < cols; j++) cout << "#";
        }
        else if (i % 4 == 1)
        {
            for (int j = 0; j < cols - 1; j++) cout << ".";
            cout << "#";
        }
        else
        {
            cout << "#";
            for (int j = 1; j < cols; j++) cout << ".";
        }
        cout << endl;
    }

    return 0;
}
