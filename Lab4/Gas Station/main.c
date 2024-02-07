#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int *fill = (int*)malloc(2 * n * sizeof(int));
    int *use = (int*)malloc(2 * n * sizeof(int));

    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        fill[i] = fill[i + n] = temp;
    }

    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        use[i] = use[i + n] = temp;
    }

    for (int i = 0; i < n; i++) {
        int fuel = 0;
        for (int j = i; j <= n + i; j++) {
            fuel += fill[j];
            fuel -= use[j];
            if (fuel < 0) break;
            if (j == n + i) {
                printf("%d\n", i);
                free(fill);
                free(use);
                return 0;
            }
        }
    }

    printf("-1\n");

    free(fill);
    free(use);
    return 0;
}
