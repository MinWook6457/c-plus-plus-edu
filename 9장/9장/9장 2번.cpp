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

class KmToMile : public Converter {
private:
	double km;
public:
	KmToMile(double km) : Converter(km) {
		this->km = km;
	}
protected:
	virtual double convert(double src) {
		return src / ratio;
	}
	virtual string getSourceString() {
		return "Km";
	}
	virtual string getDestString() {
		return "Mile";
	}

};

int main() {
	KmToMile toMile(1.609344);
	toMile.run();
}