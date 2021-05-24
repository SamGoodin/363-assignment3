#ifndef _DIV_COMMAND_H_
#define _DIV_COMMAND_H_

#include "Binary_Op_Command.h"

class Divide_Command : public Binary_Op_Command {

    public:
        Divide_Command (Stack <int> & s);
        
        virtual bool execute (void);
        virtual int evaluate (int n1, int n2) const;
        
    private:
        Stack <int> & s_ = Binary_Op_Command::binary_stack;

};

#endif      // !defined _DIV_COMMAND_H_