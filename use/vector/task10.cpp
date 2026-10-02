#include <iostream>
#include <vector>

template<typename T>
std::vector<T> filterVector(const std::vector<T> &v, bool (*func)(T sm) ){
    std::vector ret = v;
    for(int i=0; i<ret.size(); ++i){
        if(func(ret[i])){
            ret.erase(ret.begin()+i);
        }
    }
    return ret;
}

bool  isEven(int x){
    return x%2!=0;
}

int main(){
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};
    std::vector<int> filtered = filterVector(vec, isEven);
    for(const auto x:filtered){
        std::cout<<x<<" ";
    }
}