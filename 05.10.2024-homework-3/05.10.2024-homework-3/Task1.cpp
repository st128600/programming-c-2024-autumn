#include<iostream>

int main(int argc, char* argv[]) {
	int s = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d", &s);
	while (c < s) {
		scanf_s("%d", &d);
		c++;
		if (d == 1) {
			a += 1;
		}
		else {
			b += 1;
		}
	}
	if (a >= b) {
		printf("%d", b);
	}
	else {
		printf("%d", a);
	}
	return EXIT_SUCCESS;
}