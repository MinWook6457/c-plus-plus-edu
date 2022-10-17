#include <iostream>
#include <string>
using namespace std;
#define SIZE 100
int main() {
	char s[SIZE];
	while (true) {
		cout << "종료하고 싶으면 yes를 입력하세요 >> ";
		cin.getline(s, SIZE);
		if (strcmp(s, "yes") == 0) {
			cout << "종료합니다.." << endl;
			break;
		}
	}

	return 0;
}