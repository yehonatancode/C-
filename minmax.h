#pragma once
#include <algorithm>

template <typename Iterator1, typename iterator2>
void minmax(Iterator1 begin1, Iterator1 end1, Iterator2 begin2, Iterator2 end2){
    while(true){
    if(begin1==end1 && begin2==end2) break; // both length 0
    else if (begin1==end1 && begin2!=end2) throw string "sequence 2 is longer";
    //it means list 1 iterator has finished passing through it's elements while list 2 didn't => it's longer.
    else if(begin1!=end1 && begin2==end2) throw string "sequence 1 is longer"; //as mentioned
    else {
            if(*begin1 > *begin2) std::swap(*begin1, *begin2);
            ++begin1;
            ++begin2;
        }
    }
    
}
