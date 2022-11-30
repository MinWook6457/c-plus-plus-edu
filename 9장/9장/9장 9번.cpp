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
		if (availableCount > pages)
			return true;
		else
			return false;
	}
	// 상속 받은 클래스 사용하기 위한 get set 함수
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getPrintedCount() { return printedCount; }
	int getAvailableCount() { return availableCount; }
	void setModel(string model) { this->model = model; }
	void setManufacturer(string manufacturer) { this->manufacturer = manufacturer; }
	void setPrintedCount(int printedCount) { this->printedCount = printedCount; }
	void setAvailableCount(int availableCount) { this->availableCount = availableCount; }

	// 가상함수 선언
	virtual void print(int pages) = 0;
	virtual void show() = 0;
};

class InkJetPrinter : public Printer {
private:
	int availableInk;
public:
	InkJetPrinter(string model = "", string manufacturer = "", int availableCount = 0, int availableInk = 0) : Printer(model, manufacturer, availableCount) {
		this->availableInk = availableInk;
	}

	bool isValidInkJetPrint(int pages) {
		if (availableInk > pages) 
			return true;
		else 
			return false;
	}

	void print(int pages) override { 
		if (isValidPrint(pages)) {
			if (isValidInkJetPrint(pages)) {
				setPrintedCount(getPrintedCount() + pages);
				setAvailableCount(getAvailableCount() - pages);
				setAvailableInk(getAvailableInk() - pages);
				cout << "프린트하였습니다" << endl;
			}
			else {
				cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
			}
		}
		else cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	}

	void show() {
		cout << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 잉크 " << getAvailableInk() << endl;
	}
	int getAvailableInk() { return availableInk; }
	void setAvailableInk(int availableInk) { this->availableInk = availableInk; }

};

class LaserPrinter : public Printer {
private:
	int availableToner;
public:
	LaserPrinter(string model = "", string manufacturer = "", int availableCount = 0, int availableToner = 0) : Printer(model, manufacturer, availableCount) {
		this->availableToner = availableToner;
	}

	bool isValidLaserPrint(int pages) {
		if (availableToner > pages)
			return true;
		else 
			return false;
	}

	void print(int pages) override {
		if (isValidPrint(pages)) {
			if (isValidLaserPrint(pages)) {
				setPrintedCount(getPrintedCount() + pages);
				setAvailableCount(getAvailableCount() - pages);
				setAvailableToner(getAvailableToner() - pages);
				cout << "프린트하였습니다" << endl;
			}
			else {
				cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
			}
		}
		else cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
	}
	void show() {
		cout << getModel() << ", " << getManufacturer() << ", 남은 종이 " << getAvailableCount() << "장, 남은 토너 " << availableToner << endl;
	}
	int getAvailableToner() { return availableToner; }
	void setAvailableToner(int availableToner) { this->availableToner = availableToner; }
};

int main() {
	InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* laser = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

	cout << "현재 작동중인 2대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : ";
	ink->show();
	cout << "레이저 : ";
	laser->show();

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
			ink->print(pages);
			break;
		case 2:
			laser->print(pages);
		default:
			break;
		}
		ink->show();
		laser->show();

		cout << "게속 프린트 하시겠습니까 (y/n) >> ";
		cin >> ch;
		if (ch == 'n')
			break;
		else
			continue;
	}

	return 0;
}