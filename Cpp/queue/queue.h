#pragma once
namespace dhb {
	template<class T, class Container = deque<T>>
	class queue {
	public:
		void push(const T& x) {
			_con.push_back(x);
		}

		void pop() {
			_con.pop_front();
		}

		const T& front() {
			return _con.front();
		}

		const T& back()
		{
			return _con.back();
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

	void test_queue() {
		queue<int> q;
		q.push(1);
		q.push(2);
		q.push(3);
		q.push(4);
		while (!q.empty()) {
			cout << q.front() << ' ';
			q.pop();
		}
		cout << endl;
	}

}