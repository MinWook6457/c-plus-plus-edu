#include <iostream>
using namespace std;
int sum(int a, int b) {
	int result = 0;
	for (int i = a; i <= b; i++) {
		result += i;
	}
	return result;
}
int main() {
	int n;
	cout << "끝 수를 입력하세요 >> ";
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다." << endl;
	return 0;
}