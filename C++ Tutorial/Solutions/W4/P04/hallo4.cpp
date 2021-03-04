#include "hallo4.h"
int gt(int n)
{
	int s = 1;
	for (int(i) = 1;i <= n;i++)
	{
		s = s * i;
	}
	return s;
}
float cham1(int n, int x)
{
	float s = 0;
	for (int i = 0;i <= n;i++)
	{
		s = s + (pow((-1), i) / gt(2 * i))*pow(x,2*i);
	}
	return s;
}
float cham2(int n, int x)
{
	float s = 3.14 / 2;
	for (int i = 0;i <= n;i++)
	{
		s = s - (pow((-1), i) / (2 * i + 1)) * pow(x, 2 * i + 1);
	}
	return s;
}
float cham3(int n, int x)
{
	float s=0;
	for (int i = 1;i <= n;i++)
	{
		s = s + (pow((-1), i + 1) / (2 * i - 1))* pow(x, 2 * i - 1);
	}
	return s;
}
float cham4(int n, int x)
{
	float s = 0;
	for (int i = 0;i <= n;i++)
	{
		s = s + (1 / gt(i)) * pow(x, i);
	}
	return s;
}
float cham5(int n, int x)
{
	float s = 0;
	for (int i = 1;i <= n;i++)
	{
		s = s + pow((-1), (i + 1)) / i * pow(x, i);
	}
	return s;
}
float cham6(int n, int x)
{
	float s = 0;
	for (int i = 1;i <= n;i++)
	{
		s = s + (2 / (2 * i - 1)) * pow(x, 2 * i - 1);
	}
	return s;
}
float cham7(int n, int x)
{
	float s = 0;
	for (int i = 0;i <= n;i++)
	{
		s = s + (pow((-1), i) / gt(2 * i + 1)) * pow(x, 2 * i + 1);
	}
	return s;
}