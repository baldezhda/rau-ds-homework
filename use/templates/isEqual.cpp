#include <iostream>
#include <cstring>
template<typename T>
bool isEqual(const T& a, const T& b){
    if(a==b){
        return true;
    }
    else{
        return false;
    }
}

template<>
bool isEqual(const char* const &x, const char* const &y){
 return strcmp(x, y) == 0;
}

void test(){
    int a=5, b=5;
    const char* x="white";
    const char* y="black";

    std::cout<<std::boolalpha<<isEqual(a, b)<<"\n";
    std::cout<<std::boolalpha<<isEqual(x, y)<<"\n";

    std::cout<<std::boolalpha<<isEqual(x, x)<<"\n";
}

int main(){
    test();
}