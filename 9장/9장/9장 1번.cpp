#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable:4996)


class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0; // src�� �ٸ� ������ ��ȯ�Ѵ�.
	virtual string getSourceString() = 0; // �ҽ� ���� ��Ī
	virtual string getDestString() = 0; // dest ���� ��Ī
public:
	Converter(double ratio) { this->ratio = ratio; }

	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�. ";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter {
private:
	double money;
public:
	WonToDollar(double money) : Converter(money) {
		this->money = money;
	}
	virtual double convert(double src) {
		return src / ratio;
	}
	virtual string getSourceString() {
		return "��";
	}
	virtual string getDestString() {
		return "�޷�";
	}

};

int main() {
	WonToDollar wd(1400);
	wd.run();
}