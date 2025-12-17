#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        int sum = (n / 10) + (n % 10);
        printf("%d\n", sum);
    }
    return 0;
}