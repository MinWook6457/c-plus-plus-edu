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
		cout << "-----" << tag << "태그의 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < debug; i++) {
			if (vs[i][0].compare(tag) == 0) {
				cout << vs[i][0] << ":" << vs[i][1] << endl;
			}
		}
	}
	else {
		cout << tag << "--- 모든 Trace 정보를 출력합니다. ---" << endl;
		for (int i = 0; i < debug; i++) {
			cout << vs[i][0] << ":" << vs[i][1] << endl;
		}
	}
}


void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}
int main() {
	Trace::put("main()", "프로그램 시작합니다");
	f();

	Trace::put("main()", "종료");
	Trace::print("f()");
	Trace::print();
}