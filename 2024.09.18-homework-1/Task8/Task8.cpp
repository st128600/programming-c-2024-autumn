#include <iostream>


int main(int argc, char* argv[]) {
	int a = 0;
	std::cin >> a;
	int b = a / 100;
	int f = a % 100;
	int c = f / 10;
	int d = a % 10;
	std::cout << b + c + d << std::endl;
	return EXIT_SUCCESS;
}