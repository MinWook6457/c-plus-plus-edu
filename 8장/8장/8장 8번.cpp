#include <iostream>
#include <string>

using namespace std;

class Printer {
private:
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	Printer(string model = "", string manufacturer = "", int availableCount = 0) {
		this->model = model;
		this->manufacturer = manufacturer;
		this->availableCount = availableCount;
		this->printedCount = 0;
	}

	bool isValidPrint(int pages) { // ����Ʈ ���� ���θ� �˻��ϴ� �Լ��� ���ٸ� ��ӹ��� Ŭ���������� ������ ������ �߻���.
								   // ��ũ�� �پ�� �ϴ� ��쿡 ��ʱ��� ���� �پ��� ��찡 �߻��Ͽ���!
		if (availableCount > pages) 
			return true;
		else 
			return false;
	}

	void print(int pages) {
		if (isValidPrint(pages)) {
			printedCount += pages;
			availableCount -= pages;
		}
		else {
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�" << endl;
		}
	}

	void showPrinter() { cout << model << ", " << manufacturer << ", ���� ���� " << availableCount << "��"; }
};

class InkJetPrinter : public Printer {
private:
	int availableInk;
public:
	InkJetPrinter(string model = "", string manufacturer = "", int availableCount = 0, int availableInk = 0) : Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}

	void printInkJet(int pages) {
		if (isValidPrint(pages)) { // ����Ʈ�� ��������?
			if (availableInk > pages) {
				print(pages);
				availableInk -= pages;
				cout << "����Ʈ �Ͽ����ϴ�." << endl;
			}
			else {
				cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�" << endl;
			}
		}
		else {
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�" << endl;
		}
	}

	void showInkJetPrinter() {
		showPrinter();
		cout << ", ���� ��ũ " << availableInk << endl;
	}
};

class LaserPrinter : public Printer {
private:
	int availableToner;
public:
	LaserPrinter(string model = "", string manufacturer = "", int availableCount = 0, int availableToner = 0) : Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}



	void printLaser(int pages) {
		if (isValidPrint(pages)) {
			if (availableToner > pages) {
				print(pages);
				availableToner -= pages;
				cout << "����Ʈ �Ͽ����ϴ�" << endl;
			}
			else {
				cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�" << endl;
			}
		}
		else {
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�" << endl;
		}
	}

	void showLaserPrinter() {
		showPrinter();
		cout << ", ���� ��� " << availableToner << endl;
	}
};

int main() {
	InkJetPrinter ink("Officejet V40", "HP", 5, 10);
	LaserPrinter laser("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : ";
	ink.showInkJetPrinter();
	cout << "������ : ";
	laser.showLaserPrinter();

	int menu;
	int pages;
	char ch;
	while (true) {
		cout << endl;
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�";
		cin >> menu >> pages;

		switch (menu)
		{
		case 1:
			ink.printInkJet(pages);
			break;
		case 2:
			laser.printLaser(pages);
		default:
			break;
		}
		ink.showInkJetPrinter();
		laser.showLaserPrinter();

		cout << "�Լ� ����Ʈ �Ͻðڽ��ϱ� (y/n) >> ";
		cin >> ch;
		if (ch == 'n')
			break;
		else 
			continue;
	}

	return 0;
}