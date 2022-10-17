#include <iostream>
using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};
int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* cc = new int[size];
	cout << "합친 정수 배열 출력 " << endl;
	int cnt = 0;
	for (int i = 0; i < size / 2; i++) {
		cc[cnt] = s1[i];
		cout << cc[cnt] << ' ';
		cnt++;
	}
	for (int i = 0; i < size / 2; i++) {
		cc[cnt] = s2[i];
		cout << cc[cnt] << ' ';
	}
	cout << endl;
	return cc;
}
int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int* r = new int[size];
	int cnt = 0;

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (s1[i] == s2[j])
				break;
			if (j == size - 1) {
				r[cnt] = s1[i];
				cnt++;
			}
		}
	}
	if (cnt == 0)
		return NULL;

	retSize = cnt;
	cout << "배열 x[] 에서 y[]를 뺀 값을 출력한다. 개수는 "<< retSize << endl;
	int* t = new int[size];
	for (int i = 0; i < retSize; i++) {
		t[i] = r[i];
		cout << t[i] << ' ';
	}
	cout << endl;
	return t;
}
int main() {
	int x[5], y[5], retSize;
	int* a, * b;

	cout << "정수를 5개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
	}
	cout << "정수를 5개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++) {
		cin >> y[i];
	}
	a = ArrayUtility2::concat(x, y, 10);
	b = ArrayUtility2::remove(x, y, 5, retSize);
}