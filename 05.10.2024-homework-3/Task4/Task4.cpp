#include<iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int s = 0;
	int f = 0;
	int c = 1;
	int b = 0;
	int d = 0;
	int max = 0;
	scanf_s("%d", &a);
	while (c <= a) {
		scanf_s("%d", &f);
		scanf_s("%d", &s);
		if (s == 1) {
			b += 1;
			c++;
			if (f > max) {
				max = f;
				d = c - 1;
			}
		}
		else
			c++;

	}
	if (b == 0) {
		printf("-1");
	}
	else {
		printf("%d", d);
	}
	return EXIT_SUCCESS;
}