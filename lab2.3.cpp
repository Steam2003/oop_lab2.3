#include "Point.h"

int main()
{
	Point A;
	cin >> A;
	Point B(1, 2);
	Point C = Point(B);
	cout << "A " <<A;
	cout << "B " <<B;
	cout << "C " <<C;
	cout << "B is equal C?" << endl;
	B.isEqual(C);
	cout << A.GetX() << endl;
	A.SetX(5);
	cout << (string)A;
	cout << "++A " << ++A;
	cout << "A-- " << A--;
	cout << A;
}