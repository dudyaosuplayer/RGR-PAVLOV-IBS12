#include "ContrAgent.h"

ContrAgent::ContrAgent() {
	setName("");
}
ContrAgent::ContrAgent(string s) {
	setName(s);
}
void ContrAgent::setName(string s) {
	name = s;
}
string ContrAgent::getName() {
	return name;
}