export module hello;

export import :helper.decl;
export import :helper.impl.a;
export import :helper.impl.b;

export namespace hello
{

void greet();

} // export namespace hello

// vim:ft=cpp

