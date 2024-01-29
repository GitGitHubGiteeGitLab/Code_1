#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Date {
public:
	Date(int year = 1, int month = 1, int day = 1)
		: _year(year), _month(month), _day(day)
	{ }
	
	bool operator<(const Date& d)const;
	bool operator>(const Date& d)const;
	bool operator==(const Date& d)const;
	bool operator!=(const Date& d)const;

	bool operator<=(const Date& d)const;
	bool operator>=(const Date& d)const;

	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day);


	Date& operator++();
	Date operator++(int);

	Date& operator--();
	Date operator--(int);

	int operator-(const Date& d) const;
	int GetMonthDay() {
		static int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30 ,31, 30, 31 };
		if (_month == 2 && ((_year % 4 == 0 && _year % 100) || _year % 400 == 0)) {
			return 29;
		}
		return monthday[_month];
	}
private:
	int _year, _month, _day;
	friend std::ostream&
	operator<<(std::ostream& os, Date d);
};

