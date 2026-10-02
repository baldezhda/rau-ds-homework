#include <iostream>
#include <vector>

void workWithEmptyVector(){
    std::vector<int> v;
for(int i=1; i<=10; ++i ){ 
   v.push_back(i);
   std::cout<<"size: "<<v.size()<<"\n";
   std::cout<<"capacity: "<<v.capacity()<<"\n";
}
for(int i=0; i<10; ++i){
    std::cout<<v[i];
}
}

int main(){
    workWithEmptyVector();
}