#include <iostream>
#include <string>
using namespace std;
int main() {
	string s = "java";
	string t = "c++";
	cout << s << t << endl;
	s.swap(t);
	cout << s << t << endl;

	if (s.compare(t) > 0)
		cout << s << "가 " << t << " 보다 앞에 있습니다." << endl;
	else
		cout << s << "가 " << t << " 보다 뒤에 있습니다." << endl;

	string a = "java";
	string b = "jaz";

	cout << a << b << endl;
	a.append(b, 1, 4); // 길이를 벗어나서 붙여주면 컴파일러가 어떻게 판단하는지? -> 오류는 발생 x why?
	cout << a << endl;

	b.insert(3, "qwe"); // insert함수는 런타임 에러 발생함
	cout << a << endl;

	string c = "i love java";
	string d = "study";
	cout << c << endl;
	c.replace(2, 4, d);
	cout << c << endl;

	cout << c.size() << " " << c.length() << " " << c.capacity() << endl;

	c.erase(0, 5);
	cout << c << endl;

	c = d;
	cout << c.size() << " " << c.length() << " " << c.capacity() << endl;
	c.clear();
	cout << c << endl;


	string e = "I love java program study";
	cout << e << endl;
	int index = e.find("a");
	cout << index << endl;
	int index1 = e.find("a", index + 1);
	cout << index1 << endl;
	int index2 = e.find("a", index1 + 1);
	cout << index2 << endl;
	int index3 = e.find("a", index2 + 1);
	cout << index3 << endl;

}