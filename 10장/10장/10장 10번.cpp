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
	cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << endl;
	Nation China("중국", "베이징"), Korea("대한민국", "서울"), UK("영국", "런던"), Rusia("러시아", "모스크바"), Germany("독일", "베를린");
	vector<Nation> nation;
	nation.push_back(China);
	nation.push_back(Korea);
	nation.push_back(UK);
	nation.push_back(Rusia);
	nation.push_back(Germany);

	while (true) {
		cout << "정보 입력 : 1, 퀴즈 :2, 종료 : 3 >>";
		int cmd;
		cin >> cmd;

		switch (cmd)
		{
		case 1:
			cout << "현재 " << nation.size() << "개의 나라가 입력되어 있습니다." << endl;
			cout << "나라와 수도를 입력하세요(no no이면 입력끝)" << endl;

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

				cout << nation[ran].getNation() << "의 수도는 ?? ";
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
			cout << "종료합니다" << endl;
			return 0;
			break;
		}
	}

	return 0;
}