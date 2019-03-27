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
		 name = "���i�i��";
		 adress = "������ ���������,65";
		 time_op = 8;
		 time_cl = 21;
		 setTheatreInfo();
	 }
	
	void setTime()
	{
		cout << "������ ������: ";
		cin >> time;
	}
	bool checkOpen()
	{
		if (time >= time_op && time <= time_cl)
		{
			cout << "³�������" << endl;
			return true;
		}
		else
		{
			cout << "��������" << endl;
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
		outfile << "*********************************������ ��� �����********************************" << endl;
		outfile << "����� ������: " << name << endl;
		outfile << "������ ������: " << adress << endl;
		outfile << "����� ������ �� " << time_op << " ������ �� " << time_cl << " ������" << endl;
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
			cout << "���� �� ������ �����, ������i�� 0" << endl;
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