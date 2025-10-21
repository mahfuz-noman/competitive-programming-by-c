#include <stdio.h>
#include <limits.h> 

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]); 
        }

        int min = INT_MAX;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int temp = arr[i] + arr[j] + j - i;
                if (temp <= min) {
                    min = temp;
                }
            }
        }

        printf("%d\n", min);
    }

    return 0;
}
