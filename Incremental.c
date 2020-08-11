#include <stdio.h>

int main() {
    int a = 5;
    int b = 7;
    a += 1;
    int c = (a++) + (++a) + (b++);
    printf("%x", c);
}