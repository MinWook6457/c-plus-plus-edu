#include <iostream>
using namespace std;

class Dept {
private:
	int size;
	int* scores;
public:
	Dept(int s) : size(s) {
		scores = new int[s];
	}
	/*
	Dept(const Dept& dept) {
		this->size = dept.size;
		this->scores = new int[size];
		for (int i = 0; i < this->size; i++) {
			this->scores[i] = dept.scores[i];
		}
	}
	*/
	int getSize() {
		return size;
	}

	void read() {
		cout << size << " 개 점수 입력 >> ";
		for (int i = 0; i < size; i++) {
			cin >> scores[i];
		}
	}
	bool isOver60(int index) {
		if (scores[index] >= 60)
			return true;
		else
			return false;
	}
	~Dept() {
		delete []scores;
	}
};
// 3번 문제 정답 : 복사 생성자 제거 후
// countPass 매개변수에 참조 변수 추가
int countPass(Dept &dept) {
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i))
			count++;
	}
	return count;
}
int main() {
	Dept com(10);
	com.read();
	int n = countPass(com);
	cout << "60점 이상은 " << n << "명";
}