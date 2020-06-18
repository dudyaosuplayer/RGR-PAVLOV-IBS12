#include "Product.h"

Product::Product(string n, int c, ContrAgent p) {
	name = n;
	count = c;
	contragent = p;
}

string Product::getName() {
	return name;
}

int Product::getCount() {
	return count;
}

void Product::setName(string n){
	name = n;
}

void Product::setCount(int c) {
	count = c;
}

ContrAgent Product::getContrAgent() {
	return contragent;
}

void Product::setContrAgent(string s) {
	contragent.setName(s);
}