#include <iostream>
#include <vector>
#define SR 500

void manageCapacity(std::vector<int> &v){
    std::cout<<v.size()<<" "<<v.capacity()<<"\n";
    v.reserve(SR);
    for(int i=1; i<=SR; ++i){
        v.push_back(i);
    }
    std::cout<<v.size()<<" "<<v.capacity()<<"\n";
}

int main(){
    std::vector<int> vec = {1, 3, 5, 7, 9};
    manageCapacity(vec);
}