#include <iostream> //preprocessor directive that tells compiler to add contents of iostream header to program

int main() //declares main function
{
  std::cout << "Hello world!" << std::endl; //output statement with << output operator
  std::cout << "Test" << std::endl;
  std::cout << "Goodbye" << std::endl;
  return 0; //return statement that determines whether value was successful or not
}

//int x; <-- declaration statement (declares a variable)
//x = 5; <-- assignment statement (assigns a value to the variable)
//std::cout << x; <-- output statement  (outputs the value of x)
