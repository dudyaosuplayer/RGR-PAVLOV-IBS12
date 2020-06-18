#pragma once

#include <string>
#include "ContrAgent.h"

using namespace std;

public class Product {
private:
	string name;
	int count;
	ContrAgent contragent;
public:
	Product(string n, int c, ContrAgent p);
	string getName();
	int getCount();
	ContrAgent getContrAgent();
	void setName(string n);
	void setCount(int c);
	void setContrAgent(string s);
};