#include <iostream>
#include <string>
using namespace std;
#define SIZE 100
int main() {
	char s[SIZE];
	int count = 0; // x의 개수를 셀 변수
	cout << "문자들을 입력하라(100개미만)>>";
	cin.getline(s, SIZE, '\n'); 
	int n = strlen(s); 
	for (int i = 0; i < n; i++) { // i < n -> s[i] != '\0'
		if (s[i] == 'x')
			count++;
	}
	cout << "x의 개수는" << count << endl;
	return 0;
}