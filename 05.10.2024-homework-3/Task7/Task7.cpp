#include<iostream>
int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main(int argc, char* argv[]) {
	int s = 0;
	int m = 0;
	int z = 1;
	int c = 1;
	int n = 1;
	scanf_s("%d", &s);
	scanf_s("%d", &m);
	n = gcd(m, s);
	if (m < s) {
		z = s / n;
	}
	if (m > s) {
		if (n > 1) {
			z = (s) / n;
		}
		else {
			z = s;
		}
	}
	printf("%d", z);
	return EXIT_SUCCESS;
}