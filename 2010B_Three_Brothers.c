#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int late_brother = 6 - (a + b);

    printf("%d\n", late_brother);
    
    return 0;
}
