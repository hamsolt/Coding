#include "hallo4.h"
int main()
{	
	int x, n;
	cout << "nhap x="; cin >> x;
	cout << "nhap n="; cin >> n;
	cout << "cos(" << x << ")="<<cham1(n,x)<<endl;
	cout << "arccotan(" << x << ")=" << cham2(n, x) << endl;
	cout << "arctan(" << x << ")=" << cham3(n, x) << endl;
	cout << "e^" << x << "=" << cham4(n, x) << endl;
	cout << "ln(1+" << x << ")=" << cham5(n, x) << endl;
	cout << "ln((1+" << x << ")/(1-"<<x<<")=" << cham6(n, x) << endl;
	cout << "sin(" << x << ")=" << cham7(n, x) << endl;
	
	return 0;
}