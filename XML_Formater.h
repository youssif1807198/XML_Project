#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


class XML_Formater
{
public:
	void xml_cutter(ifstream & input_File, ofstream & output);
	XML_Formater();
	~XML_Formater();
};

