#include <iostream>
#include <string>
using namespace std;
#define SIZE 10000
int main() {
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다." << endl;
	cout << "텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	int a[27] = {0};
	char histogram[SIZE];
	int num = 0;
	cin.getline(histogram, SIZE, ';');

	for (int i = 0; i < strlen(histogram); i++) {
		if (isalpha(histogram[i])) {// 알파벳인지 검사
			num++;
		}
		histogram[i] = tolower(histogram[i]); // 대문자 -> 소문자
	}
	
	cout << "총 알파벳 수 " << num << endl;
	
	num = 0;
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < strlen(histogram); j++) {
			if (histogram[j] == ('a' + i))
				num++;
		}
		cout << char('a' + i) << " (" <<num<< ")" << "\t : ";
		for (int k = 0; k < num; k++)
			cout << "*";

		num = 0;
		cout << endl;
	}


	return 0;
}