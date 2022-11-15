#include <iostream>
#include <string>

using namespace std;

class BaseArray {
private:
	int capacity; // 배열 크기
	int* mem; // 동적 할당을 위한 포인터
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
		e++; // 마지막 인덱스 이동
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
	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}
	cout << "큐의 용량:" << mQ.capacity() << ", 큐의 크기:" << mQ.length() << endl;
	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
	return 0;
}