#include <iostream>
#include <vector>

std::vector<int> mergeSortedVectors(const std::vector<int> &a, const std::vector<int> &b){
    std::vector<int> c(a.size()+b.size());
    int i=0, j=0, k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            c[k]=a[i];
            ++k;
            ++i;
        }
        else{
            c[k]=b[j];
            ++k;
            ++j;
        }
    }
    if(i==a.size()){
        for(; j < b.size(); ++j) {
            c[k] = b[j];
            ++k;
        }
    }
    else{
        for(; i<a.size(); ++i){
            c[k]=a[i];
            ++k;
        }
    }
    return c;
}

int main(){
    std::vector<int> vec1 = {1, 3, 5, 7};
    std::vector<int> vec2 = {2, 4, 6, 8, 9};
    std::vector<int> merged = mergeSortedVectors(vec1, vec2);

    for(const auto x:merged){
        std::cout<<x<<" ";
    }
}