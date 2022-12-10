#include <iostream>
using namespace std;

// get() 함수 이용
void get1() {
	cout << "cin.get()로 <Enter> 키까지 입력 받고 출력합니다>>";
	int ch; // eof와의 비교를 위해 int 타입으로 선언 : 스트림의 끝을 #define EOF -1 로 정의했기 때문
	while ((ch = cin.get()) != EOF) {
		cout.put(ch);
		if (ch == '\n')
			break;
	}
}

// get(char &) 이용
void get2() {
	cout << "cin.get(char &)로 <Enter> 키까지 입력 받고 출력합니다>>";
	char ch;
	while (true) {
		cin.get(ch);
		if (cin.eof()) // EOF를 만나면 읽기 종료
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