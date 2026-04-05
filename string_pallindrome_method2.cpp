#include <iostream> 
using namespace std;
int main() { 
    //method two
    std::cout << "**Program for string palindrome program ** \n"; 
    std::cout<<"Enter the string you need to check: "; 
    std::string str;
    std::cin>>str;
    int start=0;
    int end=str.length()-1;
    bool ispallindrome=true;
    while(start<end){
        if(str[start]!=str[end]){
            ispallindrome=false;
            break;
        }
        start ++;
        end --
    }
    if (ispallindrome==true){
        std::cout<<"It is a palindrome";
    }
    else{std::cout<<"It is not a palindrome";}
    return 0;
}
