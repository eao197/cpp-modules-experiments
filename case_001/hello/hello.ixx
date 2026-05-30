module;

#include <iostream>
#include <typeinfo>

export module hello;

export namespace hello
{

void greet();

template<typename T>
struct helper
{
	static void
	a();

	static void
	b();
};

template<typename T>
void
helper<T>::a()
{
	std::cout << "helper<" << typeid(T).name() << ">::a()" << std::endl;
}

template<typename T>
void
helper<T>::b()
{
	std::cout << "helper<" << typeid(T).name() << ">::a()" << std::endl;
}

} // export namespace hello

// vim:ft=cpp

