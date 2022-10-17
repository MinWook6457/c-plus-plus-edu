#include <iostream>
#include <string>
using namespace std;

class Trace {
public:
	static int debug;
	static void put(string tag, string info);
	static void print(string tag = "");
	static string vs[100][2];
};

int Trace::debug = 0;
string Trace::vs[100][2] = {""};
void Trace::put(string tag, string info) {
	vs[debug][0] = tag;
	vs[debug][1] = info;
	debug++;
}

void Trace::print(string tag) {
	if (!tag.empty()) {
		cout << "-----" << tag << "�±��� ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < debug; i++) {
			if (vs[i][0].compare(tag) == 0) {
				cout << vs[i][0] << ":" << vs[i][1] << endl;
			}
		}
	}
	else {
		cout << tag << "--- ��� Trace ������ ����մϴ�. ---" << endl;
		for (int i = 0; i < debug; i++) {
			cout << vs[i][0] << ":" << vs[i][1] << endl;
		}
	}
}


void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}
int main() {
	Trace::put("main()", "���α׷� �����մϴ�");
	f();

	Trace::put("main()", "����");
	Trace::print("f()");
	Trace::print();
}