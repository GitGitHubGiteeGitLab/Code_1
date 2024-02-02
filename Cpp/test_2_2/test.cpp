#include<iostream>
using namespace std;

class A
{
public:
	A(int a = 0)
		: _a(a)
	{
		cout << "A():" << this << endl;
	}

	~A()
	{
		cout << "~A():" << this << endl;
	}
private:
	int _a;
};

class Stack
{
public:
	Stack()
	{
		_a = (int*)malloc(sizeof(int) * 4);
		_top = 0;
		_capacity = 4;
	}

	~Stack()
	{
		free(_a);
		_top = _capacity = 0;
	}
private:
	int* _a;
	int _top;
	int _capacity;
};

//int main()
//{
//	//int* p1 = (int*)operator new(10 * 4);
//
//	A* ptr1 = new A;  // operator new + 1次构造
//	A* ptr2 = new A[10]; // operator new[] + 10次构造
//
//	//cout << sizeof(A) << endl;
//	delete ptr1; // 1次析构 + operator delete
//	delete[] ptr2; // 10次析构 + operator delete[]
//
//	Stack* pst = new Stack;
//	delete pst;
//
//	int* p1 = new int[10];
//
//	return 0;
//}

// 记住，一定要匹配使用，不匹配结果是不确定的
// 16：05
//int main()
//{
//	int* p1 = new int[10];
//	delete p1;
//
//	A* p2 = new A[10];
//	delete p2;
//
//	return 0;
//}

//int main()
//{
//	A* p2 = (A*)operator new(sizeof(A));
//	// 内存池
//	// 显示调用构造函数对一块已经有的空间初始化
//	new(p2)A(1);
//
//	p2->~A();
//	operator delete(p2);
//
//	return 0;
//}

//int main()
//{
//	// 内存泄漏：一块已经不再使用的空间，没有释放
//	// 内存泄漏危害？
//	int* p1 = new int[1024 * 1024 * 100];
//	int* p2 = new int[1024 * 1024 * 100];
//	int* p3 = new int[1024 * 1024 * 100];
//	cout << p1 << endl;
//	cout << p2 << endl;
//	cout << p3 << endl;
//
//	return 0;
//}

//void Swap(int& left, int& right)
//{
//	int temp = left;
//	left = right;
//	right = temp;
//}
//
//void Swap(double& left, double& right)
//{
//	double temp = left;
//	left = right;
//	right = temp;
//}
//
//void Swap(char& left, char& right)
//{
//	char temp = left;
//	left = right;
//	right = temp;
//}

// 模板
// 函数模板
//template<typename T>
// 编译通过推出类型，用函数模板，生成对应的函数，这个过程叫做模板实例化
template<class T>
void Swap(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

// 17:25继续
//int main()
//{
//	int a = 1, b = 2;
//	Swap(a, b);
//
//	//std::swap(a, b);
//	swap(a, b);
//
//	double d1 = 1.1, d2 = 2.2;
//	Swap(d1, d2);
//
//
//
//	return 0;
//}

//template<class T>
//T Add(const T& left, const T& right)
//{
//	return left + right;
//}
//
//// 通用加法函数
//template<class T1, class T2>
//T1 Add(T1 left, T2 right)
//{
//	return left + right;
//}
//
//int main()
//{
//	int a1 = 10, a2 = 20;
//	double d1 = 10.1, d2 = 20.2;
//	cout << Add(a1, a2) << endl;
//	cout << Add(a1, a2) << endl;
//
//	// 存在歧义
//	// 推演
//	cout << Add(a1, d2) << endl;
//	cout << Add((double)a1, d2) << endl;
//	cout << Add(a1, (int)d2) << endl;
//
//	// 显示实例化
//	cout << Add<int>(a1, d2) << endl;
//	cout << Add<double>(a1, d2) << endl;
//
//	return 0;
//}


template<class T>
T Add(const T& left, const T& right)
{
	return left + right;
}

int Add(const int& left, const int& right)
{
	return left + right;
}

// 类模板
template<class T>
class Stack
{
public:
	void Push(const T& x)
	{}
private:
	T* _a;
	int _top;
	int _capacity;
};

int main()
{
	int a1 = 10, a2 = 20;
	double d1 = 10.1, d2 = 20.2;
	// 1、有现成，吃现成的 （匹配）
	cout << Add(a1, a2) << endl;

	// 2、有现成的，但是不够匹配，有模板，就会选择自己实例化模板
	cout << Add(d1, d2) << endl;

	// 强制调用模板
	cout << Add<int>(a1, a2) << endl;

	Stack<int> st1;
	Stack<double> st2;

	vector<int>
		list<double>

	return 0;
}