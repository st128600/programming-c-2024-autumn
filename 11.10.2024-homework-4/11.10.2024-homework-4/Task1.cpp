#include <iostream>

int main(int argc, char* argv[])
{
	int n;
	scanf_s("%d", &n);

	int m[10000] = { 0 };

	int a = 0;

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &m[i]);
	}

	int x = 0;
	scanf_s("%d", &x);

	for (int j = 0; j < n; j++)
	{
		if (m[j] == x) {
			++a;
		}
	}

	printf("%d", a);

	return EXIT_SUCCESS;
}