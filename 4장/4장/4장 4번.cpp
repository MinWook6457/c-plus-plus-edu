#include <iostream>
using namespace std;

class Sample {
private:
	int* p, size;
public:
	Sample(int n) :size(n) {
		p = new int[n];
	}

	void read(){
		for (int i = 0; i < size; i++) {
			cin >> p[i];
		}
	}

	void write() {
		for (int i = 0; i < size; i++) {
			cout << p[i] << ' ';
		}
		cout << endl;
	}

	int big() {
		int biggest = p[0];
		for (int i = 1; i < size;i++) {
			if (p[i] > biggest)
				biggest = p[i];
		}

		return biggest;
	}
};

int main() {
	Sample s(10);
	s.read();
	s.write();
	cout << "���� ū ���� : " << s.big() << endl;
}