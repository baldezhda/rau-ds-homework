#include <iostream>
#include <vector>

template <typename T>
void resizeVector(std::vector<T> &v, int new_sz, T val){
    for(const auto x:v){
        std::cout<<x<<" ";
    }
    std::cout<<"\n";
    v.resize(new_sz, val );
    for(const auto x : v){
        std::cout<<x<<" ";
    }
}

int main(){
    std::vector<int> v = {1, 2, 3};
    resizeVector(v, 5, 42); 
}