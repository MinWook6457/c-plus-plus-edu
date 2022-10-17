#include <iostream>
using namespace std;

class Rect;

class RectManager {
public:
	bool equals(Rect r, Rect s);
};

class Rect {
private:
	int width, height;
public:
	Rect(int w, int h) : width(w), height(h) {
		//
	}
	friend bool RectManager::equals(Rect r, Rect s);
};

bool RectManager::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;
}

int main() {
	Rect a(3, 4), b(3, 4);
	RectManager man;
	if (man.equals(a, b))
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}