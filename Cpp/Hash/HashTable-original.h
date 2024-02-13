#pragma once
#include<iostream>
#include<utility>
#include <vector>
using namespace std;

namespace OpenAddress {
	enum State {
		EMPTY,
		EXIST,
		DELETE
	};

	template<class K, class V>
	struct HashData {
		pair<K, V> _kv;
		State _state;

		HashData()
			:_state(EMPTY)
		{ }
	};

	template<class K, class V>
	class HashTable
	{
	public:
		bool Insert(const pair<K, V>& kv) {
			//��������>0.7 resize
			if (Find(kv.first))
				return false;

			if (_tables.size() == 0 || 10 * _n / _tables.size() >= 7)
			{
				size_t newsize = _tables.size() == 0 ? 10 : _tables.size() * 2;
				vector<HashData<K, V>> newtables(newsize);
				//for (auto& data : _tables) {
				//	if (data._state == EXIST)
				//	{
				//		//���������±��λ��
				//		size_t hashi = data._kv.first % _tables.size();
				//		size_t gap = 1;
				//		size_t index = hashi;
				//		while (newtables[index]._state == EXIST) {
				//			index = hashi + gap;
				//			index %= _tables.size();
				//			++gap;
				//		}
				//		newtables[index]._kv = data._kv;
				//		newtables[index]._state = EXIST;
				//	}
				//}
				//_tables.swap(newtables);
				HashTable<K, V> newht;
				newht._tables.resize(newsize);
				for (auto& data : _tables) {
					if (data._state == EXIST) {
						newht.Insert(data._kv);
					}
				}
				_tables.swap(newht._tables);
			}

			size_t hashi = kv.first % _tables.size();
			size_t gap = 1;
			size_t index = hashi;
			while (_tables[index]._state == EXIST) {
				index = hashi + gap;
				index %= _tables.size();
				++gap;
			}
			_tables[index]._kv = kv;
			_tables[index]._state = EXIST;
			_n++;
			return true;
		}

		HashData<K, V>* Find(const K& key) {
			if (_tables.size() == 0)
			{
				return nullptr;
			}
			size_t hashi = key % _tables.size();
			size_t gap = 1;
			size_t index = hashi;
			while (_tables[index]._state != EMPTY) {
				if (_tables[index]._state == EXIST
					&& _tables[index]._kv.first == key) {
					return &_tables[index];
				}
				index = hashi + gap;
				index %= _tables.size();
				++gap;

				// ����Ѿ�����һȦ����ô˵��ȫ�Ǵ���+ɾ��
				if (index == hashi)
				{
					break;
				}
			}

			return nullptr;
		}

		bool Erase(const K& key) {
			HashData<K, V>* ret = Find(key);
			if (ret) {
				ret->_state = DELETE;
				--_n;
				return true;
			}
			else {
				return false;
			}
		}
	private:
		vector<HashData<K, V>> _tables;
		size_t _n = 0; //�洢�����ݸ���
	};

	void TestHashTable1()
	{
		int a[]{ 3, 33, 2, 13, 5, 12, 1002 };
		HashTable<int, int> ht;
		for (auto e : a) {
			ht.Insert({ e, e });
		}
		ht.Insert({ 15,15 });
		if (ht.Find(13)) {
			cout << "13��" << endl;
		}
		else {
			cout << "13����" << endl;
		}
		ht.Erase(13);
		if (ht.Find(13)) {
			cout << "13��" << endl;
		}
		else {
			cout << "13����" << endl;
		}
	}

}

namespace HashBucket {
	template<class K, class V>
	struct HashNode {
		HashNode<K, V>* _next = nullptr;
		pair<K, V> _kv;
		HashNode(const pair<K, V>& kv)
			:_next(nullptr)
			,_kv(kv)
		{ }
	};
	
	template<class K>
	struct HashFunc
	{
		size_t operator()(const K& key) 
		{
			return key;
		}
	};
	//�ػ�
	template<>
	struct HashFunc<string>
	{
		size_t operator()(const string& s)
		{
			//BKDR
			size_t hash = 0;
			for (auto ch : s) {
				hash += ch;
				hash *= 31;
			}
			return hash;
		}
	};

	template<class K, class V, class Hash = HashFunc<K>>
	class HashTable {
		typedef HashNode<K, V> Node;
	public:
		~HashTable() {
			for (auto& cur : _tables) {
				auto tmp = cur;
				while (cur) {
					Node* next = cur->_next;
					delete cur;
					cur = next;
				}
				tmp = nullptr;
			}
		}
		Node* Find(const K& key) {
			if (_tables.size() == 0) {
				return nullptr;
			}
			Hash hash;
			size_t hashi = hash(key) % _tables.size();
			Node* cur = _tables[hashi];
			while (cur) {
				if (cur->_kv.first == key) {
					return cur;
				}
				cur = cur->_next;
			}
			return nullptr;
		}

