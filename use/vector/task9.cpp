#include <iostream>
#include <vector>

std::vector<std::vector<int>> groupAdjacent(const std::vector<int> &v){
   std::vector<std::vector<int>> ret;
   ret.push_back({v[0]});
   for(int i=1; i<v.size(); ++i){
    if(v[i]==v[i-1]){
        ret.back().push_back(v[i]);
    }
    else{ret.push_back({v[i]});}
   } 
   return ret;
}

int main(){
    std::vector<int> vec = {1, 1, 2, 2, 2, 3, 1, 1};
    std::vector<std::vector<int>> groups = groupAdjacent(vec);
    for(const auto x:groups){
        for (const auto y : x) {
            std::cout << y << ' ';
        }
        std::cout << "\n";
    }
}