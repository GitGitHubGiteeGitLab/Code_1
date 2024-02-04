#pragma once
#include <iostream>
#include <algorithm>
#include <assert.h>
#include <string.h>
#include "iterator.h"
using std::cout;
using std::endl;
using std::find;
namespace dhb {
	template<class T>
	class vector {
	public:
		typedef T* iterator;
		typedef const T* const_iterator;
		typedef ReverseIterator<iterator, T&, T*> reverse_iterator;
		vector()
			:_start(nullptr), _finish(nullptr), _end_of_storage(nullptr)
		{ }         

		vector (size_t n, const T& val = T())
			: vector()
		{
			reserve(n);
			for (size_t i = 0; i < n; i++)
			{
				push_back(val);
			}
		}

		vector(int n, const T& val = T())
			: vector()
		{
			reserve(n);
			for (int i = 0; i < n; i++)
			{
				push_back(val);
			}
		}
		// [first, last)
		template <class InputIterator>
		vector(InputIterator first, InputIterator last)
			: vector()
		{
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		//vector(const vector<T>& v) {
		//	reserve(v.capacity());
		//	/*for (const auto& e : v) {
		//		push_back(e);
		//	}*/
		//	for (size_t i = 0; i < v.size(); i++) {
		//		_start[i] = v._start[i];
		//	}
		//	_finish = _start + v.size();
		//	_end_of_storage = _start + v.capacity();
		//	/*memcpy(_start, v._start, v.size() * sizeof(T));wrong->shadow copy*/
		//	/*_finish = _start + v.size();*/
		//}

		//未初始化，析构时会引起严重问题delete[]了不属于自己的空间（不是nullptr）-->野指针
		vector(const vector<T>& v)
			:vector()
		{
			vector<T> tmp(v.begin(), v.end());
			swap(tmp);
		}
		/*vector<T>& operator=(const vector<T>& v) {
			if (this == &v) {
				return *this;
			}
			this->~vector();
			reserve(v.capacity());
			for (size_t i = 0; i < v.size(); ++i) {
				_start[i] = v._start[i];
			}
			_finish = _start + v.size();
			_end_of_storage = _start + v.capacity();
		}*/

		void swap(vector<T>& v) {
			std::swap(_start, v._start);
			std::swap(_finish, v._finish);
			std::swap(_end_of_storage, v._end_of_storage);
		}

		//现代写法 copy and write
		vector<T>& operator=(vector<T> v) {
			swap(v);
			return *this;
		}
		
		/*vector<T>& operator=(const vector<T>& v) {
			if (this != &v) {
				vector<T> tmp(v.begin(), v.end());
				swap(tmp);
			}
			return *this;
		}*/

		~vector()
		{
			delete[] _start;
			_start = _finish = _end_of_storage = nullptr;
		}

		iterator begin() {
			return _start;
		}

		iterator end() {
			return _finish;
		}

		const_iterator begin() const {
			return _start;
		}

		const_iterator end() const {
			return _finish;
		}

		reverse_iterator rbegin() {
			return reverse_iterator(end());
		}

		reverse_iterator rend() {
			return reverse_iterator(begin());
		}

		void resize(size_t n, const T& val = T()) {
			if (n <= size()) {
				_finish = _start + n;
			}
			else {
				if (n > capacity()) {
					reserve(n);
				}
				while (_finish != _start + n) {
					*_finish = val;
					++_finish;
				}
			}
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				T* tmp = new T[n];
				size_t sz = size();
				if (_start) {
					for (size_t i = 0; i < sz; ++i) {
						tmp[i] = _start[i];
					}
					delete[] _start;
				}
				_start = tmp;
				_finish = _start + sz;
				_end_of_storage = _start + n;
			}
		}

		T& operator[](size_t pos) {
			assert(0 <= pos && pos < size());
			return _start[pos];
		}

