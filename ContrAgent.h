#pragma once

#include <string>

using namespace std;

public class ContrAgent {
private:
	string name;
public:
	ContrAgent();
	ContrAgent(string s);
	void setName(string s);
	string getName();
};