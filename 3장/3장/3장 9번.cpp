#include <iostream>
using namespace std;

class Oval {
private:
	int width, height;
public:
	Oval(int w, int h) : width(w), height(h) {
		//
	}
	Oval() : width(1), height(1) {
		//
	}

	int getWidth() {
		return width;
	}
	
	int getHeight() {
		return height;
	}

	void set(int w, int h) {
		width = w;
		height = h;
	}
	void show() {
		cout << "width = " << width << " height = " << height << endl;
	}
	~Oval() {
		cout << "Oval ¼Ò¸ê : width = " << width << " height = " << height << endl;
	}
};

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;

}