#include <iostream>
using namespace std;
#define SIZE 256
int main() {
	char name[SIZE], address[SIZE], age[SIZE];

	cout << "�̸��� ? ";
	cin.getline(name, SIZE);

	cout << "�ּҴ� ? ";
	cin.getline(address, SIZE);

	cout << "���̴� ? ";
	cin.getline(age, SIZE);

	cout << name << ", " << address << ", " << age << "��" << endl;
	return 0;
}