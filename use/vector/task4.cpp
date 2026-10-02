#include <iostream>
#include <vector>

int removeElementsGreaterThan(std::vector<int> &v, int x){
    int end =v.size();
    int c=0;
    for(int i=end-1; i>=0; i-- ){
        if(v[i]>x){
            v.pop_back();
            c++;
        }
    }
    return c;
}

int main(){
std::vector<int> v = {1, 3, 5, 7, 9};
int removed = removeElementsGreaterThan(v, 5);
std::cout<<removed;
}