#pragma once
#include "RBT2.h"
namespace dhb {
	template<class K>
	class set
	{
		struct SetKeyOfT {
			const K& operator()(const K& key)
			{
				return key;
			}
		};
	public:
		typedef typename RBTree<K, K, SetKeyOfT>::const_iterator iterator;
		//typedef typename RBTree<K, K, SetKeyOfT>::const_iterator const_iterator;

		iterator begin() {
			return _t.begin();
		}
		iterator end() {
			return _t.end();
		}

		pair<iterator, bool> insert(const K& key) {
			return _t.Insert(key);
		}
	private:
		RBTree<K, K, SetKeyOfT> _t;
	};

	void test_set1()
	{
		/*set<int> s;
		s.insert(3);
		s.insert(1);
		s.insert(2);

		set<int>::iterator it = s.begin();
		while (it != s.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;*/
		int a[] = { 16, 3, 7, 11, 9, 26, 18, 14, 15 };
		set<int> s;
		for (auto e : a)
		{
			s.insert(e);
		}

		set<int>::iterator it = s.begin();
		while (it != s.end())
		{
			cout << *it << " ";
			//*it = 1;

			++it;
		}
		cout << endl;

		for (auto e : s)
		{
			cout << e << " ";
		}
		cout << endl;
	}
}
