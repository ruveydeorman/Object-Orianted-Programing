#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    std::vector<int>numbers={4,6,7,8,9};
    int count =2;
    int sum = 0;
    std::for_each(numbers.begin(),numbers.end(),[=,&sum] (int n)
              { sum += (count * n );
                std::cout << sum <<std::endl;});

    std::cout<<"end sum is "<< sum << std::endl;

    return 0;
}