#include<iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int n = 1;
	int c = 1;
	int m = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a > b) {
		m = a;
	}
	else {
		m = b;
	}
	while (c <= m) {
		if (a % c == 0 && b % c == 0) {
			n = c;
			c++;
		}
		else {
			c++;
		}
	}
	int f = (a * b) / n;
	printf("%d", f);
	return EXIT_SUCCESS;
}