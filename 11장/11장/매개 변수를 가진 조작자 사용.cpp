#include <iostream>
#include <iomanip> // �����ڰ� ���Ե� �������
using namespace std;

int main() {
	cout << showbase;

	cout << setw(8) << "Number" << setw(10) << "Octal" << setw(10) << "Hexa" << endl;

	for (int i = 0; i < 50; i += 5) { /* showbase */
		cout << setw(8) << setfill('.') << dec << i;
		cout << setw(10) << setfill(' ') << oct << i;
		cout << setw(10) << setfill(' ') << hex << i << endl;
	}
}