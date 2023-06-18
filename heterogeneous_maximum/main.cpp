#include "maximum.hpp"

#include <iostream>

int main() {
	{
		int a = 5;
		double b = 5.6;

		std::cout << "a = " << a << '\n';
		std::cout << "b = " << b << '\n';
		std::cout << "maximum = " << maximum(a, b) << '\n';
	}

}