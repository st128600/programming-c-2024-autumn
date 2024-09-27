#include <iostream>

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int s = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    scanf_s("%d", &a1);
    scanf_s("%d", &b1);
    scanf_s("%d", &c1);
    if (a > b) {
        s = b;
        b = a;
        a = s;
    }
    if (a > c) {
        s = c;
        c = a;
        a = s;
    }
    if (b > c) {
        s = c;
        c = b;
        b = s;
    }
    if (a1 > b1) {
        s = b1;
        b1 = a1;
        a1 = s;
    }
    if (a1 > c1) {
        s = c1;
        c1 = a1;
        a1 = s;
    }
    if (b1 > c1) {
        s = c1;
        c1 = b1;
        b1 = s;
    }
    if (a == a1 && b == b1 && c == c1) {
        printf("Boxes are equal");
    }
    else if (a <= a1 && b <= b1 && c <= c1) {
        printf("The first box is smaller than the second one");
    }
    else if (a >= a1 && b >= b1 && c >= c1) {
        printf("The first box is larger than the second one");
    }
    else printf("Boxes are incomparable");
    return 0;
}
