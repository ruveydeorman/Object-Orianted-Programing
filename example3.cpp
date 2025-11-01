#include<iostream>
#include<vector>
#include<string>
int main(){
    auto fruits = std::vector<std::string>{"apple","banana","melon"};
    for(const auto& fruit : fruits ){
        std::cout<<fruit<<" ";
    }
    std::cout<<std::endl;
   
    return 0;

}