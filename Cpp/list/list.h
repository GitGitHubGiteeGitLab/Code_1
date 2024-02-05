#pragma once
#include <iostream>
#include <assert.h>
#include "iterator.h"
using std::cout;
using std::endl;
namespace dhb {
	template<class T>
	struct list_node
	{
		list_node<T>* _next;
		list_node<T>* _prev;
		T _data;
		list_node(const T& x = T())
			:_next(nullptr), _prev(nullptr), _data(x)
		{

		}
	};

	template<class T, class Ref, class Ptr>
	struct __list_iterator
	{
		typedef list_node<T> node;
		typedef __list_iterator<T, Ref, Ptr> self;
		node* _node;

		__list_iterator(node* n)
			:_node(n)
		{ }

		Ptr operator->() {
			return &(_node->_data);
		}

		Ref operator*()
		{
			return _node->_data;
		}

		self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		self operator++(int)
		{
			self tmp(*this);
			_node = _node->_next;
			return tmp;
		}

		self& operator--() {
			_node = _node->_prev;
			return *this;
		}

		self operator--(int) {
			self tmp(*this);
			_node = _node->_prev;
			return tmp;
		}
		bool operator!=(const self& s)const {
			return _node != s._node;
		}

		bool operator==(const self& s)const {
			return _node == s._node;
		}
	};

	/*template<class T>
	struct __list_const_iterator
	{
		typedef list_node<T> node;
		typedef __list_const_iterator<T> self;
		node* _node;

		__list_const_iterator(node* n)
			:_node(n)
		{ }



		const T& operator*()
		{
			return _node->_data;
		}

		self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		self operator++(int)
		{
			self tmp(*this);
			_node = _node->_next;
			return tmp;
		}

		self& operator--() {
			_node = _node->_prev;
			return *this;
		}

		self operator--(int) {
			self tmp(*this);
			_node = _node->_prev;
			return tmp;
		}
		bool operator!=(const self& s)const {
			return _node != s._node;
		}

		bool operator==(const self& s)const {
			return _node == s._node;
		}
	};*/

	template<typename T>
	class list {
	public:
		typedef list_node<T> node;
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;
		typedef ReverseIterator<iterator, T&, T*> reverse_iterator;
		typedef ReverseIterator<const_iterator, const T&, const T*> const_reverse_iterator;
		iterator begin()
		{
			return iterator(_head->_next);
		}
		const_iterator begin() const
		{
			return const_iterator(_head->_next);
		}
		iterator end()
		{
			return iterator(_head);
		}
		const_iterator end() const
		{
			return const_iterator(_head);
		}

		reverse_iterator rbegin() {
			return reverse_iterator(end());
		}

		const_reverse_iterator rbegin() const{
			return const_reverse_iterator(end());
		}

		reverse_iterator rend() {
			return reverse_iterator(begin());
		}

		const_reverse_iterator rend() const {
			return const_reverse_iterator(begin());
		}

		list() {
			_head = new node;
			_head->_next = _head;
			_head->_prev = _head;
		}

		template<class Iterator>
		list(Iterator first, Iterator last) 
			: list()
		{
			while (first != last) {
				push_back(*first);
				++first;
			}
		}

		
		void swap(list<T>& lt) {
			std::swap(_head, lt._head);
		}

		list(const list<T>& lt) 
			:list()
		{
			/*for (const auto& e : lt)
			{
				push_back(e);
			}*/
			list<T> tmp(lt.begin(), lt.end());
			swap(tmp);
		}


		~list() {
			clear();
			delete _head;
			_head = nullptr;
		}

		list<T>& operator=(list<T> lt) {
			swap(lt);
			return *this;
		}


		void push_back(const T& x) {
			/*node* tail = _head->_prev;
			node* new_node = new node(x);
			tail->_next = new_node;
			_head->_prev = new_node;
			new_node->_prev = tail;
			new_node->_next = _head;*/
			insert(end(), x);
		}

		void push_front(const T& x) {
			insert(begin(), x);
		}

