#include<iostream>

int main(int argc, char* argv[]) {
	int p = 0;
	int a = 0;
	int b = 0;
	scanf_s("%d", &p);
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int f = a * b * p * 2;
	printf("%d", f);
	return EXIT_SUCCESS;
}