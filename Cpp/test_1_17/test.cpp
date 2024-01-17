#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstdlib>
using namespace std;
//int main() {
//	cout << "hello, world" << endl;
//	return 0;
//}

int x = 2;
namespace bit {
	int rand = 111;
	int Add(int a, int b) {
		return a + b;
	}

	struct Node {
		int val;
		Node* next;
	};
}
int main() {
	int x = 1;
	cout << x << endl;
	cout << ::x << endl;
	cout << rand << endl;
	cout << bit::rand << endl;
	bit::Node newnode;
	newnode.val = 2;
	newnode.next = &newnode;
	cout << newnode.val << endl;
	cout << newnode.next << endl;
	return 0;
}

