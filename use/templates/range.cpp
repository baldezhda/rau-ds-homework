#include <iostream>
template<typename T>
class Range{
    T s;
    T e;
public:
    Range(const T& start, const T& end): s(start), e(end){}

    bool contains(const T& value){
        if(value>=s && value<=e){
            return true;
        }
        return false;
    }

    T length(){
        return e-s;
    }

    void print(){
        std::cout<<"["<<s<<", "<<e<<"]"<<"\n";
    }
};

void test(){
    Range<int> x(3, 10);
    std::cout << "Does x contain 11: " << std::boolalpha << x.contains(11);
    std::cout<<"\n";
    x.print();

    Range<double> y(1.5, 3.5);
    y.print();
    std::cout<<y.length()<<"\n";

    Range<char> z('a','d');
    z.print();
}

int main(){
    test();
}