#include <iostream>

int main()
{
	int n;
	int counter = 0;
	std::cout << "Input n: ";
	std::cin >> n;
	int maxn = n;
	std::cout << std::endl;
	while (n != 1)
	{
		n = (n % 2 == 0) ? n / 2 : n * 3 + 1;
		++counter;
		maxn = (maxn >= n) ? maxn : n;
	}
	std::cout << counter << ' ' << maxn << std::endl;

	return 0;
}