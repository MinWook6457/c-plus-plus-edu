#include <iostream>
#include <string>
using namespace std;
#define SIZE 10000
int main() {
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�." << endl;
	cout << "�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	int a[27] = {0};
	char histogram[SIZE];
	int num = 0;
	cin.getline(histogram, SIZE, ';');

	for (int i = 0; i < strlen(histogram); i++) {
		if (isalpha(histogram[i])) {// ���ĺ����� �˻�
			num++;
		}
		histogram[i] = tolower(histogram[i]); // �빮�� -> �ҹ���
	}
	
	cout << "�� ���ĺ� �� " << num << endl;
	
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