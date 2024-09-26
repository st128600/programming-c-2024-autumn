#include<iostream>


int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    scanf_s("%d", &d);
    int f = ((a - c) * (a - c));
    int g = ((b - d) * (b - d));
    if ((a - c == 0) && (b - d != 0) || (b - d == 0) && (a - c != 0) || (g == f)) {
        printf("YES");
    }
    else {
        printf("NO");


    }


    return EXIT_SUCCESS;
}