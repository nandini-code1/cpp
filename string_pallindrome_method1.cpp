#include <iostream> 
int main() { 
    //// method one
    std::cout << "**Program for string pallindrome program ** \n"; 
    std::cout<<"Enter the string you need to check: "; 
    std::string str;
    std::cin>>str;
    std::string rev="";
    for (int i=str.length()-1;i=0;i>=0;i--){
        rev=rev+str[i];
    }
    if(str==rev){
        std::cout<<str<<" is a pallindrome";
    }
    else{std::cout<<str<<" is not a pallindrome";}
    return 0;
}
