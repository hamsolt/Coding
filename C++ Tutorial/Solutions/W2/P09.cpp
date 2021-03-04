#include <iostream>
using namespace std;

int main()
{
	int th;
	cout << "moi nhap thang" << endl;
	cin >> th;
	if (th <= 0 || th > 12) {
		cout << "thang nhap khong hop le" << endl;
	}
	else if (th <= 3) {
		cout << "mua xuan" << endl;
	}
	else if (th <= 6) {
		cout << "mua ha" << endl;
	}
	else if (th <= 9) {
		cout << "mua ha" << endl;
	}
	else cout << "mua dong";
	return 0;
}