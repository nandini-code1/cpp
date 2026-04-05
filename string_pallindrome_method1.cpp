#include <iostream> 
using namespace std;
int main() { 
    //// method one
    std::cout << "**Program for string palindrome program ** \n"; 
    std::cout<<"Enter the string you need to check: "; 
    std::string str;
    std::cin>>str;
    std::string rev="";
    for (int i=str.length()-1;i=0;i>=0;i--){
        rev=rev+str[i];
    }
    if(str==rev){
        std::cout<<str<<" is a palindrome";
    }
    else{std::cout<<str<<" is not a palindrome";}
    return 0;
}
