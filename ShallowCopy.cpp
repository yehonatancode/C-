class IntList{
    int* p;
    public:
    IntList(int n):
    p(new int[n]){} //once we call new, we create the IntList obj
    // on the heap. therefore we need to use delete in destructor.
    ~IntList(){
        delete[]p;} 
    };
    int main(){
        IntList a(3);
        IntList b=a; //creating a shallow copy, therefore when we call b's destructor, a pointer points to cleared memory.
        IntList c(2);
    }
