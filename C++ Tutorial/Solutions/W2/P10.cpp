#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int d, m, y,ngay, thang, nam;
	cout << "nhap ngay " << endl;
	cin >> d;
	cout << "nhap thang " << endl;
	cin >> m;
	cout << "nhap nam " << endl;
	cin >> y;
	ngay = d; thang = m; nam = y;
	switch (m) {
	case 1: case 3: case 5: case 7: case 8: case 10:case 12:
		if (d > 0 && d <= 31) {
			cout << "ngay thang nam hop le"<<endl;
			cout << "thang nhap co 31 ngay" << endl;
			break;
		}
		else {
			cout << "ngay thang nam khong hop le " << endl;
			break;
		}
	case 4: case 6: case 9: case 11:
		if (d > 0 && d < 30) {
			cout << "ngay thang nam hop le" << endl;
			cout << "thang nhap co 30 ngay"<<endl;
			break;
		}
		else {
			cout << "ngay thang nam khong hop le" << endl;
			break;

		}
	case 2:
		if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
			if (d > 0 && d <= 29) {
				cout << "ngay thang nam hop le" << endl;
				cout << "thang nhap co 29 ngay" << endl;
				break;
			}
			else {
				cout << "ngay thang nam khong hop le" << endl;
				break;
			}
		}
		else {
			if (d > 0 && d < 28) {
				cout << "ngay thang nam hop le"<<endl;
				cout << "thang nhap co 28 ngay" << endl;
				break;
			}
			else {
				cout << "ngay thang nam khong hop le" << endl;

				break;
			}
		}
	}

	if (d > 0 && d < 28)	
		d += 1;
	if (d == 28)
	{
		if (m ==2)
		{
			if ((y % 400 == 0) || (y % 100 != 0 || y % 4 == 0))	
			{
				d = 29;
			}
			else
			{
				d = 1;
				m = 3;
			}
		}
		else	
			d += 1;
	}
	if (d == 29)	
	{
		if (m == 2)
		{
			d = 1;
			m = 3;
		}
		else
			d += 1;
	}
	if (d == 30)	
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			d += 1;
		else
		{
			d = 1;
			m += 1;
		}
	}
	if (d == 31)	
	{
		d = 1;
		if (m == 12)
		{
			y += 1;
			m = 1;
		}
		else
			m += 1;
	}
	cout << "Ngay hom sau "<<endl;
	if (d < 10)	
	{
		cout << "0" << d << " ";
	}
	else
		cout << d << " ";
	if (m < 10)	
	{
		cout << "0" << m << " ";
	}
	else
		cout << m << " ";
	cout << y;
	cout << endl;
	
	//ngay hom truoc
	
	if (ngay == 1 && thang == 1)
	{
		ngay = 31;
		thang = 12;
		nam--;
	}
	else if (ngay <= 31 && ngay >= 2)
	{
		ngay--;
	}
	else if ((thang == 1 || thang == 7 || thang == 5 || thang == 8 || thang == 10 || thang == 12) &&(ngay=1))
	{
		ngay = 31;
		thang--;
	}
	else if (thang == 3 && ngay==1)
	{
		if ((nam % 400 == 0) || (nam % 100 != 0 || nam % 4 == 0))
		{
			ngay = 29;
		}
		else { ngay = 28; }
		thang = 2;
	}

	
	else if (thang==2 ||thang==4 ||thang==6||thang==9||thang==11 &&ngay==1)
	{
		ngay = 31;
		thang--;
	}
	
	cout << "Ngay hom truoc " << endl;
	if (ngay < 10)
	{
		cout << "0" << ngay << " ";
	}
	else
		cout << ngay << " ";
	if (thang < 10)
	{
		cout << "0" << thang << " ";
	}
	else
		cout << thang << " ";
	cout << nam;
	_getch();
	return 0;
}