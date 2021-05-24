#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_

#include "Stack.h"

class Expr_Command {

    public:
        Expr_Command (void);
        Expr_Command (Stack <int> s);
        virtual bool execute (void) = 0;

    protected:
        Stack <int> & expr_stack;

};

#endif      // !defined _EXPR_COMMAND_H_