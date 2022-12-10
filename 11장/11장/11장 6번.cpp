#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	cout << setw(15) << left << "Number";
	cout << setw(15) << left << "Square";
	cout << setw(15) << left << "Square Root"<<endl;

	for (int i = 0; i <= 45; i++) {
		cout << setw(15) << setfill('_') << i;
		cout << setw(15) << setfill('_') << i * i;
		cout << setw(15) << setfill('_') << setprecision(3)<<sqrt(i)<<endl; // setprecision : 소수점 자리수 나타내는 함수(반올림함)

	}
}