		const T& operator[](size_t pos) const
		{
			assert(0 <= pos && pos < size());
			return _start[pos];
		}
		void push_back(const T& x)
		{
			if (_finish == _end_of_storage) {
				if (capacity() == 0) {
					reserve(4);
				}else {
					reserve(capacity() * 2);
				}
			}
			*_finish = x;
			++_finish;
		}

		void pop_back() {
			assert(!empty());
			--_finish;
		}

		iterator insert(iterator pos, const T& val) {
			assert(_start <= pos && pos <= _finish);
			
			if (_finish == _end_of_storage) {
				size_t len = pos - _start;
				if (capacity() == 0) {
					reserve(4);
				}
				else {
					reserve(2 * capacity());
				}
				
				pos = _start + len;
			}
			
			for (auto end = _finish; end != pos; --end)
			{
				*end = *(end - 1);
			}
			*pos = val;
			++_finish;
			return pos;
		}

		iterator erase(iterator pos) {
			assert(_start <= pos && pos < _finish);
			for (auto it = pos + 1; it != _finish; it++)
			{
				*(it - 1) = *it;
			}
			_finish -= 1;
			return pos;
		}

		size_t capacity() const
		{
			return _end_of_storage - _start;
		}

		size_t size() const
		{
			return _finish - _start;
		}
		bool empty() const {
			return _start == _finish;
		}

		T& back(){
			return _start[size() - 1];
		}
	private:
		iterator _start;
		iterator _finish;
		iterator _end_of_storage;
	};

	class Solution {
	public:
		vector<vector<int>> generate(int numRows) {
			vector<vector<int>> ans;
			ans.resize(numRows, vector<int>());
			for (size_t i = 0; i < ans.size(); ++i)
			{
				ans[i].resize(i + 1, 0);
				ans[i][0] = ans[i].back() = 1;
			}

			for (size_t i = 2; i < ans.size(); ++i)
			{
				for (size_t j = 1; j < ans[i].size() - 1; ++j)
				{
					ans[i][j] = ans[i - 1][j] + ans[i - 1][j - 1];
				}
			}
			return ans;
		}
	};

	template<typename T>
	void display(const vector<T>& v) {
		for (const auto& e: v) {
			cout << e << ' ';
			
		}
		cout << endl;
	}

	void test_vector()
	{
		/*vector<int>v1;
		v1.push_back(10);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);
		v1.push_back(50);
		display(v1);

		auto it = v1.begin();
		while (it != v1.end()) {
			if (*it % 2 == 0) {
				v1.erase(it);
			}
			else {
				++it;
			}
		}
		display(v1);

		vector<int> v2(v1.begin(), v1.end());
		display(v2);

		std::string s("hello world");
		vector<char> v3(s.begin(), s.end());
		display(v3);*/

		int arr[] = { 4, 3, 2, 1 };
		/*
		vector<int> v4(arr, arr + 4);
		display(v4);

		vector<int> v5(arr, arr + 4);
		std::sort(v5.begin(), v5.end());
		display(v5);

		std::sort(v5.begin(), v5.end(), std::greater<int>());
		display(v5);

		vector<int> v6(v5);
		display(v6);

		vector<std::string> v7(3, "11111111");
		display(v7);

		vector<std::string> v8(v7);
		display(v8);*/

		vector<int> v0(arr, arr + 4);

		vector<vector<int>> v9(1,v0);
		for (const auto& e : v9)
		{
			display(e);
		}

		vector<vector<int>> ret = Solution().generate(8);
		for (size_t i = 0; i < ret.size(); ++i)
		{
			for (size_t j = 0; j < ret[i].size(); ++j)
			{
				cout << ret[i][j] << ' ';
			}
			cout << endl;
		}
		cout << endl;
	}

	void test_vector2() {
		vector<int>v1;
		v1.push_back(10);
		v1.push_back(2);
		v1.push_back(3);
		v1.push_back(4);
		v1.push_back(5);
		v1.push_back(50);
		display(v1);
		for (auto rit = v1.rbegin(); rit != v1.rend(); ++rit) {
			cout << *rit << ' ';
		}
		cout << endl;
	}
}
