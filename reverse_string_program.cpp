#include <iostream> 
int main() { 
    std::cout << "**Program to reverse a string ** \n"; 
    std::cout<<"Enter the string : "; 
    std::string str;
    std::cin>>str;
    std::string rev=" ";
    for(int i=str.length()-1;i >=0;i--){
        rev=rev+str[i];
    }
    std::cout<<"The reverse is:"<<rev;
    return 0;
}