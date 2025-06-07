#include <stdio.h>

// Name Converter from Max Mustermann --> Mustermann, M.

int main(void) {
    char ch = 0;
    int anfang = 0;
    printf("First and last Name:\n");
    while ((anfang = getchar()) == ' ') {
        if (anfang != ' ') {
            anfang = getchar();
        }
    }
    while ((ch = getchar()) != ' ') {

    }
    while ((ch = getchar()) != '\n') {
        if (ch >= 'A' && ch <= 'Z') {
            putchar(ch);
        }else if (ch >= 'a' && ch <= 'z') {
            putchar(ch);
        }
    }
    printf(", %c.", anfang);
    return 0;
}
