#include<iostream>
#include<vector>

int summation(std::initializer_list<int>numbers){
        int sum = 0;
        for(auto num : numbers){
             sum += num;
        }
        return sum;
    }
int main(){

    auto numbers = std::initializer_list<int>{1,2,3,4,5,6,7,8,9};
    std::cout<<summation(numbers)<<std::endl;;
    return 0;
}