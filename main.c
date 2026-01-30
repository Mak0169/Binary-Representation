#include <stdio.h>
#include <stdlib.h>

void getBinaryInt(unsigned int x) {
    if (x < 16) {
        for (int i = 3; i >= 0; --i) {
            printf("%d", (x >> i) & 1);
        }
    } else if ((x >= 16) & (x < 1310)) {
        for (int i = 7; i >= 0; --i) {
            printf("%d", (x >> i) & 1);
        }
    } else {
        for (int i = 31; i >= 0; --i) {
            printf("%d", (x >> i) & 1);
        }
    }
}

void getCharBinary(unsigned char ch)

int main() {
    int var = 0;
    unsigned int num = 0;
    unsigned char ch;
    printf("1. Convert integer to binary\n");
    printf("2. Convert character to binary\n");
    printf("Choose an option: ");
    scanf("%d", &var);
    
    switch (var) {
    case 1:
        printf("Enter number: ");
        scanf("%d", &num);
        getBinaryInt(num);
        break;
    case 2:
        printf("Enter: ");
        ch = getchar();
        break;
    }
    printf("\n");
    return 0;
}
