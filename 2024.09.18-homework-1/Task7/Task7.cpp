#include <iostream>


int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	int d = (a * b + 1) % 109;
	std::cout << d << std::endl;
	return EXIT_SUCCESS;
}