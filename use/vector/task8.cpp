#include <iostream>
#include <vector>

int findSubsequence(const std::vector<int> &v1, const std::vector<int> &v2){
    int ch=-1;
    for(int i=0; i<v1.size(); ++i){
        if(v1[i]==v2[0]){
            ch=i;
            for(int j=1; j<v2.size() && i+j<v1.size(); ++j){
                if(v1[i+j]==v2[j]){continue;}
                else{
                    ch=-1;
                    break;
                }
            }
            if(ch==-1){continue;}
            else{return ch;}
        }
    }
    return ch;
}

int main(){
    std::vector<int> main_vec = {1, 2, 3, 4, 5, 6};
    std::vector<int> sub_vec = {3, 4, 5};
    int index = findSubsequence(main_vec, sub_vec);
    std::cout<<index;

}