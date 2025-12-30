#include<iostream>
#include<fstream>
int main(){
  std::ofstream binfile("data.bin",std::ios::binary);
  int num= 30;
  binfile.write(reinterpret_cast<char*>(&num),sizeof(num));
  binfile.close();

  std::ifstream infile("data.bin",std::ios::binary);
  int readnum;
  infile.read(reinterpret_cast<char*>(&readnum),sizeof(readnum));
  infile.close();
  std::cout<<"reded number: "<<readnum<<std::endl;
}
