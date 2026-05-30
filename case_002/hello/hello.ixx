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

} // export namespace hello

// vim:ft=cpp

