#include <iostream>
#include <fstream>
using namespace std;
int sochinhphuong(int n)
{
	int temp = sqrt(n);
	if (temp* temp == n) return 1;
	else return 0;
}

int main()
{
	int n;
	int a[100];
	ifstream in;
	in.open("mang.txt");
	if (!in.is_open()) {
		cout << "loi tao tep tin....";
	}
	else {
		cout << "Reading from the file contents are: " << endl;
		in >> n;
		for (int i = 0; i < n; i++)
			in >> a[i];
	}
	in.close();



	int dem = 0; int b[100];
	for (int i = 0; i < n; i++)
	{
		if (sochinhphuong(a[i]) == 1) {
			dem++;
			b[dem] = a[i];
		}
	}
	
	cout << endl;
	cout << "co " <<  dem << " so chinh phuong" << endl;
	int min = 26122002;
	for (int i = 0; i < n; i++)
		if (sochinhphuong(a[i]) == 1 && a[i] < min) {
			min=a[i];
		}
	if (min == 26122002) cout << "khong co so chinh phuong trong mang" << endl;
	else cout << "so chinh phuong nho nhat la " << min << endl;

	
	ofstream out;
	out.open("mang.txt");
	if (!out) {
		cout << "loi tao tep tin..... ";
	}
	else {
		cout << "Da luu ket qua vao mang.txt";
		out << n << endl;
		for (int i = 0; i < n; i++) out << a[i] << "  ";
		out << endl;
		for (int i = 1; i < dem + 1; i++) out << b[i] << '\t';
	}
	out.close();
		
	return 0;
}