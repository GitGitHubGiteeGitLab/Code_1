#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"
using namespace std;
int main()
{
	Date d1(2024, 1, 29);
	Date d2(2024, 1, 1);
	cout << d1 << endl;
	cout << d1 + 31 << endl;
	cout << d1 << endl;
	d1 += 31;
	cout << d1 << endl;
	cout << --d2 << endl;
	
	d1 = Date(2024, 1, 29);
	d2 = Date(2024, 8, 1);
	cout << d2 - d1 << endl;
	cin >> d2;
	cout << d2;
	return 0;
}