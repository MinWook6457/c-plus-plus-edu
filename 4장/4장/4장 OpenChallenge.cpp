#include <iostream>
#include <string>
#pragma warning(disable:4996)
using namespace std;


class Player {
private:
	string name;
public:
	Player() { 
		// 
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
};

class WordGame {
private:
	Player* p;
	int num;
public:
	WordGame(int n) : num(n) {
		p = new Player[n];
	}
	void game() {
		string n;
		for (int i = 0; i < num; i++) {
			cout << "�������� �̸��� �Է��ϼ��� .(��ĭ����) >> ";
			cin >> n;
			p[i].setName(n);
		}
		cout << endl;
		cout << "�����ϴ� �ܾ�� �ƹ��� �Դϴ�." << endl;
		string a = "�ƹ���";
		string b;
		int j = 0;
		while (true) {
			cout << p[j%num].getName() << ">>";
			cin >> b;
			int k = a.length();
			if (a.at(k - 2) == b.at(0) && a.at(k - 1) == b.at(1)) {
				a = b;
			}
			else {
				cout << p[j%num].getName() << "Ż��!!" << endl;
				break;
			}
			j++;
		}
	}

};



void main() {
	cout << "�����ձ� ���� ��ü�� ��ϴ� Ŭ����" << endl;
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
	int n;
	cin >> n;
	WordGame wordgame(n);
	wordgame.game();
}