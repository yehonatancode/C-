//4-tuple basic implementation
//@author Yehonatan Tseva

#include <cassert>
#include <iostream>
using std::cout;
using std::endl;
using std::ostream;
using std::string;

template<typename T1, typename T2, typename T3, typename T4>
struct tuple4{
    T1 first;
    T2 second;
    T3 third;
    T4 fourth;
};

tuple4<string,double,int,int>func(){
    return {"Intersting combination",3.14,404,1337};
}
//overloading the << operator
template<typename T1, typename T2, typename T3, typename T4>
ostream& operator<<(ostream& os,
const tuple4<T1,T2,T3,T4>& t4){
    os << t4.first << " ," << t4.second << " ," << t4.third << " ," << t4.fourth <<endl;
    return os;
}

int main(){
    tuple4<string,double,int,int> t{"Johnas", 7.18,29,23};
    auto t2 = func();
    cout << "t=" << t << " t2=" << t2;


}
