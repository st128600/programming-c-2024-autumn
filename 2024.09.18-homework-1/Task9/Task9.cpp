#include <iostream>


int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d %d %d", &a, &b, &c);
	int x = (a - c - 1) / (b - c) + 1;
	printf("%d", x);
	return EXIT_SUCCESS;
}

