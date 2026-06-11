#include "Whatever.hpp"

int	main(void)
{
	int x, y;

	x = 0, y = 1;
	std::cout << max<int>(7, 9) << std::endl;
	std::cout << min<float>(5.7, 9.8) << std::endl;
	swap<int>(&x, &y);
	std::cout << "x: " << x << " y: " << y << std::endl;
	return (0);
}
