#pragma once
#include "Date.h"
namespace dhb
{
	template<class T>
	struct less {
		bool operator()(const T& x, const T& y) {
			return x < y;
		}
	};

	template<class T>
	struct greater {
		bool operator()(const T& x, const T& y) {
			return x > y;
		}
	};

	class PDateLess {
	public:
		bool operator()(const Date* p, const Date* q){
			return *p < *q;
		}
	};
	class PDateGreater {
	public:
		bool operator()(const Date* p, const Date* q){
			return *p > *q;
		}
	};
	/*class PDateLess
	{
	public:
		bool operator()(const Date* p1, const Date* p2)
		{
			return *p1 < *p2;
		}
	};

	class PDateGreater
	{
	public:
		bool operator()(const Date* p1, const Date* p2)
		{
			return *p1 > *p2;
		}
	};*/

	template<class T, class Container = vector<T>, class Compare = less<T>>
	class priority_queue {
	private:
		void adjust_up(int x)
		{
			Compare com;
			int child = x;
			int parent = (child - 1) / 2;
			while (child > 0) {
				if (com(_con[parent], _con[child])) {
					std::swap(_con[child], _con[parent]);
					child = parent;
					parent = (child - 1) / 2;
				}
				else {
					break;
				}
			}
		}

		void adjust_down(int x) {
			Compare com;
			int parent = x;
			int child = 2 * parent + 1;
			while (child < _con.size())
			{
				if (child + 1 < _con.size() && com(_con[child], _con[child + 1]))
				{
					++child;
				}
				if (com(_con[parent], _con[child])) {
					std::swap(_con[child], _con[parent]);
					parent = child;
					child = 2 * parent + 1;
				}
				else {
					break;
				}
			}
		}
	public:
		void push(const T& x) {
			_con.push_back(x);
			adjust_up(_con.size() - 1);
		}
		void pop() {
			std::swap(_con[0], _con[_con.size() - 1]);
			_con.pop_back();
			adjust_down(0);
		}
		const T& top() {
			return _con[0];
		}

		size_t size() {
			return _con.size();
		}

		bool empty() {
			return _con.empty();
		}
	private:
		Container _con;

	};
}
