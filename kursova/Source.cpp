#include "Human.h"
#include "building.h"

CBuilding B; CVisitors A; CPersonal C;CBar::CProduction D;CKasa::CSpectacle E;CKasa F;CBar K;CHall H;CTheatre T;

void user()
{
	int age, ID, n, k, h, // Афiша
		index;//бар
	string name;
	int input;
a:	cout << "Афiша - натиснiть 1" << endl;
	cout << "Прайслист бару - натиснiть 2" << endl;
	cout << "Замовити Квиток - натиснiть 3" << endl;
	cout << "Замовити по бару - натиснiть 4" << endl;
	cout << "Ваш квиток - натиснiть 5" << endl;
	cout << "Ваш чек замовлення - натиснiть 6" << endl;
	cout << "Довiдка про персонал - натиснiть 7" << endl;
	cout << "Вибрати свiй стан - натиснiть 8" << endl;
	cout << "Вихiд - натиснiть 9" << endl;
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
		cout << "Введіть номер касси: " << endl;
		cin >> n;
		F.getKases(n);
		cout << "Введiть номер вистави:" << endl;
		cin >> ID;
		H.getHallsList();
		cout << "Введіть номер залу" << endl;
		cin >> h;
		B.setPlace();
		cout << "Введiть iмя" << endl;
		cin >> name;
		cout << "Введiть вiк" << endl;
		cin >> age;
		B.setTicket(name, age, ID, h);
		goto a;
	case 4:
	    K.getBarsList();
		cout << "Введіть номер бару: " << endl;
		cin >> k;
		K.getBars(k);
		cout << "Введiть номер продукту: " << endl;
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
b:	cout << "Встановити Афiшу - натиснiть 1" << endl;
	cout << "Встановити Прайслист Бару - натиснiть 2" << endl;
	cout << "Встановити Постійних Клієнтів - натисніть 3" << endl;
	cout << "Довiдка про персонал - натиснiть 4" << endl;
	cout << "Вибрати свiй стан - натиснiть 5" << endl;
	cout << "Встановити кількість касс - натиснiть 6" << endl;
	cout << "Встановити кількість барів - натисніть 7" << endl;
	cout << "Встановити кількість залів - натисніть 8" << endl;
	cout << "Вихiд - натиснiть 9" << endl;
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
	int ID, C_ID, age,k, n, h, // Афiша
		index;//бар
	int input;
d:	cout << "Афiша - натиснiть 1" << endl;
	cout << "Прайслист бару - натиснiть 2" << endl;
	cout << "Замовити Квиток - натиснiть 3" << endl;
	cout << "Замовити по бару - натиснiть 4" << endl;
	cout << "Ваш квиток - натиснiть 5" << endl;
	cout << "Ваш чек замовлення - натиснiть 6" << endl;
	cout << "Довiдка про персонал - натиснiть 7" << endl;
	cout << "Список постiйних клiєнтiв - натиснiть 8" << endl;
	cout << "Вибрати свiй стан - натиснiть 9" << endl;
	cout << "Вихiд - натиснiть 0" << endl;
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
		cout << "Введіть номер касси: " << endl;
		cin >> n;
		F.getKases(n);
		cout << "Введiть номер вистави:" << endl;
		cin >> ID;
		H.getHallsList();
		cout << "Введіть номер залу" << endl;
		cin >> h;
		cout << "Введіть ваш номер в списку постiйних клiєнтiв" << endl;
		cin >> C_ID;
		cout << "Введiть вiк" << endl;
		cin >> age;
		B.setPlace();
		B.setTicket(A.getCustomerName(C_ID), age, ID, h);
		goto d;
	case 4:
		K.getBarsList();
		cout << "Введіть номер бару: " << endl;
		cin >> k;
		K.getBars(k);
		cout << "Введiть номер продукту: " << endl;
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
c:	cout << "Виберiть Стан: \n Користувач - 1 \ Адмiнiстратор - 2 \ Постiйний клiєнт - 3 \ Інформація про Театр - 4" << endl;
	cout << "Вихiд - 0" << endl;
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