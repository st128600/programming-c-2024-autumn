#include<iostream>

int main(int argc, char* argv[]) {
    int x1 = 0;
    int y1 = 0;
    int r1 = 0;
    int x2 = 0;
    int y2 = 0;
    int r2 = 0;
    scanf_s("%d", &x1);
    scanf_s("%d", &y1);
    scanf_s("%d", &r1);
    scanf_s("%d", &x2);
    scanf_s("%d", &y2);
    scanf_s("%d", &r2);

    int f1 = (r1 + r2) * (r1 + r2);
    int f2 = (r1 - r2) * (r1 - r2);
    int f = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

    if (f2 <= f && f <= f1) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    return EXIT_SUCCESS;
}
	