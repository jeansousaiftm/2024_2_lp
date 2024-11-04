#include<stdio.h>

int main() {
    int n, m, f = 0;

    scanf("%d %d", &n, &m);
    int q[n + 1];
    for (int i = 1; i <= n; i++) {
        q[i] = 0;
    }
    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        q[x]++;
    }
    for (int i = 1; i <= n; i++) {
        if (q[i] == 0) f++;
    }
    printf("%d\n", f);


    return 0;
}
