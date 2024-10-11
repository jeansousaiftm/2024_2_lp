#include<stdio.h>

int main() {

    char r[] = { 'N', 'L', 'S', 'O' };

    int n;
    while (scanf("%d%*c", &n) && n > 0) {
        //fflush(stdin);
        int p = 0;
        for (int i = 0; i < n; i++) {
            char c;
            scanf("%c", &c);
            if (c == 'D') p++;
            if (c == 'E') p--;
            if (p > 3) p = 0;
            if (p < 0) p = 3;
            //printf("%d\n", p);
        }
        printf("%c\n", r[p]);
    }

    return 0;
}
