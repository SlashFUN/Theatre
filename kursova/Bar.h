#pragma once
#include "Theatre.h"

class CBar : public CTheatre
{
protected:
	int id;// of product
	string number;
public:
	class CProduction
	{
	private:
		int id;
		string product;
		string price;
	public:
		CProduction()
		{}
		CProduction(int val, string productname)
		{
			id = val;
			product = productname;
		}
		void setPriceList()
		{
			int n;
			cout << "¬ведiть кiлькiсть продуктiв, €кi хочете додати: ";
			cin >> n;
			ofstream out("Pricelist.txt", ios::out);
			for (int i = 0; i<n; i++) {
				cout << endl << "Id:";
				cin >> id;
				cout << endl << "ѕродукт:";
				cin >> product;
				out << id << ' ' << product << endl;
			}
			out.close();
		}
		string getPriceList(int x)
		{
			string needed1;
			ifstream in;
			in.open("Pricelist.txt", ios::in);
			std::vector<CProduction> obj;
			while (in >> id >> product) {
				obj.push_back(CProduction(id, product));
			}
			for (int i = 0; i < obj.size();i++) {
				if (obj.at(i).getID() == x) {
					needed1 = obj.at(i).getProduct();
					/*cout << "Id: " << obj.at(i).getID() << "\nName: " << obj.at(i).getName() << endl;*/
					return needed1;
				}
			}
		}
		int getID()
		{
			return id;
		}
		string getProduct()
		{
			return product;
		}
		void getPriceListInfo()
		{
			int m;
			string line;
			ifstream infile;
			bool exit1 = false;
			infile.open("Pricelist.txt");
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
				cout << "якщо ви хочете вийти, натиснiть 0" << endl;
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
	CBar()
	{}
	CBar(int n, string num)
	{
		id = n;
		number = num;
	}
	void setBars()
	{
		int n;
		cout << "¬ведiть кiлькiсть барiв в театр≥: ";
		cin >> n;
		ofstream out("Bars.txt", ios::out);
		for (int i = 0; i<n; i++) {
			cout << endl << "Id:";
			cin >> id;
			cout << endl << "Ѕар:";
			cin >> number;
			out << id << " Ѕар_N:" << number << endl;
		}
		out.close();
	}
	string getBars(int x)
	{
		string needed;
		ifstream in;
		in.open("Bars.txt", ios::in);
		std::vector<CBar> obj;
		while (in >> id >> number) {
			obj.push_back(CBar(id, number));
		}
		/*cout << "¬ведiть ID:";
		cin >> x;*/
		for (int i = 0; i < obj.size();i++) {
			if (obj.at(i).getID() == x) {
				needed = obj.at(i).getNum();
				//cout << "Id: " << obj.at(i).getID() << "\nName: " << obj.at(i).getName() << endl;
				return needed;
			}
		}
	}
	int getID()
	{
		return id;
	}
	string getNum()
	{
		return number;
	}
	void getBarsList()
	{
		int m;
		string line;
		ifstream infile;
		bool exit1 = false;
		infile.open("Bars.txt");
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
			infile.close();
			return;
		}
	}
	~CBar()
	{}
};