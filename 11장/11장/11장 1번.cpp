#include <iostream>
#pragma warning(disable:4996)

using namespace std;

int main() {
	int c;
	
	int n = 0;
	while ((c=cin.get())!=EOF){
		if (c == '\n')
			break;
		if (c == 'a')
			n++;
	}
	cout << n;

}
