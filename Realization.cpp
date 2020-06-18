#include "Realization.h"
#include <fstream>
#include <iostream>

using namespace std;

void Realization::ProductRealization(int count, char znak) {
	fstream fout;
	fout.open("ReportM.txt", ios::app);
	fout << "\n***\n";
	fout.close();
}