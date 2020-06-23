#include <iostream>
using namespace std;

class Physical {
	double height, weight;

public:
	Physical() {
		height = 1.75;
		weight = 75;
	} // this is an in-line constructor.
	Physical(double height, double weight);
	// this is an out of line constructor,
	//as we only leave a remark, and define later on.
	string to_string() {
		return "Physical Data" + std::to_string(this->height) + " , " + std::to_string(this->weight); //this is an inline definition
	}
	Physical addAmount(); //this is an outline def, as we define it later.
};


Physical::Physical(double h1,double w1) {
	this->height = h1;
	this->weight = w1;
	
}

Physical Physical::addAmount() {
	return Physical(height + 5, weight + 5);
}

int main() {
	Physical pOutline(1.80, 89);
	pOutline.to_string();
	pOutline.addAmount();
	pOutline.to_string();
	Physical pInline();
	pOutline.addAmount();
	pOutline.to_string();

}

