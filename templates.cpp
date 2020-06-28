//working with templates
//motive - instead of defining a function each time
//for multiple vars, we define it once in a generic way.
#include "templates.h"
#include <iostream>
using namespace std;

int main(){
    string fn = "Johnas";
    string ln = "Tsevas";
cout << "What's your name?" << endl;
cout << "My name is "<< fn <<" " << ln << endl;
cout << "check a magic, say that again" << endl;
swap(fn,ln);
cout << "My name is "<< fn <<" " << ln << endl;
cout << "Whoops!" << endl;


    return 0;
}