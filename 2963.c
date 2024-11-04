#include<stdio.h>

int main(){
    int n, p, x;
    char resp = 'S';
    scanf("%d %d", &n, &p);
    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x > p) {
            resp = 'N';
        }
    }
    printf("%c\n", resp);
    return 0;
}
