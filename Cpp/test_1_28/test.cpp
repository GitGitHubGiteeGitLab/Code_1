#include<iostream>
using namespace std;

class Date{
    public:
        Date(int year = 1, int month = 1, int day = 1)
            : _year(year), _month(month), _day(day)
        {  }
        Date(const Date& d)
        {
            _year = d._year;
            _month = d._month;
            _day = d._day;
        }
        bool operator == (const Date& d)const{
           return this->_year == d._year 
                && this->_month == d._month
                && this->_day == d._day;
        }
        bool operator < (const Date& d) const {
            if(_year < d._year){
                return true;
            }else if(_year == d._year){
                if(_month < d._month){
                    return false;
                }else if(_month == d._month){
                    return _day < d._day;
                }
            }
            return false;
        }
        int getYear() const {
            return _year;
        }
        int getMonth() const{
            return _month;
        }
        int getDay() const{
            return _day;
        }
    private:
        int _year, _month, _day;
    
};

ostream& 
operator << (ostream& os, const Date& d)
{
    return os << d.getYear() << '/' << d.getMonth() << '/' << d.getDay() ;
}

int main()
{
    Date d1(2024, 1, 28);
    cout << d1 << endl;
    Date d2(d1);
    cout << d2 << endl;
    cout <<  (d1 == d2) << endl;
    cout << (d1 < d2) << endl;
    return 0;
}
