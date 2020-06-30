#pragma once

class StringTable : public AbstractTable{
    string* values;
    void print(){
        cout << "String table with values" << endl;
        for(int i=0; i<size; i++) cout << values[i] + " ";
    }
    StringTable(int size): AbstractTable(size), values(new string[size]){
        for(int i=0;i<size;++i) values[i] = "%";
    }
    ~StringTable(){
        delete [] values;
    }
};