#include <iostream>
#include <string>
using namespace std;
#define SIZE 100
int main() {
	char s[SIZE];
	int count = 0; // x�� ������ �� ����
	cout << "���ڵ��� �Է��϶�(100���̸�)>>";
	cin.getline(s, SIZE, '\n'); 
	int n = strlen(s); 
	for (int i = 0; i < n; i++) { // i < n -> s[i] != '\0'
		if (s[i] == 'x')
			count++;
	}
	cout << "x�� ������" << count << endl;
	return 0;
}