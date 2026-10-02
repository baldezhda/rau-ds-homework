#include <iostream>
template<typename T>
void printValue(const T& val){
    std::cout<<val<<"\n";
}

template<>
void printValue(const bool& val){
    if(val){
        std::cout<<"True\n";
    }
    else{
        std::cout<<"False\n";
    }
}

template<>
void printValue(const char* const& str){
    std::cout<<"\""<<str<<"\""<<"\n";
}

void test(){
    int a=5;
    double b=6.5;
    bool c=true;
    const char* d="dinozavr";

    printValue(a);
    printValue(b);
    printValue(c);
    printValue(d);

}

int main(){
    test();
}