module;

#include <iostream>
#include <typeinfo>

module hello;

namespace hello
{

template<typename T>
void
helper<T>::a()
{
	std::cout << "helper<" << typeid(T).name() << ">::a()" << std::endl;
}

} /* namespace hello */


