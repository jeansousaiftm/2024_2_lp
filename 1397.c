#include<stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) && n > 0) {
        int pa = 0, pb = 0;
        for (int i = 0; i < n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);
            if (a > b) pa++;
            if (b > a) pb++;
        }
        printf("%d %d\n", pa, pb);
    }
    return 0;
}
