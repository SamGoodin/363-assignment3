#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include <string>
#include <ctype.h>
#include "Array.h"
#include "Expr_Command_Factory.h"
#include "Expr_Command.h"

//Altered code to put conversion in a wrapper facade

class Calculator {

    public:
        Calculator (void) { };
        bool infix_to_postfix (const std::string & infix,
                               Expr_Command_Factory & factory,
                               Array <Expr_Command *> & postfix);

};

#include "Calculator.cpp"

#endif      // !defined _CALCULATOR_H_