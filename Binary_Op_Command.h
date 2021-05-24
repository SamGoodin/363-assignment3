#ifndef _BINARY_OP_COMMAND_H_
#define _BINARY_OP_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

class Binary_Op_Command : public Expr_Command {

    protected:
        Binary_Op_Command (Stack <int> & s);

    public:

        virtual bool execute (void);

        virtual int evaluate (int n1, int n2) const = 0;

        void setStack (Stack <int> & s);
    
    protected:
        Stack <int> & binary_stack;
};

#endif      // !defined _BINARY_OP_COMMAND_H_