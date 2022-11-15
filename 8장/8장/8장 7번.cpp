#include <iostream>
#include <string>

using namespace std;

class BaseMemory  {
private:
	char* mem;
protected:
	BaseMemory(int size) {
		mem = new char[size];
	}
	void burn(char n, int index) {
		mem[index] = n;
	}
	void burning(char* n, int length) {
		for (int i = 0; i < length; i++)
			mem[i] = n[i];
	}

	char getMemory(int index) {
		return mem[index];
	}
};

class ROM : public BaseMemory {
public:
	ROM(int size, char* p, int n) : BaseMemory(size) {
		burning(p, n);
	}
	char read(int n) {
		return getMemory(n);
	}
};

class RAM : public BaseMemory {
public:
	RAM(int size) : BaseMemory(size) {
		//
	}
	void write(int n, char c) {
		burn(c,n);
	}
	char read(int index) {
		return getMemory(index);
	}
};

int main() {
	char x[5] = { 'h','e','l','l','o' };
	ROM biosROM(1024 * 10, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
	return 0;
}

