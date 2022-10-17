#include <iostream>
#include <string>
#include <cstdlib>
#pragma warning(disable:4996)
using namespace std;

class Player {
private:
	string name;
public:
	void setPlayer(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}

};
class GamblingGame {
private:
	Player p[2];
public:
	void run() {
		cout << "***** ���� ������ �����մϴ� *****" << endl;
		srand((unsigned)time(NULL));
		string n1, n2;
		cout << "ù ��° ���� �̸� >> ";
		cin >> n1;
		p[0].setPlayer(n1);

		cout << "�� ��° ���� �̸� >> ";
		cin >> n2;
		p[1].setPlayer(n2);
		while (true) {
			for (int i = 0; i < 2;i++) {
				if (turn(p[i].getName())) {
					cout << p[i].getName() << "�� �¸�!!" << endl;
					return;
				}
				else {
					cout << "�ƽ�����!" << endl;
				}
			}
		}
	}
	bool turn(string name) {
		string enter;
		cout << name << "<Enter>";

		while (true) {
			char ch;
			cin.get(ch);
			if (ch == '\n')
				break;
		}
		int ran[3] = { 0 };
		for (int i = 0; i < 3; i++) {
			ran[i] = rand() % 3;
		}
		cout << "\t" << ran[0] << '\t' << ran[1] << '\t' << ran[2] << '\t';
		if (ran[0] == ran[1] && ran[1] == ran[2])
			return true;
		else
			return false;
	}
	~GamblingGame() {
		cout << "������ ���� �մϴ�." << endl;
	}

};

int main() {
	GamblingGame g;
	g.run();
}