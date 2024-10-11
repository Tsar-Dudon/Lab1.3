#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int i;
	std::cin >> i;
	std::cout << (a & ~(1 << i)) << std::endl;
	return 0;
}