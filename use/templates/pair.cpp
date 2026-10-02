#include <iostream>
template<typename T1, typename T2>
class Pair{
public:
    Pair(const T1& a = T1(), const T2& b=T2()):x(a), y(b){}
    void print(){
        std::cout<<x<<" "<<y<<"\n";
    }
private:
    T1 x;
    T2 y;

};

void test(){
    int a=5;
    double b=3.14;
    std::string c="zachem";

    Pair<int, double> p(a);
    Pair<int, double> pp(a, b);
    Pair<double, std::string> ppp(b, c);

    p.print();
    pp.print();
    ppp.print();

}

int main(){
    test();
}