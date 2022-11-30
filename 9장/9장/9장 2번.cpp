#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable:4996)

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0; // src를 다른 단위로 변환한다.
	virtual string getSourceString() = 0; // 소스 단위 명칭
	virtual string getDestString() = 0; // dest 단위 명칭
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다. ";
		cout << getSourceString() << "을 입력하세요>> ";
		cin >> src;
		cout << "변환 결과 : " << convert(src) << getDestString() << endl;
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