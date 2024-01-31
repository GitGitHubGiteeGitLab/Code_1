#define _CRT_SECURE_NO_WARNINGS
#include "Date.h"
using namespace std;

bool Date::isVaild() const{
	if (_year < 1 || _month < 1 || _month > 12 || _day < 1 || _day > GetMonthDay()) {
		return false;
	}

	return true;
}

std::ostream&
operator<<(std::ostream& os, const Date& d) {
	return os << d._year << '/' << d._month << '/' << d._day;
}

std::istream&
operator>>(std::istream& is, Date& d) {
	bool flag = true;
	do {
		if (!flag) {
			cout << "Illeagal Date! Please Enter again:" << endl;
		}
		cout << "请输入日期->\n年: ";
		is >> d._year;
		cout << "月：";
		is >> d._month;
		cout << "日：";
		is >> d._day;
		flag = false;
	} while (!d.isVaild());
	return is;
}

bool Date::operator<(const Date& d)const {
	if (_year < d._year) {
		return true;
	}
	else if (_year == d._year) {
		if (_month < d._month) {
			return true;
		}
		else if (_month == d._month) {
			return _day < d._day;
		}
	}
	return false;
}
bool Date::operator>(const Date& d)const {
	return !(*this <= d);
}
bool Date::operator==(const Date& d)const {
	return _year == d._year
		&& _month == d._month
		&& _day == d._day;
}

bool Date::operator!=(const Date& d)const {
	return !(*this == d);
}
bool Date::operator<=(const Date& d)const {
	return (*this < d || *this == d);
}
bool Date::operator>=(const Date& d)const {
	return !(*this < d);
}

Date& Date::operator+=(int day) {
	_day += day;
	while (_day > GetMonthDay()) {
		_day -= GetMonthDay();
		++_month;
		if (_month == 13) {
			_year++;
			_month = 1;
		}
	}
	return *this;
}
Date Date::operator+(int day) {
	Date tmp = *this;
	tmp += day;
	return tmp;
}
Date& Date::operator-=(int day) {
	_day -= day;
	while (_day <= 0) {
		--_month;
		if (_month == 0) {
			--_year;
			_month = 12;
		}
		_day += GetMonthDay();
	}
	return *this;
}
Date Date::operator-(int day) {
	Date tmp = *this;
	tmp -= day;
	return tmp;
}


Date& Date::operator++() {
	*this += 1;
	return *this;
}
Date Date::operator++(int) {
	Date tmp = *this;
	*this += 1;
	return tmp;
}

Date& Date::operator--() {
	*this -= 1;
	return *this;
}
Date Date::operator--(int) {
	Date tmp = *this;
	*this -= 1;
	return tmp;
}

int Date::operator-(const Date& d) const {				
	Date max = *this;
	Date min = d;
	int flag = 1;
	if (*this < d) {
		flag = -1;
		max = d;
		min = *this;
		
	}
	int gap= 0;
	//!= 比 < 更优
	while (min != max) {
		++min;
		++gap;
	}
	return gap * flag;
}

