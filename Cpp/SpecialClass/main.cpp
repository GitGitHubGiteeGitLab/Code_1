#include <iostream>
#include <vector>
class HeapOnly
{
public:
    static HeapOnly* CreateObj(int x = 0)
    {
        HeapOnly* p = new HeapOnly(x);
        return p;
    }
private:
    HeapOnly(int x = 0)
        :_x(x)
    { }
    HeapOnly(const HeapOnly&);
    HeapOnly& operator=(const HeapOnly&);
private:
    int _x;
};

class StackOnly
{
public:
    static StackOnly CreateOnly(int x = 0)
    {
        return StackOnly(x);
    }

    StackOnly(StackOnly&& st)
        :_x(st._x)
    { }

    void* operator new(size_t size) = delete;
    void operator delete(void* p) = delete;

private:
    StackOnly(int x = 0)
        :_x(x)
    { }

    StackOnly(const StackOnly& st) = delete;
private:
    int _x = 0;
};

// C++98中构造函数私有化，派生类中调不到基类的构造函数。则无法继承
class NonInherit
{
public:
    static NonInherit GetInstance()
    {
        return NonInherit();
    }
private:
    NonInherit()
    {}
};

class Singleton
{
public:
   Singleton* GetInstance()
   {
        return _ins;
   }
private:
    Singleton()
    { }
private:
    int _n = 0;
    std::vector<int> _v;
    static Singleton* _ins;
};

Singleton* Singleton::_ins  = new Singleton();
int main() {
    HeapOnly* heap = HeapOnly::CreateObj(2);
    delete heap;
    StackOnly stack = StackOnly::CreateOnly(3);


    return 0;
}
