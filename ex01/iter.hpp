#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename X, typename Y> void iter (X *addr, const std::size_t len, Y func)
{
	for (std::size_t i = 0; i < len; i++)
		func(addr[i]);
}

template <typename X, typename Y> void iter (const X *addr, const std::size_t len, Y func)
{
	for (std::size_t i = 0; i < len; i++)
		func(addr[i]);
}
#endif