#include <iostream>
#include <string>
using namespace std;
#define SIZE 100
int main() {
	char s[SIZE];
	while (true) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ��� >> ";
		cin.getline(s, SIZE);
		if (strcmp(s, "yes") == 0) {
			cout << "�����մϴ�.." << endl;
			break;
		}
	}

	return 0;
}