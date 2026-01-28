#include <stdio.h>
#include <stdlib.h>

void getBinary(unsigned x) {
    for (int i = 3; i >= 0; --i) {
        printf("%d", (x >> i) & 1);
    }
}

int main() {
    printf("Type a character to figure out what it is in binary: ");
    unsigned int number;
    scanf("%d", &number);
    getBinary(number);
    printf("\n");
}
