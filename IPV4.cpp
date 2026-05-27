#include <iostream>

class IPV4Address 
{
private:
	unsigned char a;
	unsigned char b;
	unsigned char c;
	unsigned char d;
public:
	IPV4Address(unsigned char _a, unsigned char _b, unsigned char _c, unsigned char _d) :
		a(_a),
		b(_b),
		c(_c),
		d(_d)
	{}

	unsigned char get_a() const 
	{ 
		return a;
	}
	unsigned char get_b() const 
	{ 
		return b; 
	}
	unsigned char get_c() const 
	{ 
		return c; 
	}
	unsigned char get_d() const 
	{ 
		return d;
	}

	void set_a(unsigned char _a) 
	{ 
		a = _a; 
	}
	void set_b(unsigned char _b) 
	{ 
		b = _b; 
	}
	void set_c(unsigned char _c) 
	{
		c = _c; 
	}
	void set_d(unsigned char _d) 
	{ 
		d = _d; 
	}
};

class Request 
{
private:
	IPV4Address origin;
public:
	Request(const IPV4Address& _origin) 
		: origin(_origin)
	{
	}
	IPV4Address get_origin() const
	{
		return origin;
	}
	void log()
	{
		std::cout<< "Request of unknown type from " << origin.get_a() << "." << origin.get_b() << "." << origin.get_c() << "." << origin.get_d() << std::endl;
	}
};