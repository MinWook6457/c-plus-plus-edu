#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee, water, sugar;
public:
	CoffeeMachine(int c, int w, int s) : coffee(c), water(w), sugar(s) { // ��� �̴ϼȶ�����
		//
	}

	void drinkEspresso() { // ����������
		coffee -= 1;
		water -= 1;
	}

	void drinkAmericano() { // �Ƹ޸�ī��
		coffee -= 1;
		water -= 2;
	}

	void drinkSugarCoffee() { // ����Ŀ��
		coffee -= 1;
		water -= 2;
		sugar -= 1;
	}

	void fill()  { // Ŀ�� �ӽ� ä���
		coffee = water = sugar = 10;
	}

	void show() { // ���� ǥ��
		cout << "Ŀ�� �ӽ� ����, Ŀ�� : " << coffee << " �� : " << water << " ���� : " << sugar << endl;
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