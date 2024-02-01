struct ListNode {
	ListNode* _next;
	ListNode* _prev;
	int _val;

	ListNode(int val)
		:_next(nullptr), _prev(nullptr), _val(val)
	{ }
};


int main() {
	int* p1 = new int;
	int* p2 = new int[10];

	delete p1;
	delete[] p2;

	int* p3 = new int(10);
	int* p4 = new int[10] {1, 2, 3, 4, 5, };

	delete p3;
	delete[] p4;

	ListNode* node1 = new ListNode(1);
	ListNode* node2 = new ListNode(2);
	ListNode* node3 = new ListNode(3);
	ListNode dummy(-1);

	delete node1;
	delete node2;
	delete node3;

	try {
	while (1) {
		int* p = new int[1024 * 1024];
		}
	}catch(const exception& e) {
		cout << e.what() << endl;
	}
		return 0;
	}