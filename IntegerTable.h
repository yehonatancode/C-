#pragma once

#include <iostream>
#include 

class IntegerTable: public AbstractTable{
    int* values;
    void print(){
        cout << "Integer table with values" << endl;
        for(int i=0; i<size; i++) cout << values[i] + " ";
    }
    IntegerTable(int size): AbstractTable(size), values(new int[size]){
        for(int i=0;i<size;++i) values[i] = "%";
    }
    ~IntegerTable(){
        delete [] values;
    }
};