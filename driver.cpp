#include <iostream>
#include <sstream>
#include <string>

#include "Calculator.h"
#include "Stack.h"
#include "Stack_Expr_Command_Factory.h"

//moved infix_to_postfix into wrapper facade class Calculator

int main (int argc, char * argv [])
{
   //input
   Calculator calc;
   std::string infix;
   while (true) {
      std::cout << "Enter an INFIX expression to evaluate or type QUIT to exit: ";
      std::cin >> infix;
      std::cout << "\n";
      if (infix == "QUIT" || infix == "quit") {
         break;
      } 
      else {
         Stack <int> result;
         Stack_Expr_Command_Factory factory (result);

         Array <Expr_Command *> postfix;
         calc.infix_to_postfix (infix, factory, postfix);
         
         for (int i = 0; i < postfix.size(); i++) {
            postfix[i]->execute();
         }

         int res = result.top();
         std::cout << res;
      }
   }
}

