#include <iostream>
using namespace std;

class Color {
private:
	int red, green, blue;
public:
	Color() : red(0), green(0), blue(0) {
		//
	}

	Color(int r, int g, int b) : red(r), green(g), blue(b) {
		//
	}
	void setColor(int red, int green, int blue) {
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
	void show() {
		cout << red << ' ' << blue << ' ' << green << endl;
	}

};
int main() {
	Color screenColor(255, 0, 0);
	Color* p;
	p = &screenColor;
	p->show();
	Color colors[3];
	p = colors;

	for (int i = 0; i < 3; i++) {
		(p + i)->setColor(255, i, i);
	}

	for (int i = 0; i < 3; i++) {
		(p + i)->show();
		// p[i]->show();
		// (*p++).show();
	}
}