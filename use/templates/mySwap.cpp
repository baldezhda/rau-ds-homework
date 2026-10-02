#include <iostream>
template <typename T>
void mySwap(T& a,  T& b){
    T tmp=a;
    a=b;
    b=tmp;
}

void test(){
    int a=7, b=6;
    double x=8.7, y=7.9;
    std::string be="me", me="be";
    std::cout<<x<<" "<<y<<"\n";
    std::cout<<a<<" "<<b<<"\n";
    std::cout<<be<<" "<<me<<"\n";
     mySwap(x, y);
     mySwap(a, b);
     mySwap(be, me);
     std::cout<<x<<" "<<y<<"\n";
     std::cout<<a<<" "<<b<<"\n";
     std::cout<<be<<" "<<me<<"\n";
}

int main(){
    test();
}