		void insert(iterator pos, const T& val)
		{
			
			node* cur = pos._node;
			node* prev = cur->_prev;
			node* new_node = new node(val);
			new_node->_prev = prev;
			new_node->_next = cur;
			prev->_next = new_node;
			cur->_prev = new_node;
		}

		void pop_front() {
			erase(begin());
		}

		void pop_back() {
			erase(--end());
		}

		iterator erase(iterator pos) {
			assert(pos != end());
			//node* cur = pos._node;
			node* prev = pos._node->_prev;
			node* next = pos._node->_next;
			prev->_next = next;
			next->_prev = prev;
			delete pos._node;

			return iterator(next);
		}

		void clear () {
			iterator it = begin();
			while (it != end()) {
				/*it = erase(it);*/
				erase(it++);
			}

		}


	private:
		node* _head;
	};

	void print_list(const list<int>& lt)
	{
		auto it = lt.begin();
		while (it != lt.end())
		{
			cout << *it << ' ';
			++it;
		}
	}

	void test_list1() {
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);

		//浅拷贝在这里很合理，迭代器没写dtor，所以没报错，
		//迭代器没必要释放节点，活是list的
		list<int>::iterator it = lt.begin();
		while (it != lt.end())
		{
			cout << *it << ' ';
			*it *= 2;
			++it;
		}
		cout << endl;

		/*it = lt.end();
		--it;
		while (it != lt.end())
		{
			cout << *it << ' ';
			--it;
		}
		cout << endl;*/

		for (auto& e : lt)
		{
			cout << e << ' ';
		}
		cout << endl;

		print_list(lt);
	}

	struct AA
	{
		int _a1;
		int _a2;
		AA() : _a1(0), _a2(0){}

		AA(int a1, int a2) : _a1(a1), _a2(a2){

		}
	};

	void test_list2()
	{
		list<AA> lt;
		lt.push_back(AA(1, 1));
		lt.push_back(AA(2, 2));
		lt.push_back(AA(3, 3));

		list<AA>::iterator it = lt.begin();
		while (it != lt.end())
		{
			cout << it->_a1 << ':' << it->_a2 << endl;
			++it;
		}
		cout << endl;
	}

	void test_list3()
	{
		list<int> lt;
		lt.insert(lt.end(), 5);
		lt.insert(lt.end(), 4);
		lt.insert(lt.end(), 3);
		lt.insert(lt.end(), 2);
		lt.insert(lt.end(), 1);
		/*lt.insert(lt.begin(), 5);
		lt.insert(lt.begin(), 4);
		lt.insert(lt.begin(), 3);
		lt.insert(lt.begin(), 2);
		lt.insert(lt.begin(), 1);*/
		for (auto e : lt) {
			cout << e << ' ';
		}
		cout << endl;
		lt.pop_front();
		lt.pop_back();
		for (auto e : lt) {
			cout << e << ' ';
		}
		cout << endl;
		cout << typeid(lt).name() << endl;
		lt.clear();
		lt.insert(lt.end(), 10);
		lt.insert(lt.end(), 2);
		lt.insert(lt.end(), 43);
		lt.insert(lt.end(), 543);
		
		for (auto e : lt) {
			cout << e << ' ';
		}
		cout << endl;
	}

	void test_list4() {
		list<int> lt;
		lt.insert(lt.end(), 5);
		lt.insert(lt.end(), 4);
		lt.insert(lt.end(), 3);
		lt.insert(lt.end(), 2);
		lt.insert(lt.end(), 1);
		list<int> lt2(lt);
		for (auto& e : lt2) {
			cout << e << ' ';
		}
		cout << endl;
		lt.clear();
		lt = lt2;
		for (auto& e : lt) {
			cout << e << ' ';
		}
		cout << endl;
	}

	void test_list5() {
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_back(5);
		for (auto& e : lt)
		{
			cout << e << ' ';
		}
		cout << endl;
		for (auto rit = lt.rbegin(); rit != lt.rend(); ++rit)
		{
			cout << *rit << ' ';
		}
		cout << endl;
	}
}