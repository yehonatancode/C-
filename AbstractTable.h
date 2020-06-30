#pragma once

class AbstractTable{
    static int counter;
    protected:
    int size;
    public:
     AbstractTable(int size):size(size){counter++;}
    virtual ~AbstractTable{
        counter--;
        }
    virtual void print() const = 0;
    static void count(){return counter;}
}
AbstractTable::counter =0;