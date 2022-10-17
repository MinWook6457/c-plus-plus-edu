#include <iostream>
using namespace std;
#include "3Àå 11¹ø_Box.h"

int main(void) {
	Box b(10, 2);
	b.draw();
	cout << endl;
	b.setSize(7, 4);
	b.setFill('^');
	b.draw();

	return 0;
}