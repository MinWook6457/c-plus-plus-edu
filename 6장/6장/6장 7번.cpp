#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#pragma warning(disable:4996)

class Random {
public: // static�� main���� ����Ϸ��� �ݵ�� public�� ����������
	static void seed();
	static int nextInt(int min = 0, int max = 32767);
	static char nextAlphabet();
	static double nextDouble();
};

void Random::seed() {
	srand((unsigned)time(0));
}

int Random::nextInt(int min, int max) {
	return rand() % (max - min) + min;
}

char Random::nextAlphabet() {
	return rand() % 26 + 'a';
}

double Random::nextDouble() {
	return (double)rand() / 32767;
}
int main() {
	Random::seed();
	cout << "1���� 100���� ������ ���� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextInt(1, 100) << ' ';
	}
	cout << endl;

	cout << "���ĺ��� �����ϰ� 10�� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextAlphabet() << ' ';
	}
	cout << endl;
	cout << "������ �Ǽ� 10���� ����մϴ�" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextDouble() << ' ';
	}
	cout << endl;

}
