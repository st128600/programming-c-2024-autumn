#include <iostream>


int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;
	int x = (a - c - 1) / (b - c) + 1;
	std::cout << x << std::endl;
	return EXIT_SUCCESS;
}

