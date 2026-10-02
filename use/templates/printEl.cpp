#include <iostream>
#include <string.h>

template <typename T>
void printElement(const T& a){
    std::cout<<a<<"\n";
}

void test(){
    int x=5;
    double y=5.7;
    std::string z="zlp";
    printElement(x);
    printElement(y);
    printElement(z);
}

int main(){
    test();
}
