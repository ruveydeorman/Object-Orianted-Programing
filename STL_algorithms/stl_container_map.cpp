#include<iostream>
#include<map>
#include<string>

int main(){
    std::map<std::string,int>grades;  //ilişkisel container anahtar değer çiftlerini saklar
    grades["yusuf"]=100;
    grades.insert({"ahmet",60});
    grades.emplace("ayşe",80);

    std::cout<<"yusuf garade is: "<<grades["yusuf"]<<std::endl;
    std::cout<<"ahmet grade is: "<<grades["ahmet"]<<std::endl;
    std::cout<<"unknowned value: "<<grades["unknowns"]<<std::endl; //unknowned değerler için otamatik olarak 0 atar

    if(grades.count("ruveyde")== 0){
        std::cout<<"ruveyde not found"<<std::endl;
    }
    
    for(auto& s: grades){
        std::cout<<s.first<<":"<<s.second<<std::endl;  //first keyi verir second ise değeri
    }
    auto it=grades.find("ahmet");
    if(it!=grades.end()){
        std::cout<<"found ahmet: "<<it->second<<std::endl;
    }
 return 0;
}
