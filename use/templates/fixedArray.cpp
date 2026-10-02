#include <iostream>
template<typename T, int N>
class FixedArray{
    int n;
    T* arr;
    
public:
    FixedArray():n(N), arr(new T[n]){}

    void set(int index, T value){
        arr[index]=value;
    }

    T get(int index){
        return arr[index];
    }

     int size(){
        return n;
     }

};

void test(){
    FixedArray<int, 10> a;
    for(int i=0; i<a.size(); ++i){
        a.set(i, i);
        std::cout<<a.get(i)<<" ";
    }
    std::cout<<"\n";

    FixedArray<double, 6> b;
    std::cout<<b.get(5)<<"\n";

    FixedArray<std::string, 12> c;
    std::cout<<c.size()<<"\n";
}

int main(){
    test();
}
