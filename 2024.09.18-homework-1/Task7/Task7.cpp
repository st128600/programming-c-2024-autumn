#include<iostream>

int main(int argc, char argv[]) {
    unsigned int v = 0;
    int t = 0;
    scanf_s("%d", &v);
    scanf_s("%d", &t);
    int GOIDA = v * t;
    int c = (((GOIDA % 109) + 109) % 109) + 1;
    printf("%d", c);
    return EXIT_SUCCESS;
}