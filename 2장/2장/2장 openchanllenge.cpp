#include <iostream>
#include <string> // string 헤더파일 전처리
using namespace std;

int main() {
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요" << endl;
	
	string ro, jul;
	cout << "로미오 : ";
	cin >> ro;
	cout << "줄리엣 : ";
	cin >> jul;
	
	// cstring 헤더파일을 쓰는 경우
	// strcmp(ro," ") == 0 을 조건문 안에 넣어 비교
	if (ro == "가위" && jul == "보")
		cout << "로미오가 이겼습니다" << endl;
	else if (ro == "가위" && jul == "바위")
		cout << "줄리엣이 이겼습니다" << endl;
	else if (ro == "보" && jul == "가위")
		cout << "줄리엣이 이겼습니다" << endl;
	else if (ro == "보" && jul == "바위")
		cout << "로미오가 이겼습니다" << endl;
	else if (ro == "바위" && jul == "가위")
		cout << "로미오가 이겼습니다" << endl;
	else if (ro == "바위" && jul == "보")
		cout << "줄리엣이 이겼습니다" << endl;
	else
		cout << "비겼습니다" << endl;
	return 0;
}