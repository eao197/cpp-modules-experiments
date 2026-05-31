module;

#include <iostream>
#include <typeinfo>

export module hello:helper.impl.b;

import :helper.decl;

export namespace hello
{

template<typename T>
void
helper<T>::b()
{
	std::cout << "helper<" << typeid(T).name() << ">::a()" << std::endl;
}

} /* namespace hello */

// vim:ft=cpp

