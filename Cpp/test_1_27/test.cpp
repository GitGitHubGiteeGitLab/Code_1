#include <iostream>
using namespace std;

class Date{
    public:
        Date() : _year(1), _month(1), _day(1) {  }
        Date(int year, int month, int day) : _year(year), _month(month), _day(day) {  }
        ~Date() {}
    //private:
        int _year;
        int _month;
        int _day;
};

ostream&
operator<< (ostream& os, Date d)
{
    os << d._year << '/' << d._month << '/' << d._day ;
    return os;
}

int main()
{
    Date d1;
    cout << d1 << endl;
    Date d2(2024, 1, 27);
    cout << d2 << endl;
    cout << Date() << endl;
    return 0;
}
