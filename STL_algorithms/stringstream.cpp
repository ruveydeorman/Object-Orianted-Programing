#include <sstream>
#include <iostream>

int main(){
    //stringe yazmak
    std::stringstream ss;
    ss<<"Hello "<<45<<" "<<12.5;
    std::string result = ss.str();  //içindeki stringi döndürür.
    std::cout<<result<<std::endl;
    
    //stringden okumak
    std::string data = "123 456.6 ruveyde";
    std::stringstream s(data);
    int a;
    double b;
    std::string c;
    s>>a>>b>>c;
    std::cout<<a<<" "<<b<<" "<<c<<std::endl;
    s.str("its changed");  //içeriği değiştirir.
    std::cout<<s.str()<<std::endl;
    
    return 0;
}
