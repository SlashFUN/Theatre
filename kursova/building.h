#include "Kasa.h"
#include "Hall.h"
#include "Bar.h"
class CBuilding : public CKasa::CSpectacle, public CHall, public CBar :: CProduction
{
private:
protected:
public:
	CBuilding()
	{

	}

	void setTicket(string name, int age, int id, int num)
	{
		bool exit = false;
		ofstream outfile("Ticket.txt", ios::out);
		if (!outfile)
		{
			cout << "Cannot open file" << endl;
			return;
		}
		outfile << "*********************************Квиток********************************" << endl;
		outfile << "iмя: " << name << endl;
		outfile << "Вiк: " << age << endl;
		outfile << "Зал: " << getHalls(num) << endl;
		outfile << "Мiсце: " << this->place << endl;
		outfile << "Назва: " << getAfisha(id) << endl;
		outfile.close();
	}


	void getTicket()
	{
		int m;
		string line;
		ifstream infile;
		bool exit1 = false;
		infile.open("Ticket.txt");
		while (exit1 != true)
		{
			if (!infile)
			{
				cout << "Cannot open file" << endl;
				exit1 = true;
			}
			while (!infile.eof())
			{
				getline(infile, line);
				cout << line << endl;
			}
			cout << "Якщо ви хочете вийти, натиснiть 0" << endl;
			cin >> m;
			if (m == 0)
			{
				infile.close();
				return;
			}
		}
		infile.close();
		return;
	}
	void setOrder(int id)
	{
		ofstream outfile("Order.txt", ios::out);
		if (!outfile)
		{
			cout << "Cannot open file" << endl;
			return;
		}
		outfile << "*********************************Замовлення********************************" << endl;
		outfile << "Назвa: " << getPriceList(id) << endl;
		outfile.close();
	}
	void getOrder()
	{
		int m;
		string line;
		ifstream infile;
		bool exit1 = false;
		infile.open("Order.txt");
		while (exit1 != true)
		{
			if (!infile)
			{
				cout << "Cannot open file" << endl;
				exit1 = true;
			}
			while (!infile.eof())
			{
				getline(infile, line);
				cout << line << endl;
			}
			cout << "Якщо ви хочете вийти, натиснiть 0" << endl;
			cin >> m;
			if (m == 0)
			{
				infile.close();
				return;
			}
		}
		infile.close();
		return;
	}
};
