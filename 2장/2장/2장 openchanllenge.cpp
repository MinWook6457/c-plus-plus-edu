#include <iostream>
#include <string> // string ������� ��ó��
using namespace std;

int main() {
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���" << endl;
	
	string ro, jul;
	cout << "�ι̿� : ";
	cin >> ro;
	cout << "�ٸ��� : ";
	cin >> jul;
	
	// cstring ��������� ���� ���
	// strcmp(ro," ") == 0 �� ���ǹ� �ȿ� �־� ��
	if (ro == "����" && jul == "��")
		cout << "�ι̿��� �̰���ϴ�" << endl;
	else if (ro == "����" && jul == "����")
		cout << "�ٸ����� �̰���ϴ�" << endl;
	else if (ro == "��" && jul == "����")
		cout << "�ٸ����� �̰���ϴ�" << endl;
	else if (ro == "��" && jul == "����")
		cout << "�ι̿��� �̰���ϴ�" << endl;
	else if (ro == "����" && jul == "����")
		cout << "�ι̿��� �̰���ϴ�" << endl;
	else if (ro == "����" && jul == "��")
		cout << "�ٸ����� �̰���ϴ�" << endl;
	else
		cout << "�����ϴ�" << endl;
	return 0;
}