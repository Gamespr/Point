#include "Point.h"

Point::Point()
{
	a = 0;
	b = 0;
}

Point::Point(int a, int b)
{
	this->a = a;
	this->b = b;
}

Point Point::add(Point complex)
{
	return Point(a + complex.a, b + complex.b);
}

Point Point::subtract(Point complex)
{
	return Point(a - complex.a, b - complex.b);
}

Point Point::multiply(Point complex)
{
	return Point(a*complex.a - b * complex.b, a*complex.b + b * complex.a);
}

string Point::toString()
{
	stringstream s1, s2;
	s1 << a;
	s2 << b;
	return "("+s1.str() + ","+s2.str() + ")";
}

Point Point::operator+(Point complex)
{
	return Point(a + complex.a, b + complex.b);
}

Point Point::operator-(Point complex)
{
	return Point(a - complex.a, b - complex.b);
}

Point Point::operator*(Point complex)
{
	return Point(a*complex.a - b * complex.b, a*complex.b + b * complex.a);
}

int Point::operator[](int d)
{
	if (d == 0)
		return a;
	else if (d == 1)
		return b;
}

Point Point::operator+=(Point complex)
{
	return Point(a + complex.a, b + complex.b);
}

Point Point::operator-=(Point complex)
{
	return Point(a - complex.a, b - complex.b);
}

Point Point::operator*=(Point complex)
{
	return Point(a*complex.a - b * complex.b, a*complex.b + b * complex.a);
}

ostream& operator<<(ostream &out, Point &complex)
{
	out << "("<<complex.a<<",";
	if (complex.b > 0)
		out  << complex.b<<")";
	else
		out << complex.b<<")";
	return out;

}

istream & operator>>(istream &in, Point &complex)
{
	in >> complex.a >> complex.b;
	return in;
}

Point &Point::operator++()
{
	a++;
	return *this;
}

Point &Point::operator--()
{
	a--;
	return *this;
}

Point Point::operator+()
{
	return Point(a, b);
}

Point Point::operator-()
{
	return Point(-a, -b);
}
