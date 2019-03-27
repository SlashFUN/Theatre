#pragma once
#include "Establishment.h"
class CTheatre : public CEstablishment
{
private: 
	string name, adress;
	int time_op, time_cl, time;
	bool open;
protected: 
public :
	 CTheatre()
	{
		 name = "Домiнiор";
		 adress = "Вулиця Коперника,65";
		 time_op = 8;
		 time_cl = 21;
		 setTheatreInfo();
	 }
	
	void setTime()
	{
		cout << "Введіть годину: ";
		cin >> time;
	}
	bool checkOpen()
	{
		if (time >= time_op && time <= time_cl)
		{
			cout << "Відчинено" << endl;
			return true;
		}
		else
		{
			cout << "Зачинено" << endl;
			exit(1);
		}
	}
	void setTheatreInfo()
	{
		ofstream outfile("Dovidka.txt", ios::out);
		if (!outfile)
		{
			cout << "Cannot open file" << endl;
			return;
		}
		outfile << "*********************************Довідка про Театр********************************" << endl;
		outfile << "Назва Театру: " << name << endl;
		outfile << "Адреса Театру: " << adress << endl;
		outfile << "Театр працює від " << time_op << " години до " << time_cl << " години" << endl;
		outfile.close();
	}
	void getTheatreInfo()
	{
		int m;
		string line;
		ifstream infile;
		bool exit1 = false;
		infile.open("Dovidka.txt");
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

	virtual ~CTheatre()
	{}
};