#pragma once

class AbstractTable{
    static int counter;
    virtual void dummy() = 0;
    static void count(){return counter;}
}
AbstractTable::counter =0;