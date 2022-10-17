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
			cout << "참가자의 이름을 입력하세요 .(빈칸없이) >> ";
			cin >> n;
			p[i].setName(n);
		}
		cout << endl;
		cout << "시작하는 단어는 아버지 입니다." << endl;
		string a = "아버지";
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
				cout << p[j%num].getName() << "탈락!!" << endl;
				break;
			}
			j++;
		}
	}

};



void main() {
	cout << "끝말잇기 게임 전체를 운영하는 클래스" << endl;
	cout << "게임에 참가하는 인원은 몇명입니까?";
	int n;
	cin >> n;
	WordGame wordgame(n);
	wordgame.game();
}