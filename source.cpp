#include <iostream>
using namespace std;
int tong(int a, int b)
{
	int c =0;
	a +b =c ;
	return c;
}
int hieu(int a, int b);
{
	int c =0;
	a -b =c ;
	return c;
}

int tich(int a, int b);
{
	int c =0;
	a *b =c ;
	return c;
}
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan;
	system("pause");
	return 0;
}