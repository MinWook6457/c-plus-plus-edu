#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
#include <time.h>
#pragma warning(disable:4996)

using namespace std;

class Nation {
private:
	string nation;
	string capital;
public:
	Nation(string nation, string capital) {
		this->nation = nation;
		this->capital = capital;
	}

	string getNation() {
		return nation;
	}

	string getCapital() {
		return capital;
	}
};

int main() {
	cout << "***** ������ ���� ���߱� ������ �����մϴ�. *****" << endl;
	Nation China("�߱�", "����¡"), Korea("���ѹα�", "����"), UK("����", "����"), Rusia("���þ�", "��ũ��"), Germany("����", "������");
	vector<Nation> nation;
	nation.push_back(China);
	nation.push_back(Korea);
	nation.push_back(UK);
	nation.push_back(Rusia);
	nation.push_back(Germany);

	while (true) {
		cout << "���� �Է� : 1, ���� :2, ���� : 3 >>";
		int cmd;
		cin >> cmd;

		switch (cmd)
		{
		case 1:
			cout << "���� " << nation.size() << "���� ���� �ԷµǾ� �ֽ��ϴ�." << endl;
			cout << "����� ������ �Է��ϼ���(no no�̸� �Է³�)" << endl;

			cin.ignore(1, '\n');

			while (true) {
				string n, c;

				cout << nation.size() + 1 << ">>";
				getline(cin, n, ' ');
				getline(cin, c);

				if ((n == "no") && (c == "no"))
					break;

				for (int i = 0; i < nation.size(); i++) {
					if (n == nation[i].getNation()) {
						cout << "already exist!!" << endl;
						break;
					}
				}

				Nation add(n, c);
				nation.push_back(add);
			}
			break;
		case 2:
			while (true) {
				string quiz;
				srand(time(NULL));

				int ran = rand() % nation.size();

				cout << nation[ran].getNation() << "�� ������ ?? ";
				cin >> quiz;

				if (quiz == "exit")
					break;

				if (nation[ran].getCapital() == quiz)
					cout << "Correct !!" << endl;
				else
					cout << "NO !!" << endl;
			}
			break;
		case 3:
			cout << "�����մϴ�" << endl;
			return 0;
			break;
		}
	}

	return 0;
}