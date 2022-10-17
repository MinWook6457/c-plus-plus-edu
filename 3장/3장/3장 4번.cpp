#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee, water, sugar;
public:
	CoffeeMachine(int c, int w, int s) : coffee(c), water(w), sugar(s) { // 멤버 이니셜라이저
		//
	}

	void drinkEspresso() { // 에스프레소
		coffee -= 1;
		water -= 1;
	}

	void drinkAmericano() { // 아메리카노
		coffee -= 1;
		water -= 2;
	}

	void drinkSugarCoffee() { // 설탕커피
		coffee -= 1;
		water -= 2;
		sugar -= 1;
	}

	void fill()  { // 커피 머신 채우기
		coffee = water = sugar = 10;
	}

	void show() { // 상태 표시
		cout << "커피 머신 상태, 커피 : " << coffee << " 물 : " << water << " 설탕 : " << sugar << endl;
	}
};

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}