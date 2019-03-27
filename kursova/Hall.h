#pragma once
#include "Theatre.h"
class CHall : public CTheatre
{
protected:
	int places[25][25], place = 0, id;
	string number;
public:
	CHall(){}
	void setPlace()
	{
		int c = 0;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				places[i][j] = ++c;
			}
		}
		cout << "Ìiñöÿ: " << endl;
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				cout << places[i][j] << ' ';
			}
			cout << endl;
		}
		cout << "Âèáåðiòü ìiñöå: " << endl;
		cin >> this->place;
	};
	CHall(int n, string num)
	{
		id = n;
		number = num;
	}
	void setHalls()
	{
		int n;
		cout << "Ââåäiòü êiëüêiñòü çàëiâ â òåàòði: ";
		cin >> n;
		ofstream out("Halls.txt", ios::out);
		for (int i = 0; i<n; i++) {
			cout << endl << "Id:";
			cin >> id;
			cout << endl << "Çàë:";
			cin >> number;
			out << id << " "<< number << endl;
		}
		out.close();
	}
	string getHalls(int x)
	{
		string needed;
		ifstream in;
		in.open("Halls.txt", ios::in);
		std::vector < CHall > obj;
		while (in >> id >> number) {
			obj.push_back(CHall(id, number));
		}
		/*cout << "Ââåäiòü ID:";
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
	void getHallsList()
	{
		int m;
		string line;
		ifstream infile;
		bool exit1 = false;
		infile.open("Halls.txt");
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
	~CHall()
	{}
};