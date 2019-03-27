#pragma once
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <fstream>
#include <Windows.h>
#include <vector>
using namespace std;
class CEstablishment
{
protected:
	char* es_type;
public:
	CEstablishment ()
	{}
	CEstablishment(char* type)
	{
		es_type = type;
		cout << es_type << endl;
	}
		virtual ~CEstablishment() {}
	};