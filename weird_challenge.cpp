/*Task
Given an integer, , perform the following conditional actions:

If n is odd, print Weird
If n is even and in the inclusive range of 2 to 5, print Not Weird
If n is even and in the inclusive range of 6 to 20, print Weird
If n is even and greater than 20, print Not Weird*/


#include<iostream>
int main()
{
    int n;
    std::cout<<"Enter the Number n:";
    std::cin>>n;
    if(n % 2 == 0){
        if(n >= 2 && n <= 5)
            std::cout<<"Not Weird\n";
        else if (n >= 6 && n <= 20)
            std::cout<<"Weird\n";
        else
            std::cout<<"Not Weird\n";
    }
    else{
        std::cout<<"Weird\n";
    }
    return 0;
}