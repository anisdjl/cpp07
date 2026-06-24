#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
template <typename Y>
class Array
{
	private:
		Y				*_array;
		unsigned int	_size;
	public:
		Array(void);
		Array(unsigned int size);
		~Array(void);
		Array(const Array<Y> &src);
		Array<Y> &operator=(const Array<Y> &src);
		unsigned int size(void) const;
		Y	&operator[](unsigned int index);
		Y	&operator[](unsigned int index) const;
};

#endif