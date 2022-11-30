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
		if (availableCount > pages)
			return true;
		else
			return false;
	}
	// ��� ���� Ŭ���� ����ϱ� ���� get set �Լ�
	string getModel() { return model; }
	string getManufacturer() { return manufacturer; }
	int getPrintedCount() { return printedCount; }
	int getAvailableCount() { return availableCount; }
	void setModel(string model) { this->model = model; }
	void setManufacturer(string manufacturer) { this->manufacturer = manufacturer; }
	void setPrintedCount(int printedCount) { this->printedCount = printedCount; }
	void setAvailableCount(int availableCount) { this->availableCount = availableCount; }

	// �����Լ� ����
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
				cout << "����Ʈ�Ͽ����ϴ�" << endl;
			}
			else {
				cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			}
		}
		else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}

	void show() {
		cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��ũ " << getAvailableInk() << endl;
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
				cout << "����Ʈ�Ͽ����ϴ�" << endl;
			}
			else {
				cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
			}
		}
		else cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
	}
	void show() {
		cout << getModel() << ", " << getManufacturer() << ", ���� ���� " << getAvailableCount() << "��, ���� ��� " << availableToner << endl;
	}
	int getAvailableToner() { return availableToner; }
	void setAvailableToner(int availableToner) { this->availableToner = availableToner; }
};

int main() {
	InkJetPrinter* ink = new InkJetPrinter("Officejet V40", "HP", 5, 10);
	LaserPrinter* laser = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : ";
	ink->show();
	cout << "������ : ";
	laser->show();

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
			ink->print(pages);
			break;
		case 2:
			laser->print(pages);
		default:
			break;
		}
		ink->show();
		laser->show();

		cout << "�Լ� ����Ʈ �Ͻðڽ��ϱ� (y/n) >> ";
		cin >> ch;
		if (ch == 'n')
			break;
		else
			continue;
	}

	return 0;
}