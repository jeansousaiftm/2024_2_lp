#include<stdio.h>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) && a + b > 0) {
        printf("%d\n", a + b);
    }
    return 0;
}
