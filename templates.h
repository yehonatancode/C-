#praga once

template <typename T> void swap(T& a, T& b){
    T tmp = a;
    a=b;
    b=tmp;
}

//We must define templates in header files, so that the compiler can access time, in compilation time.