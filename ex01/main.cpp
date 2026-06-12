#include "iter.hpp"

template <typename U> void	display(U y) {
	std::cout << y << std::endl;
	return ;
}

int main(void)
{
	int array[] = {1, 2, 3};

	iter(array, 3, display<int>);
	return (0);
}