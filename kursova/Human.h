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
		cout << "Введiть кiлькiсть постiйних користувачiв, яких хочете додати: ";
		cin >> n;
		ofstream out("Customers.txt", ios::out);
		for (int i = 0; i<n; i++) {
			cout << endl << "Id:";
			cin >> id;
			cout << endl << "Iм'я:";
			cin >> m_pszname;
			out << id << " Iм'я:" << m_pszname << endl;
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
		outfile << "******************************Персонал********************************" << endl;
		outfile << "Завялов Євген Iгорович | Посада: Директор | Вiк: 20" << endl;
		outfile << "Заробiтня плата: 7000 грн." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "Осняк Ангелiна Вiкторiвна | Посада: Заступник директора | Вiк: 21" << endl;
		outfile << "Заробiтня плата: 5000 грн." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "Антиба Сергiй Олексiйович | Посада: Сценарист | Вiк: 23" << endl;
		outfile << "Заробiтня плата: 4500 грн." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "Спiрняк Андрiй Тихонович | Посада: Вiдповiдальний за костюми | Вiк: 20" << endl;
		outfile << "Заробiтня плата: 3200 грн." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "Лазаренко Софiя Андрiївна | Посада: Касир | Вiк: 22" << endl;
		outfile << "Заробiтня плата: 3200 грн." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "Максимець Максим iгорович | Посада: Контролер квиткiв | Вiк: 22" << endl;
		outfile << "Заробiтня плата: 2500 грн." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "Максимець Богдан Романович | Посада: Бармен | Вiк: 21" << endl;
		outfile << "Заробiтня плата: 2500 грн." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "Грибик Тарас Марянович | Посада: Прибиральник 1 | Вiк: 22" << endl;
		outfile << "Заробiтня плата: 1500 грн." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "Волкова iрина Марянiвна | Посада: Прибиральник 2 | Вiк: 20" << endl;
		outfile << "Заробiтня плата: 1450 грн." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "Бойко Руслан Маркович | Посада: Старший охоронець |Вiк: 45" << endl;
		outfile << "Заробiтня плата: 1750 грн." << endl;
		outfile << "**********************************************************************" << endl;
		outfile << "Форс Максим Олексiйович | Посада: Охоронець | Вiк: 44" << endl;
		outfile << "Заробiтня плата: 1700 грн." << endl;
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