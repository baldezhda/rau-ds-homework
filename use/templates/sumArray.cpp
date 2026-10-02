#include <iostream>

template <typename T>
T sumArray(const T* arr, int size) {
    T sum = T();
    for(int i=0; i<size; ++i){
        sum+=arr[i];
    }
    return sum;
}

void test() {
    int* arr1=new int[3];
    for (int i = 0; i < 3; i++) arr1[i] = i;
    double* arr2=new double[3];
    arr2[0] = 1.2;
    arr2[1] = 3.5;
    arr2[2] = 1.2;
    std::string* arr3=new std::string[5];
    for (int i = 0; i < 5; ++i) {
   	arr3[i] = std::to_string(i); 
    }
    std::cout<<sumArray(arr1, 3)<<"\n";
    std::cout<<sumArray(arr2, 3)<<"\n";
    std::cout<<sumArray(arr3, 5)<<"\n";


}

int main() {
    test();
    return 0;
}
