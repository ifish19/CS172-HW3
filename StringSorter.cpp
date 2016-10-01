#include<iostream>
#include<string>
#include "StringSorter.h"
using namespace std;

string sort(string& s)
{
	string sSorted;
	char c;
	for(int i = 0; i < 26; i++)
	{
		c = i + 97;
		if(s.find(c) != string::npos)
			sSorted.append(1, c);
	}

	s = sSorted;

	return s;
}