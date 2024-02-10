#pragma once
#include <array>
#include <iostream>

template <class T>
struct  BSTNode{
	BSTNode<T>* _left;
	BSTNode<T>* _right;
	T _key;

	BSTNode(const T& key)
		: _left(nullptr), _right(nullptr),_key(key)
	{}
};

template <class T>
class BST {
	typedef BSTNode<T> Node;
public:
	BST() = default;

	BST(const BST<T>& bst) {
		copy(_root, bst._root);
	}

	~BST() {
		destory(_root);
		_root = nullptr;
	}
	
	BST<T>& operator=(BST<T> bst) {
		std::swap(_root, bst._root);
		return *this;
	}

	bool insert(const T& key) {
		if (_root == nullptr) {
			_root = new Node(key);
			return true;
		}
		Node* cur = _root, *parent = nullptr;
		while (cur) {
			if (cur->_key > key) {
				parent = cur;
				cur = cur->_left;
			}
			else if(cur->_key < key) {
				parent = cur;
				cur = cur->_right;
			}
			else {
				return false;
			}
		}
		cur = new Node(key);
		if (parent->_key > key) {
			parent->_left = cur;
		}
		else  {
			parent->_right = cur;
		}
		return true;
	}

	bool rinsert(const T& key) {
		return _rinsert(_root, key);
	}

	

	void in_order() {
		_inorder(_root);
	}

	

	bool find(const T& key) {
		Node* cur = _root;
		while (cur) {
			if (cur->_key < key) {
				cur = cur->_right;
			}
			else if(cur->_key > key){
				cur = cur->_left;
			}
			else {
				return true;
			}
		}
		return false;
	}

	bool rfind(const T& key) {
		return _rfind(_root, key);
	}

	

	bool erase(const T& key) {
		Node* parent = _root;
		Node* cur = _root;

		while (cur) {
			if (cur->_key < key) {
				parent = cur;
				cur = cur->_right;
			}
			else if (cur->_key > key) {
				parent = cur;
				cur = cur->_left;
			}
			else {
				//托孤
				if (cur->_left == nullptr) {
					if (cur == _root) {
						_root = _root->_right;
					}
					else {
						if (cur == parent->_left) {
							parent->_left = cur->_right;
						}
						else {
							parent->_right = cur->_right;
						}
					}
					delete cur;
				}
				else if(cur->_right == nullptr){
					if (cur == _root) {
						_root = _root->_left;
					}
					else {
						if (cur == parent->_left) {
							parent->_left = cur->_left;
						}
						else {
							parent->_right = cur->_left;
						}
					}
					
					delete  cur;
				}
				//找保姆，左最大/右最小
				else {
					Node* pr_min = cur;
					Node* r_min = cur->_right;
					
					while (r_min->_left) {
						pr_min = r_min;
						r_min = r_min->_left;
					}
					cur->_key = r_min->_key;
					if (pr_min->_left == r_min) {
						pr_min->_left = r_min->_right;
					}
					else {
						pr_min->_right = r_min->_right;
					}
					delete r_min;
					
				}
				return true;
			}
		}
		return false;
	}

	bool rerase(const T& key) {
		return _rerase(_root, key);
	}

	

protected:
	void copy(Node*& root, const Node* cproot) {
		if (cproot == nullptr) {
			return;
		}
		root = new Node(cproot->_key);
		copy(root->_left, cproot->_left);
		copy(root->_right, cproot->_right);
	}

	void destory(Node* root) {
		if (root == nullptr) {
			return;
		}
		destory(root->_left);
		destory(root->_right);
		delete root;
	}

	bool _rinsert(Node*& root, const T& key) {
		if (root == nullptr) {
			root = new Node(key);
			return true;
		}
		if (root->_key < key) {
			return _rinsert(root->_right, key);
		}
		else if (root->_key > key) {
			return _rinsert(root->_left, key);
		}
		else {
			return false;
		}
	}
	void _inorder(Node* root) {
		if (!root) {
			return;
		}

		_inorder(root->_left);
		std::cout << root->_key << ' ';
		_inorder(root->_right);
	}

	bool _rfind(Node* root, const T& key) {
		if (root == nullptr) {
			return false;
		}
		if (root->_key == key) {
			return true;
		}
		if (root->_key < key) {
			return _rfind(root->_right, key);
		}
		else {
			return _rfind(root->_left, key);
		}
	}

	bool _rerase(Node*& root, const T& key) {
		if (root == nullptr) {
			return false;
		}
		if (root->_key > key) {
			return _rerase(root->_left, key);
		}
		else if (root->_key < key) {
			return _rerase(root->_right, key);
		}
		else {
			Node* cur = root;
			if (root->_left == nullptr) {
				root = root->_right;
				delete cur;
			}
			else if (root->_right == nullptr) {
				root = root->_left;
				delete cur;
			}
			else {
				Node* maxleft = root->_left;
				while (maxleft->_right) maxleft = maxleft->_right;
				root->_key = maxleft->_key;
				return _rerase(root->_left, root->_key);
			}

			return true;
		}
	}

private:
	Node* _root = nullptr;
};