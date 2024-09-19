#include <iostream>


int main(int argc, char* argv[]) {
	int a = 0;
	std::cin >> a;
	int b = a / 6;
	int c = (a * 4) / 6;
	std::cout << b << " " << c << " " << b << std::endl;
	return EXIT_SUCCESS;
}