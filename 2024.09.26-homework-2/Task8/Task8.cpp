#include<iostream>
#include<cmath>

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int s = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    if (a > c) {
        s = b * 2;
    }
    else if (c % a == 0) {
        s = b * 2 * (c / a);
    }
    else if (((c % a) <= a / 2) && (c / a >= 2)) {
        s = b * 2 * ((c / a) - 1);
        s = s + ((b * 2 * 2 * 3) / 4);
    }
    else if ((c % a) <= a / 2) {
        s = ((b * 2 * 2 * 3) / 4);
    }
    else {
        s = b * 2 * (c / a) + b * 2;
    }
    printf("%d", s);
    return EXIT_SUCCESS;
}