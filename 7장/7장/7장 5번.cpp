#include <iostream>
#include <string.h>
using namespace std;
class Color {
private:
	int red, blue, green;
public:
	Color() : Color(0,0,0) {
		//
	}
	Color(int r, int b, int g) : red(r), blue(b), green(g) {
		//
	}

	void show() {
		cout << red << " " << blue << " " << green << endl;
	}
	/*
	Color operator +(Color c) {
		Color tmp;
		tmp.red = this->red + c.red;
		tmp.blue = this->blue + c.blue;
		tmp.green = this->green + c.green;
		return tmp;
	}*/

	friend Color operator +(Color c1, Color c2);
	//friend Color operator == (Color c1, Color c2);
	bool operator == (Color c) {
		if (this->red == c.red && this->blue == c.blue && this->green == c.green)
			return true;
		else
			return false;
	}
};
Color operator +(Color c1, Color c2) {
	Color tmp;
	tmp.red = c1.red + c2.red;
	tmp.blue = c1.blue + c2.blue;
	tmp.green = c1.green + c2.green;
	return tmp;
}

/*
	bool operator ==(Color c1, Color c2) {
	if (c1.red == c2.red && c1.green == c2.green && c1.blue == c2.blue) return true;
	else return false;
}
*/
int main() {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);

	if (c == fuchsia)
		cout << "보라색 맞음" << endl;
	else
		cout << "보라색 아님" << endl;
	return 0;
}