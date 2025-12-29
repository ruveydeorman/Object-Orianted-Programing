#include<iostream>
#include<set>

int main(){
    std::set<int>s={9,7,3,4,2,8,6,1,5,0};

    for(auto n: s){
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;
    s.insert(5);//hata verir bu sayı zaten var 
    s.insert(11);

    if(s.find(2)!=s.end()){
        std::cout<<"2 find"<<std::endl;
    }
    s.erase(9);
     for(auto n: s){
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;


}
