#include <sstream>
#include <iostream>
#include<iterator>
#include<vector>
#include<algorithm>
#include<fstream>
int main(){
    std::vector<int>v ={1,2,3,4,5,6,7,8,9};
    //vectörün elemanlarının her birini yeni satıra yazar.
    std::copy(v.begin(),v.end(),std::ostream_iterator<int>(std::cout,"\n"));
    //vectörün elemanlarını virgülle ayırarak yazdırır standat outputa kopyalar
    std::copy(v.begin(),v.end(),std::ostream_iterator<int>(std::cout,","));
    std::cout<<std::endl;
     

    //istream ile cin den okuyup ostream ile couta yazdık
    std::vector<int> v2;
    std::cout<<"enter numbers: ";
    std::copy(std::istream_iterator<int>(std::cin),
              std::istream_iterator<int>(),
              std::back_inserter(v2));
    std::cout<<std::endl;
    std::copy(v2.begin(),v2.end(),std::ostream_iterator<int>(std::cout," "));
    std::cout<<std::endl;

  //istream ile file dan okuyup couta yazdık
  std::ifstream file("number.txt");
  std::vector<int>v3;
  if(file){
    std::copy(std::istream_iterator<int>(file),std::istream_iterator<int>(),std::back_inserter(v3));
  }

   std::copy(v3.begin(),v3.end(),std::ostream_iterator<int>(std::cout," "));
    
  std::cout<<std::endl;





    return 0;
}
