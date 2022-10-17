#include <iostream>
#pragma warning(disable:4996)
using namespace std;
class Container {
	int size;
public:
	Container() { size = 10; }
	void fill() {
		size = 10;
	}
	void consume() {
		size -= 1;
	}
	int getSize() {
		return size;
	}
};
class CoffeeVendingMachine {
private:
	Container tong[3]; // 0 커피, 1 물, 2 설탕통
	void fill() {
		for (int i = 0; i < 3; i++) {
			tong[i].fill();
		}
	}
	void selectEspresso() {
		if (tong[0].getSize() < 1 || tong[1].getSize() < 1) {
			cout << "원료가 부족합니다." << endl;
			return;
		}
		tong[0].consume();
		tong[1].consume();
		cout << "에스프레소 드세요" << endl;
	}
	void selectAmericano() {
		if (tong[0].getSize() < 1 || tong[1].getSize() < 2) {
			cout << "원료가 부족합니다." << endl;
			return;
		}
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "아메리카노 드세요" << endl;
	}
	void selectSugarCoffee() {
		if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1) {
			cout << "원료가 부족합니다." << endl;
			return;
		}
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "설탕커피 드세요" << endl;
	}
	void show() {
		cout << "커피: " << tong[0].getSize() << ", 물: " << tong[1].getSize() << ", 설탕: " << tong[2].getSize() << endl;
	}
public:
	void run() {
		cout << "***** 커피자판기를 작동합니다. *****" << endl;
		int menu;
		while (true) {
			cout << "메뉴를 눌러주세요(1: 에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기, 0:종료)>> ";
			cin >> menu;
			switch (menu)
			{
			case 1:
				selectEspresso();
				break;
			case 2:
				selectAmericano();
				break;
			case 3:
				selectSugarCoffee();
				break;
			case 4:
				show();
				break;
			case 5:
				fill();
				break;
			case 0:
				cout << "종료합니다.";
				return;
			default:
				cout << "잘못 입력하셨습니다." << endl;
			}
		}
	}
};

int main() {
	CoffeeVendingMachine m;
	m.run();
}