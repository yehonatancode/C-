#include <ostream>
#include <stdio.h>
using namespace std;

class Overload {
	int content;


	ostream& operator<<(ostream& os, string s) {
		std::operator<<(os, s);
		return os;
		//this is the classic definition of the '<<' operator
	}

	//we could define it in a whole different way.

	string& operator<<(string s) {
		string final = "";
		for (int i = 0; i < 5; i++) {
			final += s;
		}
		return final;
	}
	//for example, multiply the given string by 5 times.

	//NOTE: THE . (DOT) operator can not be overload.

	//prefix increment operator definition: (++x)
	Overload& operator++() {
		content++;
		return *this;
	}

	//postfix increment definition: (x++)
	const Overload operator++(int incrementing) {
		Overload c = *this;
		content++
			return c;
	}



};