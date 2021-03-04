#include <iostream>
using namespace std;

int main()
{
	int n; double x;
	cout << "Nhap so nguyen duong n va so thuc x " << endl;
	cin >> n >> x;
	cout << pow((pow(x, 2) + 1), n);
	return 0;
}

