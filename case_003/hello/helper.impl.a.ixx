module;

#include <iostream>
#include <typeinfo>

export module hello:helper.impl.a;

import :helper.decl;

export namespace hello
{

template<typename T>
void
helper<T>::a()
{
	std::cout << "helper<" << typeid(T).name() << ">::a()" << std::endl;
}

} /* namespace hello */

// vim:ft=cpp

