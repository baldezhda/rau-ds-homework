#include <iostream>
#include <vector>

std::vector<int> createVectorFromInput(){
    std::vector<int> v;
    while(true){
        int a;
        std::cin>>a;
        if(a==0){
            break;
        }
        v.push_back(a);
    }
    return v;
}

int main(){
std::vector<int> inputVec = createVectorFromInput();
for(const auto x:inputVec){
    std::cout<<x<<" ";
}
std::cout<<"\n";
}