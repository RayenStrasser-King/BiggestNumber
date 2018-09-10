//Author:
#include<iostream>

int main()
{
  //declare variables here
int age1;
int age2;
  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>age1;
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>>age2;
  //determine if first or second is bigger and store that in a third variable

  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number
if (age1 > age2)
    {std::cout<<age1;}
if (age2 > age1)
    {std::cout<<age2;}
if (age1 == age2)
{std::cout<<age2;}

  std::cout<<std::endl<<"Thank you for playing.\n";
  return 0;
}
