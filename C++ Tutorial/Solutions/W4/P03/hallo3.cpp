#include "hallo3.h"
bool ktsodao(int n)
{
	int t=0,m=n;
	while (n > 0) {
		t = t * 10 + n % 10;
		n /= 10;
	}
	if (t == m) return true;
	else return false;
}
int daoso(int n)
{
	int t=0, m = n;
	while (n > 0) {
		t = t * 10 + n % 10;
		n /= 10;
	}
	return t;
}
void tim()
{
	for (int i = 11;i < 100;i++)
	{
		if (ktsodao(i) == 1 && (ktsodao(i * i)) == 1) cout << i << endl;
	}
}
//neu khong phai la so dao
void cauc(int n)
{
	
	while (ktsodao(n) == 0) {
		int m = n;
		n = daoso(n) + m;
	}
	cout << "ket qua sau khi lam cau c la " << n;
}