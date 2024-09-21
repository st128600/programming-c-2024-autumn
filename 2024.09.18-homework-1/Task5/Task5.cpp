#include<iostream>

int main(int argc, char argv[]) {
    int a = 0;
    scanf_s("%d", &a);
    int b = a + 1;
    int SVO = a - 1;
    printf("The next number for the number %d is %d.\n", a, b);
    printf("The previous number for the number %d is %d.", a, SVO);
    return EXIT_SUCCESS;
}