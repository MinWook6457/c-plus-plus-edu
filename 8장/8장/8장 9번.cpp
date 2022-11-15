// Seat 클래스 : 하나의 좌석 구현 (예약자 이름, 좌석 예약 및 취소 , 보기)
// Schedule 클래스 : 하나의 스케쥴을 구현 (8개의 Seat 객체 생성)
// AirlineBook 클래스 : Schedule 객체 3개 생성 (예약 시스템 작동)
// Console 클래스 : 메뉴 출력 함수, 메뉴 선택 ... 등 기본적인 ui (멤버 함수는 static 으로 작성)

#include <iostream>
#include <string>

using namespace std;

class Seat {
private:
	string seat;
public:
	Seat(string seat = "---") {
		this->seat = seat;
	}

	void reservation(string name) {
		seat = name;
	}

	void cancle() {
		seat = "---";
	}

	void show() {
		cout << seat;
	}
};

class Schedule {
private:
	Seat* schedule; // 예약 좌석
	string time; // 예약 시간
public:
	Schedule(string time = "00시") {
		schedule = new Seat[8]; // 8개 Seat 객체 생성
		this->time = time;
	}

	void reservation(int index, string name) {
		schedule[index].reservation(name);
	}

	void cancle(int index) {
		schedule[index].cancle();
	}

	void show() {
		for (int i = 0; i < 8; i++) {
			schedule[i].show();
			cout << "\t";
		}
		cout << endl;
	}
	 // time 변수에 대한 get,set 메소드 작성
	string getTime() {
		return time;
	}

	void setTime(string time) {
		this->time = time;
	}
};

class AirlineBook {
private:
	Schedule* airlines;
public:
	AirlineBook() {
		airlines = new Schedule[3];
		airlines[0].setTime("07시");
		airlines[1].setTime("12시");
		airlines[2].setTime("17시");
	}

	void show(int index) {
		cout << airlines[index].getTime() << '\t';
		airlines[index].show();
	}

	void reservation(int index, int seat, string name) {
		airlines[index].reservation(seat, name);
	}

	void cancle(int index, int seat, string name) {
		airlines[index].cancle(seat);
	}
};

class Console {
public:
	void log() {
		int menu;
		int time;
		AirlineBook han;
		cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl << endl;
		while (true){
		cout << "예약:1, 취소:2, 보기:3, 끝내기:4>>";
		cin >> menu;
			if (menu == 1) { // switch - case 문 사용하려고 하였으나 "레이블 오류" 발생 << 제어의 전송은 변수 의 범위를 입력 할 수 없으므로 선언문이
							 // 명령문 내부에서 발견되면 고유 한 복합 명령문으로 범위를 지정해야한다. ex) std::cout << x;
				cout << "07시:1, 12시:2, 17시:3>>";
				cin >> time;
				han.show(time - 1); //  배열 0번부터 사용중이므로 인덱스 - 1
				int reservingSeat; 
				string reservingName; 
				cout << "좌석번호>>";
				cin >> reservingSeat; // 배열 0번부터 사용중이므로 인덱스 - 1
				cout << "이름입력>>";
				cin >> reservingName;
				han.reservation(time - 1, reservingSeat - 1, reservingName);
			}
			else if (menu == 2) {
				cout << "07시:1, 12시:2, 17시:3>>";
				cin >> time;
				han.show(time - 1);  // 배열 0번부터 사용중이므로 인덱스 - 1
				int cancleNum;
				string cancleName;
				cout << "좌석번호>>";
				cin >> cancleNum; // 배열 0번부터 사용중이므로 인덱스 - 1
				cout << "이름입력>>";
				cin >> cancleName;
				han.cancle(time - 1, cancleNum - 1, cancleName);
			}
			else if (menu == 3) {
				for (int i = 0; i < 3; i++) {
					han.show(i);
				}
			}
			else {
				cout << "예약 시스템을 종료합니다." << endl;
				return;
			}
			cout << endl;
		}
	}
};

int main() {
	Console c;
	c.log();
}