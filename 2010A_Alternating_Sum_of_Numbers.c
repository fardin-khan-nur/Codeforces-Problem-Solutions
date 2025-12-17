#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    
    while (t--)
    {
        int n;
        scanf("%d", &n);
        
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        
        int alternating_sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                alternating_sum += arr[i];
            }
            else
            {
                alternating_sum -= arr[i];
            }
        }
        printf("%d\n", alternating_sum);
    }

    return 0;
}
