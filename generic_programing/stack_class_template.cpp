#include<iostream>
#include<stdexcept>
#include<vector>
#include<string>
template<class T>
class Stack{
private:
    std::vector<T>data;
public:
    void push(const T& item){
        data.push_back(item);
    }
    void pop(){
        if(is_empty()){
           throw std::out_of_range("Stack is empty.");
        }
        data.pop_back();
    }
    T& top(){   //stack üstüne değişiklik yapıldıgında örneğin top elemanı başka bişi ile değiştirdiğimizde bu fonksiyon çağrılır
        if(is_empty()){
            throw std::out_of_range("Stack is empty"); //geçersiz bir indeks veya erişim durumlarında kullanılır.throw bir exception fırlatır
        }
        return data.back();
    };
    const T& top()const{   //const işlemler için bu fonksiyon çağrılır örneğin stackın top elemanını okumak için değişiklik yapılmaz 
        if(is_empty()){
             throw std::out_of_range("Stack is empty");
        }
        return data.back();
    }
    bool is_empty()const{
        return data.empty();
    }
    size_t size()const{
        return data.size();
    }
    
    
};
int main(){
    Stack<int>intstack;
    std::cout<<"stack boş mu "<<(intstack.is_empty()? "evet":"hayir")<<std::endl;
    intstack.push(5);
    intstack.push(4);
    intstack.push(8);
    std::cout<<"top:"<<intstack.top()<<std::endl;
    intstack.pop();
    std::cout<<"top:"<<intstack.top()<<std::endl;
    Stack<std::string>stringstack;
    stringstack.push("hello");
    stringstack.push("world");
    std::cout<<stringstack.top()<<std::endl;
    stringstack.pop();
    std::cout<<stringstack.top()<<std::endl;
  try{
    Stack<double>doublestack;
    doublestack.pop();
  }catch(const std::exception& e){
     std::cout<<"hata yakalandi "<<e.what()<<std::endl;
  }
   


return 0;
}
