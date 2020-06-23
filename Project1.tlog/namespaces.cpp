#include <iostream>
using namespace std;
namespace abc {
	int x = 123;
	void printx() { std::cout << x << std::endl; }
}
namespace def {
	int x = 456;
	void printx() { std::cout << x << std::endl; }
}
using namespace abc;
//using namespace def;
//If we would've also used the 'def' namespace, then once again we made ambiguity.
