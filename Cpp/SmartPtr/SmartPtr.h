//
// Created by 29217 on 2024/2/16.
//

#ifndef SMARTPTR_SMARTPTR_H
#define SMARTPTR_SMARTPTR_H
#include <iostream>
#include <algorithm>

namespace dhb{
    template<class T>
    class auto_ptr
    {
    public:
        auto_ptr(T* ptr)
            :_ptr(ptr)
        { }

        ~auto_ptr()
        {
            std::cout << "delete:" << _ptr << std::endl;
            delete _ptr;
        }

        auto_ptr(auto_ptr<T>& ap)
            :_ptr(ap._ptr)
        {
            ap._ptr = nullptr;
        }

        T& operator*()
        {
            return *_ptr;
        }

        T* operator->()
        {
           return _ptr;
        }
    private:
        T* _ptr;
    };

    void   test_auto()
    {
        //auto_ptr<int> ap1(new int(2));
        //auto ap2 = ap1;
        //*ap1 = 2; // 管理权转移后ap1悬空，不能解引用
        //*ap2 = 3;
    }

    template<class T>
    class unique_ptr
    {
    public:
        unique_ptr(T* ptr)
                :_ptr(ptr)
        { }

        //防拷贝: c++98,只声明不实现, 且声明为私有
        //c++11直接删除
        unique_ptr(const unique_ptr<T>& up) = delete;
        unique_ptr<T>& operator=(const unique_ptr<T>& up) = delete;
        ~unique_ptr()
        {
            std::cout << "delete:" << _ptr << std::endl;
            delete _ptr;
        }

        T& operator*()
        {
            return *_ptr;
        }

        T* operator->()
        {
            return _ptr;
        }
    private:
        //unique_ptr(const unique_ptr<T>& ptr);
    private:
        T* _ptr;
    };

    void   test_unique()
    {
        unique_ptr<int> ap1(new int(2));
        //auto ap2 = ap1;
        *ap1 = 2; // 管理权转移后ap1悬空，不能解引用
        //*ap2 = 3;
    }

    template<class T>
    class shared_ptr
    {
    public:
        shared_ptr(T* ptr)
            : _ptr(ptr)
             ,_pcount(new int(1))
        { }

        shared_ptr(const shared_ptr<T>& sp)
            : _ptr(sp._ptr)
            , _pcount(sp._pcount)
        {
            (*_pcount)++;

        }

        void swap(shared_ptr<T>& tmp)
        {
            std::swap(_ptr, tmp._ptr);
            std::swap(_pcount, tmp._pcount);
        }

        shared_ptr<T>& operator=(const shared_ptr<T>& sp)
        {
            if(this == &sp)
            {
                return *this;
            }
            shared_ptr<T> tmp(sp);
            swap(tmp);
            return *this;
        }

        ~shared_ptr()
        {
            if(*_pcount == 1)
            {
                std::cout << "delete: " << _ptr << std::endl;
                delete _ptr;
                delete _pcount;
            }
            else{
                (*_pcount)--;
            }
        }

        T& operator*()
        {
            return *_ptr;
        }

        T* operator->()
        {
            return _ptr;
        }
    private:
        T* _ptr;
        int* _pcount;
    };

    void test_shared()
    {
        shared_ptr<int> sp1(new int(1));
        shared_ptr<int> sp2(sp1);
        shared_ptr<int> sp3(new int(2));
        sp1 = sp3;

    }
}


#endif //SMARTPTR_SMARTPTR_H
