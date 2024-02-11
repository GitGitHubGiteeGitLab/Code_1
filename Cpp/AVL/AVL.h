#pragma once
#include <utility>
#include <assert.h>
#include <iostream>
#include <ctime>
#include<cstdlib>
using namespace std;
template <class K, class V>
struct Node {
	Node<K, V>* _left;
	Node<K, V>* _right;
	Node<K, V>* _parent;
	std::pair<K, V> _kv;
	int _bf; // balance factor

	Node(const std::pair<K, V>& kv)
		:_left(nullptr),
		_right(nullptr),
		_parent(nullptr),
		_kv(kv),
		_bf(0)
	{ }
};

template<class K, class V>
class AVL {
	typedef Node<K, V> Node;
public:
	bool Insert(const std::pair<K, V>& kv) {
		if (!_root) {
			_root = new Node(kv);
			return true;
		}

		Node* parent = nullptr;
		Node* cur = _root;
		while (cur) {
			if (cur->_kv.first < kv.first) {
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_kv.first > kv.first) {
				parent = cur;
				cur = cur->_left;
			}
			else {
				return false;
			}
		}
		cur = new Node(kv);
		if (parent->_kv.first < kv.first) {
			parent->_right = cur;
		}
		else {
			parent->_left = cur;
		}
		cur->_parent = parent;
		                                           

		//更新平衡因子
		while (parent) {
			if (cur == parent->_left) {
				parent->_bf--;
			}
			else {
				parent->_bf++;
			}

			if (parent->_bf == 1 || parent->_bf == -1) {
				//继续更新
				cur = cur->_parent;
				parent = cur->_parent;
			}
			else if (parent->_bf == 0) {
				break;
			}
			else if (parent->_bf == 2 || parent->_bf == -2) {
				//需要旋转处理, 左右均衡，降低整棵的高度
				if (parent->_bf == 2 && cur->_bf == 1)
					RotateL(parent);//左单旋
				else if (parent->_bf == -2 && cur->_bf == -1)
					RotateR(parent);//右单旋
				else if (parent->_bf == -2 && cur->_bf == 1)
					RotateLR(parent);
				else if (parent->_bf == 2 && cur->_bf == -1)
					RotateRL(parent);
				else
					assert(false);
						
				break;
			}
			else {
				//插入之前已经出了问题
				assert(false);
			}
		}


		return true;
	}

	void inorder() {
		_inorder(_root);
		std::cout << std::endl;
	}

	bool isBalance() {
		return _isBalance(_root);
	}

	int Height() {
		return height(_root);
	}
	
private:
	void RotateL(Node* parent) {
		Node* subR = parent->_right;
		Node* subRL = subR->_left;
		
		parent->_right = subRL;
		if(subRL)
			subRL->_parent = parent;
		
		Node* ppnode = parent->_parent;

		subR->_left = parent;
		parent->_parent = subR;

		if (!ppnode)
			_root = subR;
		else if (ppnode->_left == parent)
			ppnode->_left = subR;
		else
			ppnode->_right = subR;
		subR->_parent = ppnode;
		subR->_bf = parent->_bf = 0;
		
	}

	void RotateR(Node* parent) {
		Node* subL = parent->_left;
		Node* subLR = subL->_right;

		parent->_left = subLR;
		if (subLR)
			subLR->_parent = parent;
		
		Node* ppnode = parent->_parent;
		subL->_right = parent;
		parent->_parent = subL;

		if (ppnode == nullptr)
			_root = subL;
		else if (ppnode->_left == parent)
			ppnode->_left = subL;
		else
			ppnode->_right = subL;
		subL->_parent = ppnode;
		subL->_bf = parent->_bf = 0;
	}

	void RotateLR(Node* parent) {
		Node* subL = parent->_left;
		Node* subLR = subL->_right;
		int bf = subLR->_bf;
		RotateL(parent->_left);
		RotateR(parent);
		if (bf == 1) {
			parent->_bf = 0;
			subL->_bf = -1;
			subLR->_bf = 0;
		}
		else if (bf == -1) {
			parent->_bf = 1;
			subL->_bf = 0;
			subLR->_bf = 0;

		}
		else if (bf == 0) {
			parent->_bf = subL->_bf = subLR->_bf = 0;
		}
		else {
			assert(false);
		}
	}

	void RotateRL(Node* parent) {
		Node* subR = parent->_right;
		Node* subRL = subR->_left;
		int bf = subRL->_bf;
		RotateR(parent->_right);
		RotateL(parent);
		if (bf == 1) {
			parent->_bf = -1;
			subR->_bf = 0;
			subRL->_bf = 0;
		}
		else if (bf == -1) {
			parent->_bf = 0;
			subR->_bf = 1 ;
			subRL->_bf = 0;
		}
		else if (bf == 0) {
			parent->_bf = subR->_bf = subRL->_bf = 0;
		}
		else {
			assert(false);
		}
	}

	void _inorder(Node* root) {
		if (root == nullptr) {
			return;
		}
		_inorder(root->_left);
		std::cout << root->_kv.first << ' ';
		_inorder(root->_right);
	}
	
	int height(Node* root) {
		if (!root)
			return 0;
		int left = height(root->_left);
		int right = height(root->_right);
		int max = left > right ? left : right;
		return max + 1;

	}

	bool _isBalance(Node* root) {
		if (!root) {
			return true;
		}
		int left = height(root->_left);
		int right = height(root->_right);
		if (right - left != root->_bf) {
			std::cout << root->_kv.first <<"平衡因子异常" << std::endl;
			return false;
		}
		return abs(left - right) < 2 && _isBalance(root->_left) && _isBalance(root->_right);
	}

private:
	
	Node* _root = nullptr;
};

void Test_AVL1() {
	//int a[]{ 16,3,7,11,9,26,18,14,15 };
	int a[]{ 4, 2, 6, 1, 3, 5, 15, 7, 16, 14 };
	AVL<int, int>t1;
	for (auto e : a) {
		t1.Insert({e, e});
		std::cout << e << "插入：" << t1.isBalance() << std::endl;

	}
	t1.inorder();
}

void Test_AVL2() {
	unsigned _time =time(0);
	srand(_time);
	const size_t N = 100000;
	AVL<int, int> t;
	for (size_t i = 0; i < N; ++i)
	{
		size_t x = rand() + i;
		t.Insert(make_pair(x, x));
		//cout << t.IsBalance() << endl;
	}

	//t.Inorder();

	cout << t.isBalance() << endl;
	cout << t.Height() << endl;
}



