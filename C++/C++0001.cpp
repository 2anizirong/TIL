// 10828

#include <iostream>
#include <string>
using namespace std;

class Stack {
public:
	int count;
	int *data;
	int t;			// 마지막 원소

public:
	int input() {
		cin >> count;        // 입력할 명령의 개수
		data = new int[count];
		t = -1;              // 배열 초기화 후에 t도 초기화
		return count;
	}

	bool isEmpty() { return t == -1; }

	bool isFull() { return t == count - 1; }

	void push(int x) {
		if (isFull()) {
			return;
		}
		data[++t] = x;
	}

	int pop() {
		if (isEmpty()) {
			return -1;
		}
		return data[t--];
	}

	int size() {
		return t + 1;
	}

	int empty() {
		return (t == -1) ? 1 : 0;
	}

	int top() {
		if (isEmpty()) {
			return -1;
		}
		return data[t];
	}
};

int main() {
	Stack stack;
	stack.input();

	for (int i = 0; i < stack.count; ++i) {
		string command;
		cin >> command;

		if (command == "push") {
			int x;
			cin >> x;
			stack.push(x);
		}
		else if (command == "pop") cout << stack.pop() << endl;
		else if (command == "size") cout << stack.size() << endl;
		else if (command == "empty") cout << stack.empty() << endl;
		else if (command == "top") cout << stack.top() << endl;
	}
	return 0;
}
