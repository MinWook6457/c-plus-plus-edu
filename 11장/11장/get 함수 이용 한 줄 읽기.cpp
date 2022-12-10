#include <iostream>
using namespace std;

// get() �Լ� �̿�
void get1() {
	cout << "cin.get()�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	int ch; // eof���� �񱳸� ���� int Ÿ������ ���� : ��Ʈ���� ���� #define EOF -1 �� �����߱� ����
	while ((ch = cin.get()) != EOF) {
		cout.put(ch);
		if (ch == '\n')
			break;
	}
}

// get(char &) �̿�
void get2() {
	cout << "cin.get(char &)�� <Enter> Ű���� �Է� �ް� ����մϴ�>>";
	char ch;
	while (true) {
		cin.get(ch);
		if (cin.eof()) // EOF�� ������ �б� ����
			break;
		cout.put(ch);
		if (ch == '\n')
			break;
	}
}

int main() {
	get1();
	get2();
}