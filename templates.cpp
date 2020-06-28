//working with templates
//motive - instead of defining a function each time
//for multiple vars, we define it once in a generic way.
#include <iostream>
using namespace std;

template <typename T> void swap(T& a, T& b){
    T tmp = a;
    a=b;
    b=tmp;
}

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