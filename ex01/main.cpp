#include "iter.hpp"

template <typename U> void	display(U y) {
	std::cout << y << std::endl;
	return ;
}

int main(void)
{
	int array[] = {1, 2, 3};

	iter(array, 3, display<int>); // on est oblige de declarer explicitement le type pour display car on ne peut pas faire de declaration implicite ne cascade
	return (0);
}