#include <iostream> 
using namespace std;
int main() { 
    std::cout << "**Program for palindrome a number ** \n"; 
    std::cout<<"Enter the number you need to check: "; 
    int num;
    std::cin>>num;
    int original_number=num;
    int reverse_number=0;
    while(num>0){
        int d=num%10;
        reverse_number=reverse_number*10+d;
        num=num/10;
    }
    if (original_number==reverse_number){
        std::cout<<original_number<<" is a palindrome \n";
    }
    else{
        std::cout<<original_number<<" is not a palindrome \n";
    }
    return 0;
}
