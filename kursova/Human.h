#pragma once
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <fstream>
#include <locale>
#include <vector>
#include <Windows.h>
using namespace std;

class CHuman
{
protected:
	string m_pszname;
	int m_age;
public:
	CHuman()
	{};
	
	virtual ~CHuman()
	{
	}
};



class CVisitors : public CHuman
{
private:
	int id;
public:
	CVisitors()
	{

	}
	CVisitors(int var, string name)
	{
		id = var;
		m_pszname = name;
	}
	//CVisitors(int var, int age)
	//{
	//	id = var;
	//	m_age = age;
	//}
	string getName()
	{
		return m_pszname;
	}
	//int getAge()
	//{
	//	return m_age;
	//}
	int getID()
	{
		return id;
	}
	void setCustomer()
	{
		int n;
		cout << "����i�� �i���i��� ����i���� ����������i�, ���� ������ ������: ";
		cin >> n;
		ofstream out("Customers.txt", ios::out);
		for (int i = 0; i<n; i++) {
			cout << endl << "Id:";
			cin >> id;
			cout << endl << "I�'�:";
			cin >> m_pszname;
			out << id << " I�'�:" << m_pszname << endl;
		}
		out.close();
	}
	string getCustomerName(int x)
	{
		string needed;
		ifstream in;
		in.open("Customers.txt", ios::in);
		std::vector<CVisitors> obj;
		while (in >> id >> m_pszname) {
			obj.push_back(CVisitors(id, m_pszname));
		}
		for (int i = 0; i < obj.size();i++) {
			if (obj.at(i).getID() == x) {
				needed = obj.at(i).getName();
				/*cout << "Id: " << obj.at(i).getID() << "\nName: " << obj.at(i).getName() << endl;*/
				return needed;
			}
		}
	}
	//int getCustomerAge(int x)
	//{
	//	int needed;
	//	ifstream in;
	//	in.open("Customers.txt", ios::in);
	//	std::vector<CVisitors> obj1;
	//	while (in >> id >>  m_age) {
	//		obj1.push_back(CVisitors(id, m_age));
	//	}
	//	for (int i = 0; i < obj1.size();i++) {
	//		if (obj1.at(i).getID() == x) {
	//			needed = obj1.at(i).getAge();
	//			/*cout << "Id: " << obj.at(i).getID() << "\nName: " << obj.at(i).getName() << endl;*/
	//			return needed;
	//		}
	//	}
	//}
	void getCustomers()
	{
		int m;
		string line;
		ifstream infile;
		bool exit1 = false;
		infile.open("Customers.txt");
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
};





class CPersonal : public CHuman
{
private:
public:
	CPersonal()
	{};
	void setInfo()
	{
		fstream outfile("Personal.txt", ios::out);
		if (!outfile)
		{
			cout << "Cannot open file" << endl;
			return;
		}
		outfile << "******************************��������********************************" << endl;
		outfile << "������� ����� I������� | ������: �������� | �i�: 20" << endl;
		outfile << "�����i��� �����: 7000 ���." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "����� �����i�� �i����i��� | ������: ��������� ��������� | �i�: 21" << endl;
		outfile << "�����i��� �����: 5000 ���." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "������ ����i� �����i����� | ������: ��������� | �i�: 23" << endl;
		outfile << "�����i��� �����: 4500 ���." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "��i���� ����i� ��������� | ������: �i����i������� �� ������� | �i�: 20" << endl;
		outfile << "�����i��� �����: 3200 ���." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "��������� ���i� ����i���� | ������: ����� | �i�: 22" << endl;
		outfile << "�����i��� �����: 3200 ���." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "��������� ������ i������� | ������: ��������� �����i� | �i�: 22" << endl;
		outfile << "�����i��� �����: 2500 ���." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "��������� ������ ��������� | ������: ������ | �i�: 21" << endl;
		outfile << "�����i��� �����: 2500 ���." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "������ ����� ��������� | ������: ������������ 1 | �i�: 22" << endl;
		outfile << "�����i��� �����: 1500 ���." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "������� i���� �����i��� | ������: ������������ 2 | �i�: 20" << endl;
		outfile << "�����i��� �����: 1450 ���." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "����� ������ �������� | ������: ������� ��������� |�i�: 45" << endl;
		outfile << "�����i��� �����: 1750 ���." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "���� ������ �����i����� | ������: ��������� | �i�: 44" << endl;
		outfile << "�����i��� �����: 1700 ���." << endl;
		outfile << "**********************************************************************" << endl;
		outfile.close();
	}
	void getInfo()
	{
		int m;
		string line;
		ifstream infile;
		bool exit1 = false;
		infile.open("Personal.txt");
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
};