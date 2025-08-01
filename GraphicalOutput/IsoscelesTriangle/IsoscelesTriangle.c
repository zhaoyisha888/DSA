#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);  // ¶ÁÈëÒ»¸ö×Ö·û

    int height = 3;
    for (int i = 0; i < height; i++) {
        int num = 2*i + 1;
        int space = height - i - 1;
        for (int j = 0; j < space; j++) {
            printf(" ");
        }
        for (int j = 0; j < num; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}