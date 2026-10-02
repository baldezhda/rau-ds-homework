#include <iostream>
#include <vector>
template <typename T>
int linearSearch(const std::vector<T> &v, T val ){
    int ind=-1;
    for(int i=0; i<v.size(); ++i){
        if(v[i]==val){
            ind=i;
            break;
        }
    }
    return ind;
}

void test(){
    std::vector<int> v1= {1, 2, 3};
    std::vector<double> v2={1.2, 5.6, 7.1};
    std::vector<std::string> v3={" ", "n", "m"};
    std::cout<<linearSearch(v1, 2)<<"\n";
    std::cout<<linearSearch(v2, 2.3)<<"\n";
    std::cout<<linearSearch(v3,(std::string)" ")<<"\n";
}

int main(){
    test();
}