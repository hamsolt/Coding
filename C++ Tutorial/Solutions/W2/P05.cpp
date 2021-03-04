#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main()
{
	int km, fee;
	cout << "So km taxi di duoc la " << endl;
	cin >> km;
	fee = 15000 + (13500 * 5) + ((km - 6) * 11000);
	//cout << fee;
	if (km <= 1) {
		cout << "15000 vnd";
	}
	else if ((2<=km) && (km < 6)) {
		cout << (15000 + 13500 * (km - 1)) << " vnd";
	}
	else if ((km >= 6) && (km <= 120)) {
		cout << fee << "d";
	}
	else if (km > 120) {
		cout << setprecision(0) << fixed << fee * 0.9 << " vnd";
	}
	_getch();
	return 0;
}

