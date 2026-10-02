#include <iostream>
#include <vector>

void createAndFillVector(int n){
    std::vector <int> v(n);
    for(int i=0; i<n; ++i){
        v[i]=i+1;
    }
    for(int i=0; i<n; ++i){
     std::cout<<v[i]<<' ';
    }
    std::cout << "\n";
    std::cout<<"size: "<<v.size()<<"\n";
    std::cout<<"capacity: "<<v.capacity()<<"\n";
}

int main(){
    createAndFillVector(6);
}
