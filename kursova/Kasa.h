#pragma once
#include "Theatre.h"


class CKasa : public CTheatre
{
private:
	int id;
	string number;
protected:
public:
	class CSpectacle
	{
	private:
		int id;
		string name;
	public:
		CSpectacle() {}
		CSpectacle(int val, string n)
		{
			id = val;
			name = n;
		}
		void setAfisha()
		{
			int n;
			cout << "Введiть кiлькiсть вистав, якi хочете додати: ";
			cin >> n;
			ofstream out("Afisha.txt", ios::out);
			for (int i = 0; i<n; i++) {
				cout << endl << "Id:";
				cin >> id;
				cout << endl << "Назва:";
				cin >> name;
				out << id << " " << name << endl;
			}
			out.close();
		}
		string getAfisha(int x)
		{
			string needed;
			ifstream in;
			in.open("Afisha.txt", ios::in);
			std::vector<CSpectacle> obj;
			while (in >> id >> name) {
				obj.push_back(CSpectacle(id, name));
			}
			/*cout << "Введiть ID:";
			cin >> x;*/
			for (int i = 0; i < obj.size();i++) {
				if (obj.at(i).getID() == x) {
					needed = obj.at(i).getName();
					//cout << "Id: " << obj.at(i).getID() << "\nName: " << obj.at(i).getName() << endl;
					return needed;
				}
			}
		}
		int getID()
		{
			return id;
		}
		string getName()
		{
			return name;
		}

		void getAfishaList()
		{
			int m;
			string line;
			ifstream infile;
			bool exit1 = false;
			infile.open("Afisha.txt");
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
	CKasa()
	{}
	CKasa(int n, string num)
	{
		id = n;
		number = num;
	}
	void setKases()
	{
		int n;
		cout << "Введiть кiлькiсть касс в театрі: ";
		cin >> n;
		ofstream out("Kases.txt", ios::out);
		for (int i = 0; i<n; i++) {
			cout << endl << "Id:";
			cin >> id;
			cout << endl << "Касса:";
			cin >> number;
			out << id << " Касса_N:" << number << endl;
		}
		out.close();
	}
	string getKases(int x)
	{
		string needed;
		ifstream in;
		in.open("Kases.txt", ios::in);
		std::vector<CKasa> obj;
		while (in >> id >> number) {
			obj.push_back(CKasa(id, number));
		}
		/*cout << "Введiть ID:";
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
	void getKasesList()
	{
		int m;
		string line;
		ifstream infile;
		bool exit1 = false;
		infile.open("Kases.txt");
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
};