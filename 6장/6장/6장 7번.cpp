#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#pragma warning(disable:4996)

class Random {
public: // static을 main에서 사용하려면 반드시 public에 선언해주자
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
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextInt(1, 100) << ' ';
	}
	cout << endl;

	cout << "알파벳을 랜덤하게 10개 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextAlphabet() << ' ';
	}
	cout << endl;
	cout << "랜덤한 실수 10개를 출력합니다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextDouble() << ' ';
	}
	cout << endl;

}
