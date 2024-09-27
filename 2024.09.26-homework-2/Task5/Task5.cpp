#include<iostream>

int main(int argc, char* argv[]) {
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;
    int a3 = 0;
    int b3 = 0;
    int c3 = 0;
    scanf_s("%d", &a1);
    scanf_s("%d", &b1);
    scanf_s("%d", &c1);
    scanf_s("%d", &a2);
    scanf_s("%d", &b2);
    scanf_s("%d", &c2);
    scanf_s("%d", &a3);
    scanf_s("%d", &b3);
    scanf_s("%d", &c3);
    int v1 = a1 * b1 * c1;
    int v2 = a2 * b2 * c2;
    int v3 = a3 * b3 * c3;
    if ((v3 >= v2 + v1) && a3 >= a1 && a3 >= a1 && b3 >= b2 && b3 >= b1 && c3 >= c1 && c3 >= c2) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return EXIT_SUCCESS;
}