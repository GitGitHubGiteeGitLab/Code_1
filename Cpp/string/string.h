#pragma once
#include<string.h>
#include<iostream>
#include<assert.h>
namespace dhb {
	class string 
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;
		iterator begin() {
			return _str;
		}
		iterator end() {
			return _str + _size;
		}
		const_iterator begin() const{
			return _str;
		}
		const_iterator end() const{
			return (_str + _size);
		}
		/*string() 
			: _str(new char[1]), _size(0), _capacity(0)
		{ 
			_str[0] = '\0';
		}*/
		//const char* str = nullptr不可以，空指针解引用，
		// const char* str ='\0'不可以，隐式类型转换，还是空指针
		string(const char* str = "")
			:_size(strlen(str))
		{
			//_capacity不包括'\0'
			_capacity = _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		string(const string& s) 
			: _size(s._size), _capacity(s._capacity)
		{
			_str = new char[_capacity + 1];
			strcpy(_str, s._str);
		}

		~string() {
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}
		const char* c_str() const{
			return _str;
		}

		const char& operator[](size_t pos) const {
			assert( 0 <= pos && pos < _size);
			return _str[pos];
		}

		char& operator[](size_t pos) {
			assert(0 <= pos && pos < _size);
			return _str[pos];
		}
		
		string& operator=(const string& s) {
			if (this == &s) {
				return *this;
			}

			
			char* tmp = new char[s._capacity + 1];
			strcpy(tmp, s._str);

			delete[] _str;
			_str = tmp;
			_size = s._size;
			_capacity = s._capacity;
			return *this;
		}

		bool operator==(const string& s)const {
			return !strcmp(_str, s._str);
		}

		bool operator!=(const string& s)const {
			return !(*this == s);
		}

		bool operator>(const string& s)const {
			return strcmp(_str, s._str) > 0;
		}

		bool operator >=(const string& s)const {
			return !(*this < s);
		}
		bool operator<(const string& s)const {
			return !(*this == s || *this > s);
		}
		bool operator<=(const string & s)const {
			return !(*this > s);
		}

		void reserve(size_t n) {
			//避免缩容
			if (_capacity >= n) {
				return;
			}
			char* tmp = new char[n + 1];
			strcpy(tmp, _str);
			delete[] _str;
			_str = tmp;
			_capacity = n;
		}

		void resize(size_t n, char ch = '\0') {
			if (n <= _size) {
				_size = n;
				_str[_size] = '\0';
			}
			else {
				if (n > _capacity) {
					reserve(n);
				}
				memset(_str + _size, ch,(n - _size)*sizeof(char));
				_size = n;
				_str[_size] = '\0';
			}
		}

		void push_back(char ch) 
		{
			if (_size + 1 > _capacity) {
				if (_capacity == 0) {
					reserve(1);
				}
				reserve(_capacity * 2);
			}
			_str[_size++] = ch;
			_str[_size] = '\0';
		}

		void append(const char* str) {
			size_t len = strlen(str);
			if (_size + len > _capacity) {
				reserve(_size + len);
			}
			strcpy(_str+_size, str);
			_size += len;
		}

		string& operator+=(char ch) {
			push_back(ch);
			return *this;
		}

		string& operator+=(const char* str) {
			append(str);
			return *this;
		}

		string& insert(size_t pos, char ch) {
			assert(0 <= pos && pos <= _size);
			if (_size + 1 > _capacity) 
			{
				if (_capacity == 0) {
					reserve(1);
				}
				reserve(2 * _capacity);
			}
			for(size_t end = _size + 1; end > pos; --end)
			{
				_str[end] = _str[end - 1];
			}
			_str[pos] = ch;
			_size++;
			return  *this;
		}

		string& insert(size_t pos, const char* str)
		{
			assert(0 <= pos && pos <= _size);
			
			size_t len = strlen(str);
			if (len + _size > _capacity) {

				reserve(len + _size);
			}

			for (size_t end = _size + len; end > pos + len - 1; --end) {
				_str[end] = _str[end - len];
			}
			strncpy(_str + pos, str, len);
			_size += len;
			return  *this;

		}

		string& erase(size_t pos, size_t len = npos)
		{
			assert(0 <= pos && pos < _size);
			if (pos + len > _size || len > _size) {
				_str[pos] = '\0';
				_size = pos;
				return *this;
			}

			/*for (size_t begin = pos + len; begin <= _size; begin++) {
				_str[begin - len] = _str[begin];
			}*/
			strcpy(_str+pos, _str+pos+len);
			_size -= len;
			return  *this;

		}

		size_t size()const {
			return _size;
		}

		size_t capacity()const {
			return _capacity;
		}

		void swap(string& s) {
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity); 
		}

		size_t find(char ch, size_t pos = 0) {
			for (size_t i = pos; i < _size; i++) {
				if (_str[i] == ch) {
					return i;
				}
			}
			return npos;
		}

		size_t find(const char* str, size_t pos = 0) {
			assert(pos < _size);
			char* p = strstr(_str + pos, str);
			if (p == nullptr) {
				return npos;
			}
			else {
				return (p - str);
			}
		}
		
		void clear() {
			_str[0] = '\0';
			_size = 0;
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity;//_capacity不包括'\0'
		//只针对整形
		static const size_t npos = -1;
		
	};

	std::ostream& operator<<(std::ostream& os, const string& s)
	{
		for (auto ch : s) {
			os << ch;
		}
		return os;
	}

	std::istream& operator>>(std::istream& is, string& s) {
		s.clear();
		char ch = is.get();
		char buff[128];
		size_t  i = 0;
		while (!isspace(ch)) {
			buff[i++] = ch;
			if (i == 127) {
				buff[127] = '\0';
				s += buff;
				i = 0;
			}
			ch = is.get();//ch拿不到空格，c++默认空格是多个字符的间隔
		}
		
		if (i != 0) {
			buff[i] = '\0';
			s += buff;
		}
		return is;
	}

	void test_string1(){
		string s("123");
		std::cin >> s;
		std::cout << s;
	}
	
}
