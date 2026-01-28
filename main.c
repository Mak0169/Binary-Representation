#include <stdio.h>
#include <stdlib.h>

void getBinary(unsigned x) {
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

int main() {
    int var = 0;
    unsigned int num = 0;
    printf("1. Convert integer to binary\n");
    printf("2. Convert character to binary\n");
    printf("Choose an option: ");
    scanf("%d", &var);
    
    switch (var) {
    case 1:
        printf("Enter number: ");
        scanf("%d", &num);
        getBinary(num);
        break;
    case 2:
        break;
    }
    printf("\n");
    return 0;
}
