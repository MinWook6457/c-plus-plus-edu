#include <iostream>
using namespace std;

class Board {
public:
	static string* disboard;
	static int index;
	static void add(string str);
	static void print();
};

string* Board::disboard = new string[100];
int Board::index = 0;

void Board::add(string str) {
	disboard[index++] = str;
}

void Board::print() {
	cout << "************ �Խ��� �Դϴ�. ************" << endl;
	for (int i = 0; i < index; i++) {
		cout << i << ": " << disboard[i] << endl;
	}
}

int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}