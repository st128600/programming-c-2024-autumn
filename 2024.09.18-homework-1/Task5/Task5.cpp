#include<iostream>
int main(int argc, char* argv[]) {
	int a = 0;
	
	std::cin >> a;
	std::cout << "The next number for the number " << a << " is " << a + 1 << ".\n" << std::endl;
	std::cout << "The previous number for the number " << a << " is " << a - 1 << "." << std::endl; 

	return EXIT_SUCCESS;
}