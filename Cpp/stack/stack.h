#pragma once
#include <deque>
using std::deque;

namespace dhb {
	//ÊÊÅäÆ÷Ä£Ê½/Åä½ÓÆ÷
	template<class T, class Container = deque<T>>
	class stack {
	public:
		void push(const T& val) {
			_con.push_back(val);
		}
		void pop() {
			_con.pop_back();
		}
		bool empty() {
			return _con.empty();
		}

		T& top(){
			return _con.back();
		}

		size_t size()
		{
			return _con.size();
		}

	private:
		Container _con;
	};

	void test_stack() {
		stack<int> st;
		st.push(1);
		st.push(2);
		st.push(3);
		st.push(4);
		while (!st.empty()) {
			cout << st.top() << ' ';
			st.pop();
		}
		cout << endl;
	}
}
