#include "Point.h"

int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	Point p1(a, b);
	Point p2(c, d);
	Point p3(e, f);
	Point point = p1 + p2 - p3;
	cout << p1 << "+" << p2 << "-" << p3 << "=" << point;
	system("pause");
}