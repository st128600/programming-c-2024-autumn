#include <iostream>

int main(int argc, char* argv[]) {
    int s = 0;
    scanf_s("%d", &s);
    int f = 0;
    for (int i = 0; i < s; ++i) {
        for (int j = 0; j < s; ++j) {
            int z = 0;
            scanf_s("%d", &z);
            if (i < j && z == 1) {
                f++;
            }
        }
    }
    printf("%d", f);

    return EXIT_SUCCESS;
}