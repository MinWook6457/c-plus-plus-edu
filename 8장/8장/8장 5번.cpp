#include <iostream>
#include <string>

using namespace std;

class BaseArray {
private:
	int capacity; // �迭 ũ��
	int* mem; // ���� �Ҵ��� ���� ������
public:
	BaseArray(int capacity) {
		this->capacity = capacity;
		mem = new int[capacity];
	}

	~BaseArray() {
		delete[] mem;
	}

	void put(int index, int val) {
		mem[index] = val;
	}

	int get(int index) {
		return mem[index];
	}

	int getCapacity() {
		return capacity;
	}
};

class MyQueue : public BaseArray {
	int s, e; // s : start, e : end
public:
	MyQueue(int c) : BaseArray(c) {
		s = 0;
		e = 0;
	}

	int length() {
		return e - s;
	}

	void enqueue(int n) {
		put(e, n);
		e++; // ������ �ε��� �̵�
	}

	int dequeue() {
		return get(s++);
	}

	int capacity() {
		return getCapacity();
	}

};

int main() {
	MyQueue mQ(100);
	int n;
	cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
	cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "ť�� ���� ũ�� : " << mQ.length() << endl;
	return 0;
}