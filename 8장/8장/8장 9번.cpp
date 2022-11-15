// Seat Ŭ���� : �ϳ��� �¼� ���� (������ �̸�, �¼� ���� �� ��� , ����)
// Schedule Ŭ���� : �ϳ��� �������� ���� (8���� Seat ��ü ����)
// AirlineBook Ŭ���� : Schedule ��ü 3�� ���� (���� �ý��� �۵�)
// Console Ŭ���� : �޴� ��� �Լ�, �޴� ���� ... �� �⺻���� ui (��� �Լ��� static ���� �ۼ�)

#include <iostream>
#include <string>

using namespace std;

class Seat {
private:
	string seat;
public:
	Seat(string seat = "---") {
		this->seat = seat;
	}

	void reservation(string name) {
		seat = name;
	}

	void cancle() {
		seat = "---";
	}

	void show() {
		cout << seat;
	}
};

class Schedule {
private:
	Seat* schedule; // ���� �¼�
	string time; // ���� �ð�
public:
	Schedule(string time = "00��") {
		schedule = new Seat[8]; // 8�� Seat ��ü ����
		this->time = time;
	}

	void reservation(int index, string name) {
		schedule[index].reservation(name);
	}

	void cancle(int index) {
		schedule[index].cancle();
	}

	void show() {
		for (int i = 0; i < 8; i++) {
			schedule[i].show();
			cout << "\t";
		}
		cout << endl;
	}
	 // time ������ ���� get,set �޼ҵ� �ۼ�
	string getTime() {
		return time;
	}

	void setTime(string time) {
		this->time = time;
	}
};

class AirlineBook {
private:
	Schedule* airlines;
public:
	AirlineBook() {
		airlines = new Schedule[3];
		airlines[0].setTime("07��");
		airlines[1].setTime("12��");
		airlines[2].setTime("17��");
	}

	void show(int index) {
		cout << airlines[index].getTime() << '\t';
		airlines[index].show();
	}

	void reservation(int index, int seat, string name) {
		airlines[index].reservation(seat, name);
	}

	void cancle(int index, int seat, string name) {
		airlines[index].cancle(seat);
	}
};

class Console {
public:
	void log() {
		int menu;
		int time;
		AirlineBook han;
		cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ� *****" << endl << endl;
		while (true){
		cout << "����:1, ���:2, ����:3, ������:4>>";
		cin >> menu;
			if (menu == 1) { // switch - case �� ����Ϸ��� �Ͽ����� "���̺� ����" �߻� << ������ ������ ���� �� ������ �Է� �� �� �����Ƿ� ������
							 // ��ɹ� ���ο��� �߰ߵǸ� ���� �� ���� ��ɹ����� ������ �����ؾ��Ѵ�. ex) std::cout << x;
				cout << "07��:1, 12��:2, 17��:3>>";
				cin >> time;
				han.show(time - 1); //  �迭 0������ ������̹Ƿ� �ε��� - 1
				int reservingSeat; 
				string reservingName; 
				cout << "�¼���ȣ>>";
				cin >> reservingSeat; // �迭 0������ ������̹Ƿ� �ε��� - 1
				cout << "�̸��Է�>>";
				cin >> reservingName;
				han.reservation(time - 1, reservingSeat - 1, reservingName);
			}
			else if (menu == 2) {
				cout << "07��:1, 12��:2, 17��:3>>";
				cin >> time;
				han.show(time - 1);  // �迭 0������ ������̹Ƿ� �ε��� - 1
				int cancleNum;
				string cancleName;
				cout << "�¼���ȣ>>";
				cin >> cancleNum; // �迭 0������ ������̹Ƿ� �ε��� - 1
				cout << "�̸��Է�>>";
				cin >> cancleName;
				han.cancle(time - 1, cancleNum - 1, cancleName);
			}
			else if (menu == 3) {
				for (int i = 0; i < 3; i++) {
					han.show(i);
				}
			}
			else {
				cout << "���� �ý����� �����մϴ�." << endl;
				return;
			}
			cout << endl;
		}
	}
};

int main() {
	Console c;
	c.log();
}