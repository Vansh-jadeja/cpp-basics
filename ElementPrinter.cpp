#include <iostream>
/*
  This program is going to print 
  the element and its atomic number
    Gold Au 79
    Silver Ag 47
    Neon Ne 10
*/
/*
  Function 'printElement' returns nothing (which is indicated by word 'void').
  It has a parameter of type int
  'atomicNumber' is a parameter of function 'printElement'. It is of type int.
  inside the function 'atomicNumber' is like a variable.
*/
void printElement(int atomicNumber)
{
    //Print out Gold if the value of paramter atomicNumber matches 79
    if(atomicNumber == 79)
    {
        std::cout << "Gold Au 79" << std::endl;
    }
    //Otherwise, print out Silver if the value of paramter atomicNumber matches 47
    else if(atomicNumber == 47)
    {
        std::cout << "Silver Ag 47" << std::endl;
    }
    else if(atomicNumber == 10)
    {
        std::cout << "Neon Ne 10" << std::endl;
    }
    else
    {
        std::cerr << "I Don't Know Atomic Number " << atomicNumber << std::endl;
    }
}

/*
  Function 'readNumberAndPrintElement' will read an integer
  from Stdin using std::cin
  It will then invoke function 'printElement' to try to print the element.
*/
void readNumberAndPrintElement()
{
   std::cout << "Please Enter A Number in Stdin. " << std::endl;
   int a;
   std::cin >> a;    
   std::cout << "You Have Entered- " << a << std::endl;
   printElement(a);
}

/*
  Function called 'main', returns value of type int.
  It does not have any parameters
*/
int main()
{
    printElement(108);//invoke or call function 'printElement' with parameter value 108
    printElement(79);//invoke or call function 'printElement' with parameter value 79
    printElement(47);
    printElement(10);
    printElement(1);
    readNumberAndPrintElement();//invoke function 'readNumberAndPrintElement'
}

