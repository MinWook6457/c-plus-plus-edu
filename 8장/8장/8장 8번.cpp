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

	bool isValidPrint(int pages) { // 프린트 가능 여부를 검사하는 함수가 없다면 상속받은 클래스내에서 로직의 문제가 발생함.
								   // 잉크만 줄어야 하는 경우에 토너까지 같이 줄어드는 경우가 발생하였음!
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
			cout << "용지가 부족하여 프린트할 수 없습니다" << endl;
		}
	}

	void showPrinter() { cout << model << ", " << manufacturer << ", 남은 종이 " << availableCount << "장"; }
};

class InkJetPrinter : public Printer {
private:
	int availableInk;
public:
	InkJetPrinter(string model = "", string manufacturer = "", int availableCount = 0, int availableInk = 0) : Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}

	void printInkJet(int pages) {
		if (isValidPrint(pages)) { // 프린트가 가능한지?
			if (availableInk > pages) {
				print(pages);
				availableInk -= pages;
				cout << "프린트 하였습니다." << endl;
			}
			else {
				cout << "잉크가 부족하여 프린트할 수 없습니다" << endl;
			}
		}
		else {
			cout << "용지가 부족하여 프린트할 수 없습니다" << endl;
		}
	}

	void showInkJetPrinter() {
		showPrinter();
		cout << ", 남은 잉크 " << availableInk << endl;
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
				cout << "프린트 하였습니다" << endl;
			}
			else {
				cout << "토너가 부족하여 프린트할 수 없습니다" << endl;
			}
		}
		else {
			cout << "용지가 부족하여 프린트할 수 없습니다" << endl;
		}
	}

	void showLaserPrinter() {
		showPrinter();
		cout << ", 남은 토너 " << availableToner << endl;
	}
};

int main() {
	InkJetPrinter ink("Officejet V40", "HP", 5, 10);
	LaserPrinter laser("SCX-6x45", "삼성전자", 3, 20);

	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : ";
	ink.showInkJetPrinter();
	cout << "레이저 : ";
	laser.showLaserPrinter();

	int menu;
	int pages;
	char ch;
	while (true) {
		cout << endl;
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력";
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

		cout << "게속 프린트 하시겠습니까 (y/n) >> ";
		cin >> ch;
		if (ch == 'n')
			break;
		else 
			continue;
	}

	return 0;
}