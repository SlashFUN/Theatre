#include "Human.h"
#include "building.h"

CBuilding B; CVisitors A; CPersonal C;CBar::CProduction D;CKasa::CSpectacle E;CKasa F;CBar K;CHall H;CTheatre T;

void user()
{
	int age, ID, n, k, h, // ��i��
		index;//���
	string name;
	int input;
a:	cout << "��i�� - ������i�� 1" << endl;
	cout << "��������� ���� - ������i�� 2" << endl;
	cout << "�������� ������ - ������i�� 3" << endl;
	cout << "�������� �� ���� - ������i�� 4" << endl;
	cout << "��� ������ - ������i�� 5" << endl;
	cout << "��� ��� ���������� - ������i�� 6" << endl;
	cout << "���i��� ��� �������� - ������i�� 7" << endl;
	cout << "������� ��i� ���� - ������i�� 8" << endl;
	cout << "���i� - ������i�� 9" << endl;
	cin >> input;
	switch (input)
	{
	case 1:
		E.getAfishaList();
		goto a;
	case 2:
		D.getPriceListInfo();
		goto a;
	case 3:
		F.getKasesList();
		cout << "������ ����� �����: " << endl;
		cin >> n;
		F.getKases(n);
		cout << "����i�� ����� �������:" << endl;
		cin >> ID;
		H.getHallsList();
		cout << "������ ����� ����" << endl;
		cin >> h;
		B.setPlace();
		cout << "����i�� i��" << endl;
		cin >> name;
		cout << "����i�� �i�" << endl;
		cin >> age;
		B.setTicket(name, age, ID, h);
		goto a;
	case 4:
	    K.getBarsList();
		cout << "������ ����� ����: " << endl;
		cin >> k;
		K.getBars(k);
		cout << "����i�� ����� ��������: " << endl;
		cin >> index;
		B.setOrder(index);
		goto a;
	case 5:
		B.getTicket();
		goto a;
	case 6:
		B.getOrder();
		goto a;
	case 7:
		C.getInfo();
		goto a;
	case 8:
		return;
	case 9:
		exit(1);
	default:
		goto a;
	}
	system("pause");
}
void admin() {
	int input;
b:	cout << "���������� ��i�� - ������i�� 1" << endl;
	cout << "���������� ��������� ���� - ������i�� 2" << endl;
	cout << "���������� �������� �볺��� - �������� 3" << endl;
	cout << "���i��� ��� �������� - ������i�� 4" << endl;
	cout << "������� ��i� ���� - ������i�� 5" << endl;
	cout << "���������� ������� ���� - ������i�� 6" << endl;
	cout << "���������� ������� ���� - �������� 7" << endl;
	cout << "���������� ������� ���� - �������� 8" << endl;
	cout << "���i� - ������i�� 9" << endl;
	cin >> input;
	switch (input)
	{
	case 1:
		B.setAfisha();
		goto b;
	case 2:
		D.setPriceList();
		goto b;
	case 3:
		A.setCustomer();
		goto b;
	case 4:
		C.getInfo();
		goto b;
	case 5:
		return;
	case 6: 
		F.setKases();
		goto b;
	case 7:
		K.setBars();
		goto b;
	case 8:
		H.setHalls();
		goto b;
	case 9:
		exit(1);
	default:
		goto b;
	}
	system("pause");

}
void customer()
{
	int ID, C_ID, age,k, n, h, // ��i��
		index;//���
	int input;
d:	cout << "��i�� - ������i�� 1" << endl;
	cout << "��������� ���� - ������i�� 2" << endl;
	cout << "�������� ������ - ������i�� 3" << endl;
	cout << "�������� �� ���� - ������i�� 4" << endl;
	cout << "��� ������ - ������i�� 5" << endl;
	cout << "��� ��� ���������� - ������i�� 6" << endl;
	cout << "���i��� ��� �������� - ������i�� 7" << endl;
	cout << "������ ����i���� ��i���i� - ������i�� 8" << endl;
	cout << "������� ��i� ���� - ������i�� 9" << endl;
	cout << "���i� - ������i�� 0" << endl;
	cin >> input;
	switch (input)
	{
	case 1:
		E.getAfishaList();
		goto d;
	case 2:
		D.getPriceListInfo();
		goto d;
	case 3:
		F.getKasesList();
		cout << "������ ����� �����: " << endl;
		cin >> n;
		F.getKases(n);
		cout << "����i�� ����� �������:" << endl;
		cin >> ID;
		H.getHallsList();
		cout << "������ ����� ����" << endl;
		cin >> h;
		cout << "������ ��� ����� � ������ ����i���� ��i���i�" << endl;
		cin >> C_ID;
		cout << "����i�� �i�" << endl;
		cin >> age;
		B.setPlace();
		B.setTicket(A.getCustomerName(C_ID), age, ID, h);
		goto d;
	case 4:
		K.getBarsList();
		cout << "������ ����� ����: " << endl;
		cin >> k;
		K.getBars(k);
		cout << "����i�� ����� ��������: " << endl;
		cin >> index;
		B.setOrder(index);
		goto d;
	case 5:
		B.getTicket();
		goto d;
	case 6:
		B.getOrder();
		goto d;
	case 7:
		C.getInfo();
		goto d;
	case 8:
		A.getCustomers();
		goto d;
	case 9:
		return;
	case 0:
		exit(1);
	default:
		goto d;
	}
	system("pause");
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int stan;
c:	cout << "�����i�� ����: \n ���������� - 1 \ ���i�i������� - 2 \ ����i���� ��i��� - 3 \ ���������� ��� ����� - 4" << endl;
	cout << "���i� - 0" << endl;
	cin >> stan;
	if (stan == 1)
	{
		T.setTime();
		T.checkOpen();
		user();
		goto c;
	}
	else
		if (stan == 2)
		{
			admin();
			goto c;
		}
		else
			if (stan == 3)
			{
				T.setTime();
				T.checkOpen();
				customer();
				goto c;
			}
			else
				if (stan == 4)
				{
					T.getTheatreInfo();
					goto c;
				}
				else
				return -1;
}