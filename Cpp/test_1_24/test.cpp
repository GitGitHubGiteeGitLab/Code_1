#include <iostream> 
#include <vector>
using namespace std;

class A2 {
public:
	void f2()
	{
		cout << "void f2()" << endl;
	}
};

int main()
{
	/*int i = 0;
	int j;*/

	A2 a2;
	A2* p1 = &a2;
	p1->f2();

	// 编译错误
	// 运行错误
	// 正常运行
	A2* p2 = nullptr;
	p2->f2();

	return 0;
}
