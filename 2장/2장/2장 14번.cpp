#include <iostream>
using namespace std;

int main() {
	int n;
	string s;
	int sum = 0;
	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다" << endl;
	while (true) {
		cout << "주문>> ";
		cin >> s >> n;
		if (s == "에스프레소") {
			sum += n * 2000;
			cout << n * 2000 << "원 입니다. 맛있게 드세요" << endl;
		}else if (s == "아메리카노") {
			sum += n * 2300;
			cout << n * 2300 << "원 입니다. 맛있게 드세요" << endl;
		}else {
			sum += n * 2500;
			cout << n * 2500 << "원 입니다. 맛있게 드세요" << endl;
		}
		if (sum > 20000) {
			cout << "오늘 " << sum << "원을 판매하여 카페를 닫습니다~" << endl;
			break;
		}
	}
	return 0;
}