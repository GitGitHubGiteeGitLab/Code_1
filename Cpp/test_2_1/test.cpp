#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class A {
public:
	A(int a = 0) 
		:_a(a)
	{
		cout << "A(int a = 0)" << endl;
	}

	A(const A& aa) 
		: _a(aa._a)
	{
		cout << "A(const A& aa)" << endl;
	}

	~A() {
		cout << "~A()" << endl;
	}
private:
	int _a;
	
};

void f1(A aa) {

}

//A f2(){
//
//}
//
//A f3() {
//
//}


int main() {
	
	A aa1 = 2;//构造(implicit conversion) + 拷贝构造-->直接构造
	const A& aa2 = 2;//构造(implicit conversion)，无法优化
	f1(aa1);
	return 0;
}