#include "Array.hpp"

template <typename Y> Array<Y>::Array(void)
{
	_array = NULL;
	_size = 0;
}

template <typename Y> Array<Y>::Array(unsigned int size) // le template <typename Y> au debut permet de rappeler que le Y existe ici aussi et donc pouvoir l'utiliser sinon ca ne marche pas
{
	_array = new Y[size](); // les () permettent d'init proprement les elements par defaut
	_size = size;
}

template <typename Y> Array<Y>::~Array(void)
{
	delete [] _array;
}

template <typename Y> Array<Y>::Array(const Array<Y> &src)
{
	_array = new Y[src._size]();
	_size = src._size;
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = src._array[i];
}

template <typename Y> Array<Y> &Array<Y>::operator=(const Array<Y> &src)
{
	if (this != &src)
	{
		delete [] _array;
		_array = new Y[src._size]();
		_size = src._size;
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}
	return *this;
}

template <typename Y> unsigned int Array<Y>::size(void) const
{
	return (_size);
}

template <typename Y> Y &Array<Y>::operator[](unsigned int index)
{
	if (index >= _size || _array == NULL)
		throw std::exception();
	return (_array[index]);
}

template <typename Y> Y &Array<Y>::operator[](unsigned int index) const
{
	if (index >= _size || _array == NULL)
		throw std::exception();
	return (_array[index]);
}

int main(void)
{
	Array<int> array_test(10);
	for (unsigned int i = 0; i < 10; i++)
		array_test[i] = i + 2;

	for (unsigned int i = 0; i < 10; i++)
		std::cout << array_test[i] << std::endl;

	return (0);
}