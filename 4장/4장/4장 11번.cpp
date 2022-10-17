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
	Container tong[3]; // 0 Ŀ��, 1 ��, 2 ������
	void fill() {
		for (int i = 0; i < 3; i++) {
			tong[i].fill();
		}
	}
	void selectEspresso() {
		if (tong[0].getSize() < 1 || tong[1].getSize() < 1) {
			cout << "���ᰡ �����մϴ�." << endl;
			return;
		}
		tong[0].consume();
		tong[1].consume();
		cout << "���������� �弼��" << endl;
	}
	void selectAmericano() {
		if (tong[0].getSize() < 1 || tong[1].getSize() < 2) {
			cout << "���ᰡ �����մϴ�." << endl;
			return;
		}
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "�Ƹ޸�ī�� �弼��" << endl;
	}
	void selectSugarCoffee() {
		if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1) {
			cout << "���ᰡ �����մϴ�." << endl;
			return;
		}
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "����Ŀ�� �弼��" << endl;
	}
	void show() {
		cout << "Ŀ��: " << tong[0].getSize() << ", ��: " << tong[1].getSize() << ", ����: " << tong[2].getSize() << endl;
	}
public:
	void run() {
		cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
		int menu;
		while (true) {
			cout << "�޴��� �����ּ���(1: ����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���, 0:����)>> ";
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
				cout << "�����մϴ�.";
				return;
			default:
				cout << "�߸� �Է��ϼ̽��ϴ�." << endl;
			}
		}
	}
};

int main() {
	CoffeeVendingMachine m;
	m.run();
}