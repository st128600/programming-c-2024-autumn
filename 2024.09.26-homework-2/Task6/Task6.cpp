#include<iostream>
#include<cmath>

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    scanf_s("%d", &c);
    int g = 0 - b;
    int f = 0 - c;
    int D = b * b - 4 * a * c;
    if (a == 0 && b == 0 && c == 0) {
        printf("-1");
    }
    else {
        if (a == 0 && b != 0 ) {
            double x = f / b;
            printf("1 \n"); 
            printf("%.10lf \n", x);
        }
        else {
            if (D < 0) {
                printf("-1");
            }
            else {
                if (D == 0) {
                    printf("1");
                    double x1 = (g + sqrt(D)) / (2 * a);
                    double x2 = (g - sqrt(D)) / (2 * a);
                    printf("%.10lf", x1);
                }
                else {
                    double x1 = (g + sqrt(D)) / (2 * a);
                    double x2 = (g - sqrt(D)) / (2 * a);
                    printf("2 \n"); 
                    printf("%.10lf \n", x1);
                    printf("%.10lf \n", x2);
                }
            }
        }
    }
    return EXIT_SUCCESS;
}