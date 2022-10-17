#include <iostream>
using namespace std;
#define SIZE 256
int main() {
	char name[SIZE], address[SIZE], age[SIZE];

	cout << "이름은 ? ";
	cin.getline(name, SIZE);

	cout << "주소는 ? ";
	cin.getline(address, SIZE);

	cout << "나이는 ? ";
	cin.getline(age, SIZE);

	cout << name << ", " << address << ", " << age << "세" << endl;
	return 0;
}