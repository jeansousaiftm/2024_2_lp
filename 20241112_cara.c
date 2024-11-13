#include<stdio.h>

int main() {

    int n;

    while (scanf("%d", &n) && n > 0) {
        int j = 0, m = 0, x;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x == 0) m++;
            if (x == 1) j++;
        }
        printf("Maria %d Joao %d\n", m, j);
    }


    return 0;
}
