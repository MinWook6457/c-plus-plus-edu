#include <iostream> 
using namespace std;

int main() {
	cout << "***** 승리장에 오신 것을 환영합니다 *****" << endl;
	int menu, n;
	while (true) {
		cout << "짬뽕 : 1, 짜장 : 2, 군만두 : 3, 종료 : 4>> ";
		cin >> menu;
		if (menu == 4) {
			cout << "오늘 영업은 끝났습니다" << endl;
			break;
		}
		if (menu > 4) {
			cout << "다시 주문하세요!!" << endl;
			continue;
		}
		cout << "몇 인분? ";
		cin >> n;
		if (menu == 1) {
			cout << "짬뽕 " << n << "인분 나왔습니다" << endl;
		}else if (menu == 2) {
			cout << "짜장 " << n << "인분 나왔습니다" << endl;
		}else if(menu == 3) {
			cout << "군만두 " << n << "인분 나왔습니다" << endl;
		}
	}


	return 0;
}