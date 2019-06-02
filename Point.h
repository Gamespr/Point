#ifndef POINT_H
#define POINT_H
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Point
{
private:
	int a, b;
public:
	Point();
	Point(int, int);
	Point add(Point);
	Point subtract(Point);
	Point multiply(Point);
	string toString();
	Point operator+(Point);
	Point operator-(Point);
	Point operator*(Point);
	friend ostream& operator<<(ostream&, Point&);
	friend istream& operator>>(istream&, Point&);
	int operator[](int);
	Point operator+=(Point);
	Point operator-=(Point);
	Point operator*=(Point);
	Point &operator++();
	Point &operator--();
	Point operator+();
	Point operator-();
};
#endif