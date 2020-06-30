#include <iostream>
#include <iostream>
using namespace std;

class XX {
   public:
     void aa() {cout<< "in XX aa!"<<endl;}
     virtual void bb() {cout<< "in XX bb!"<<endl;}
     virtual void cc() {cout<< "in XX cc!"<<endl;}
     virtual void dd()=0;
     static void ee() {cout<< "in XX ee!"<<endl;}
   };
   class YY: public XX {
   public:
     void aa() {cout<< "in YY aa!"<<endl;}
     virtual void bb() {cout<< "in YY bb!"<<endl;}
     void cc() {cout<< "in YY cc!"<<endl;}
     void dd() {cout<< "in YY dd!"<<endl;}
     virtual void ee() {cout<< "in YY ee!"<<endl;}
};
int main() {
     XX* zz = new YY();
     zz->aa(); //will call base method, as the pointer is Base.
     zz->bb(); //both Base and Derived are virtual -> calling derived.
     zz->cc(); //calling derived(YY), polymorphism.
     zz->dd(); //"" as above
     zz->ee(); //static functions has leverage on virtual, therefore XX.
     return 0;
}
