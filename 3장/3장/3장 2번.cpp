#include <iostream>
#include <cstring>
#include <string>
#pragma warning(disable:4996)
using namespace std;

class Date {
private:
	int years, months, days;
public:
	Date(int y, int m, int d) : years(y), months(m), days(d) {
		//
	}
	Date(string s) {
		char* buff = new char[100];
		strcpy(buff , s.c_str());
		years = stoi(strtok(buff, "/"));
		months = stoi(strtok(nullptr, "/"));
		days = stoi(strtok(nullptr, "/"));
	}
	int getYear() {
		return years;
	}
	int getMonth() {
		return months;
	}
	int getDay() {
		return days;
	}
	void show() {
		cout << years << "³â" << months << "¿ù" << days << "ÀÏ" << endl;
	}

};
int main() {
	Date birth(1945, 8, 15);
	Date independenceDay("1945/8/15");
	independenceDay.show();
	cout << birth.getYear() << "," << birth.getMonth() << "," << birth.getDay() << endl;

	return 0;
}