		bool Erase(const K& key) {
			Hash hash;
			size_t hashi = hash(key) % _tables.size();
			Node* prev = nullptr;
			Node* cur = _tables[hashi];
			while (cur) {
				if (cur->_kv.first == key) {
					if (prev == nullptr) {
						_tables[hashi] = cur->_next;
						delete cur;
					}
					else {
						prev->_next = cur->_next;
						delete cur;
					}
					return true;
				}
				else {
					prev = cur;
					cur = cur->_next;
				}
			}
			return false;
		}
		size_t GetNextPrime(size_t prime)
		{
			// SGI
			static const int __stl_num_primes = 28;
			static const unsigned long __stl_prime_list[__stl_num_primes] =
			{
				53, 97, 193, 389, 769,
				1543, 3079, 6151, 12289, 24593,
				49157, 98317, 196613, 393241, 786433,
				1572869, 3145739, 6291469, 12582917, 25165843,
				50331653, 100663319, 201326611, 402653189, 805306457,
				1610612741, 3221225473, 4294967291
			};

			size_t i = 0;
			for (; i < __stl_num_primes; ++i)
			{
				if (__stl_prime_list[i] > prime)
					return __stl_prime_list[i];
			}

			return __stl_prime_list[i];
		}

		bool Insert(const pair<K, V>& kv) {
			if (Find(kv.first)) {
				return false;
			}
			Hash hash;
			//��������Ϊ1ʱ����
			if (_n == _tables.size())
			{
				/*size_t newsize = _tables.size() == 0 ? 10 : _tables.size() * 2;*/
				/*HashTable<K, V> newht;
				newht.resize(newsize);
				for (auto cur : _tables) {
					while (cur) {
						newht.Insert(cur->_kv);
						cur = cur->next;
					}
				}
				_tables.swap(newht._tables);*/
				size_t newsize = GetNextPrime(_tables.size());
				vector<Node*> newtables(newsize, nullptr);
				for (auto& cur : _tables) {
					while (cur) {
						Node* next = cur->_next;;
						size_t hashi = hash(cur->_kv.first) % newtables.size();
						cur->_next = newtables[hashi];
						newtables[hashi] = cur;
						cur = next;
					}
				}
				_tables.swap(newtables);
			}
			size_t hashi = hash(kv.first) % _tables.size();
			//����
			//ͷ��
			Node* newnode = new Node(kv);
			newnode->_next = _tables[hashi];
			_tables[hashi] = newnode;
			++_n;
			return true;
		}

		size_t MaxBucketSize()
		{
			size_t max = 0;
			for (size_t i = 0; i < _tables.size(); ++i)
			{
				auto cur = _tables[i];
				size_t size = 0;
				while (cur)
				{
					++size;
					cur = cur->_next;
				}

				/*printf("[%d]->%d\n", i, size);*/
				if (size > max)
				{
					max = size;
				}
			}

			return max;
		}
	private:
		vector<Node*> _tables;
		size_t _n = 0;//�洢��Ч���ݸ���
	};
	void TestHashTable1()
	{
		int a[] = { 3, 33, 2, 13, 5, 12, 1002 };
		HashTable<int, int> ht;
		for (auto e : a)
		{
			ht.Insert(make_pair(e, e));
		}

		ht.Insert(make_pair(15, 15));
		ht.Insert(make_pair(25, 25));
		ht.Insert(make_pair(35, 35));
		ht.Insert(make_pair(45, 45));
		ht.Erase(3);
	}

	void TestHashTable2()
	{
		int a[] = { 3, 33, 2, 13, 5, 12, 1002 };
		HashTable<int, int> ht;
		for (auto e : a)
		{
			ht.Insert(make_pair(e, e));
		}

		ht.Erase(12);
		ht.Erase(3);
		ht.Erase(33);
	}

	struct HashStr {
		//BKDR
		size_t operator()(const string& s)
		{
			size_t hash = 0;
			for (auto ch : s) {
				hash += ch;
				hash *= 31;
			}
			return hash;
		}
	};

	void TestHashTable3()
	{
		HashTable<string, string> ht;
		ht.Insert({ "sort", "����" });
		ht.Insert({ "string", "�ַ���" });
		ht.Insert({ "left", "���" });
		ht.Insert({"", "�ұ�"});
		HashStr hashstr;
		cout << hashstr("abcd") << endl;
		cout << hashstr("bcda") << endl;
		cout << hashstr("aadd") << endl;
	}

	void TestHashTable4()
	{
		size_t N = 20000;
		HashTable<int, int> ht;
		srand(time(0));
		for (size_t i = 0; i < N; ++i)
		{
			size_t x = rand() + i;
			ht.Insert(make_pair(x, x));
		}

		cout << ht.MaxBucketSize() << endl;
	}
}