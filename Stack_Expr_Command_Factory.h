#ifndef _STACK_EXPR_FACTORY_H_
#define _STACK_EXPR_FACTORY_H_

#include "Expr_Command_Factory.h"

class Stack_Expr_Command_Factory : public Expr_Command_Factory {

    public:
        Stack_Expr_Command_Factory (Stack <int> & stack):
            s (stack) {};
        virtual Num_Command * create_number_command (int num) { };
        virtual Add_Command * create_add_command (void) { };
        virtual Subtract_Command * create_subtract_command (void) { };
        virtual Multiply_Command * create_multiply_command (void) { };
        virtual Divide_Command * create_divide_command (void) { };

    private:
        Stack <int> & s;

};

#endif      // !defined _STACK_EXPR_FACTORY_H_