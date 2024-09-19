#include<iostream>

int main(int argc, char* argv[]) {
	int a = 0;
	int b = 0;
	int c = 0;
	
	std::cin >> a >> b >> c;
	std::cout << a * b * c * 2 << std::endl;
	
	return EXIT_SUCCESS;
}