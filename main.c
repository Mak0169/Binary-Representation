#include <stdio.h>
#include <stdlib.h>

void getBinary(unsigned x) {
    for (int i = 31; i >= 0; --i) {
        printf("%d", (x >> i) & 1);
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
