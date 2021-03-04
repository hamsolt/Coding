#include "w6.h"
void nhapmang(int a[], int& n)
{
	cout << "nhap n"; cin >> n;
	for (int i = 1;i <= n;i++)
	{
		cout << "nhap a[" << i << "]="; 
		cin >> (a[i]);
	}
}
void xuatmang(int a[], int n)
{
	cout << "Xuat mang:" << endl;
	for (int i = 1;i <= n;i++)
		cout << a[i] << "  ";
}
void bai1(int a[], int n)
{
	int s = 0, sum3 = 0, tong = 0;
	for (int i = 1;i <= n;i++)
	{
		if (a[i] >= 0) s += a[i];
		if (a[i] % 3 == 0) sum3 += a[i];
		if (a[i] != 0) {
			int t = (a[i]), j = 0;
			while (t > 0)
			{
				j = t % 10;
				t /= 10;
			}
			if (j % 2 == 1) tong += a[i];
		}
	}
	cout << "Tong cac phan tu khong am la: " << s << endl;
	cout << "Tong cac phan  tu chia het cho 3 la: " << sum3 << endl;
	cout << "Tong cac phan tu co chu so dau tien la so le la: " << tong << endl;
}
int scp(int n)
{
	int sqr = sqrt(n);
	if (sqr * sqr == n) {
		return 1;
	}
	else {
		return 0;
	}
}
int sohoanchinh(int n)
{
	int sum = 1,m =n;
	for (int i=2;i<n;i++)
	{
		if (n % i == 0) {
			sum = sum + i;
		}
	}
	if (sum ==n) return 1;
	else return 0;
}
int songuyento(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++) if (n % i == 0) dem++;
	if (dem == 2) return 1;
	else return 0;
}
int soduongdoixung(int n)
{
	int s = 0, m = n;
	while (n > 0)
	{
		s = s*10 + n % 10;
		n /= 10;
	}
	if (s == m) return 1;
	else return 0;
}
void bai2(int a[], int n)
{
	int s1 = 0, s2 = 0, s3 = 0, s4 = 0;
	for (int i = 1;i <= n;i++)
	{
		if (scp(a[i]) == 1) s1 += a[i];
		if (sohoanchinh(a[i]) == 1)
		{
			cout << a[i] << endl;
			s2 += a[i];
		}
		if (songuyento(a[i]) == 1) s3 += a[i];
		if (soduongdoixung(a[i]) == 1) s4 += a[i];
	}
	cout << "Tong cac so chinh phuong la: " << s1 << endl;
	cout << "Tong cac so hoan chinh la: " << s2 << endl;
	cout << "Tong cac so nguyen to la: " << s3 << endl;
	cout << "Tong cac so duong doi xung la: " << s4 << endl;
}
void bai3(int a[], int n)
{
	int m = 0; int t = 0;
	for (int i = 1; i <= n;i++) {
		if (a[i] > 0) { m = 1; break; }
		if (a[i] <= 0) { t = 1; break; }
	}
		
	if (m == 1) cout << "Mang chua so duong" << endl;
	else cout << "Mang khong chua so duong" << endl;
	if (t == 1) cout << "Mang chua toan bo so duong" << endl;
	else {
		cout << "Mang khong chua toan bo so duong" << endl;
		for (int i = 1;i <= n;i++) if (a[i] > 0) a[i] = -a[i];
		xuatmang(a, n);
	}
}
int kiemtramangdoixung(int a[], int n)
{
	for (int i = 1;i <= n;i++)
	{
		if (a[i] != a[n - i + 1])
		{
			return 0;
			break;
		}
	}
	return 1;
}
void bai4(int a[], int n)
{
	if (kiemtramangdoixung(a, n) == 1) cout << "La mang doi xung" << endl;
	else cout << "khong la mang doi xung" << endl;
	int m = 0;
	for (int i=1;i<=n-1;i++)
		if ((a[i] > 0 && a[i + 1] > 0) or (a[i] < 0 && a[i + 1] < 0)) {
			m = 1;
			break;
		}
	if (m == 1) cout << "khong la mang am duong"<<endl;
	else cout << "la mang am duong"<<endl;
	int q = 0;
	for (int i = 1;i <= n - 1;i++)
		if (a[i]==a[i+1]) {
			q = 1;
			break;
		}
	if (q == 1) cout << "la mang co cap cac phan tu dung canh nhau co gia tri bang nhau"<<endl;
	else cout << "la mang co cap cac phan tu dung canh nhau co gia tri khac nhau"<<endl;

	int w = 0;
	for (int i = 1;i <= n - 2;i++)
		if (a[i+2]-a[i+1]==a[i+1]-a[i]) {
			w = 1;
			break;
		}
	if (w == 1) cout << "la mang co 3 phan tu dung canh nhau tao thanh mot cap so cong" << endl;
	else cout << "khong la mang co 3 phan tu dung canh nhau tao thanh mot cap so cong" << endl;
}
void bai5(int a[], int n)
{
	int dem = 0;
	for (int i = 1;i <= n;i++)
		if (a[i] < 0) dem++;
	cout << "Mang co " << dem << " so am" << endl;
}
void bai6(int n)
{
	int a[1000];
	// counter for binary array 
	int i = 0;
	while (n > 0) {
		// storing remainder in binary array 
		a[i] = n % 2;
		n = n / 2;
		i++;
	}
	// printing binary array in reverse order 
	for (int j = i - 1; j >= 0; j--)
		cout << a[j];
}
void bai7()
{
	cout << "EM KIET SUC ROI. KHONG GIAI DUOC BAI NAY DAU A" << endl;

}
void bai8(int a[], int n)
{
	int dem1 = 0, s = 0, dem2 = 0; int dem3 = 0, j = 1, b[100];
	for (int i = 1;i <= n;i++)
	{
		if (a[i] % 10 == 6 && a[i] % 6 == 0) dem1++;
		if (songuyento(a[i]) == 1) {
			s += a[i];
			dem2++;			
		}
	}
	cout << "So phan tu co chu so tan cung bang 6 va chia het cho 6 la " << dem1 << endl;
	cout << "Trung binh cong cac so nguyen to co trong mang la" << s / dem2<<endl;
}
void bai9(int a[], int n, int b[], int m)
{
	int c[100];
	int k = 1;
	cout << "nhung phan tu co trong mang A va khong co trong mang B la ";
	for (int i = 1;i <= n;++i)
		for (int j = 1; j <= m; ++j)
		{ 
			if (a[i] == b[j]) break;
			else if (j == m - 1) cout << a[i] << "  ";
		}
			
	/*for (int j = 1; j <= m; j++)
	{
		c[k] = b[j];
		k++;
	}
		
	for (int j=1; j<=k; j++)
		for (int i=1; i<=n; i++)
			if (a[i] != c[j]) {
				k++;
				c[k] = a[i];
			}
	cout << "mang c la ";
	xuatmang(c, k);*/
}