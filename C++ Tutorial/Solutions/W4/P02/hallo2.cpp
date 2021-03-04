#include "hallo2.h"
int dem(int n)
{
	int dem = 0, s = 0, t = 0, m = n;
	while (n > 0) {
		t = t * 10 + n % 10;
		n = n / 10;
		dem++;
	}
	return dem;
}
bool amstrong(int n)
{
	int m=n, s = 0;
	while (n > 0) {
		s = s + pow(n % 10, dem(m));
		n /= 10;
	}
	if (m == s) return true;
	else return false;
}
void lietke(int n)
{
	
}