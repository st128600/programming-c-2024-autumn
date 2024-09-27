#include<iostream>

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d", &a);
    if (a % 5 == 0) {
        b = a / 5;
    }
    else if (a % 5 == 1) {
        b = (a - 6) / 5;
        c = 2;
    }
    else if (a % 5 == 2) {
        b = (a - 12) / 5;
        c = 4;
    }
    else if (a % 5 == 3) {
        b = (a - 3) / 5;
        c = 1;
    }
    else if (a % 5 == 4) {
        b = (a - 9) / 5;
        c = 3;
    }
    printf("%d %d", b, c);
    return EXIT_SUCCESS;
}