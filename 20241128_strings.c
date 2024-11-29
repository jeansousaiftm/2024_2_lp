#include<stdio.h>
#include<string.h>

int main() {

    char str[100];

    //scanf("%s", str);
    scanf("%[^\n]%*c", str);
    printf("%s\n", str);

    //for (int i = 0; i < strlen(str); i++) {
    //    printf("%c\n", str[i]);
    //}

    printf("%d\n", strcmp(str, "Abacate"));

    char tmp[100];

    strcpy(tmp, str); // tmp = str;

    printf("%s\n", tmp);

    return 0;
}
