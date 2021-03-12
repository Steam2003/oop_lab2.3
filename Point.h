#pragma once
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Point
{
private:
	double x;
	double y;
public:
	Point();
	Point(double a, double b);
	Point(const Point& A);
	friend ostream& operator << (ostream& out, const Point& A);
	friend istream& operator >> (istream& in, Point& A);
	operator string() const;
	void SetX(double value) { x = value; };
	void SetY(double value) { y = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	void toPolar() const;
	void Distance() const { cout << "Polar radius: " << sqrt(x * x + y * y) << endl; };
	void isEqual(const Point& A) const;
	Point& operator --();
	Point& operator ++();
	Point operator --(int);
	Point operator ++(int);
};

