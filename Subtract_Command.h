#ifndef _SUB_COMMAND_H_
#define _SUB_COMMAND_H_

#include "Binary_Op_Command.h"

class Subtract_Command : public Binary_Op_Command {

    public:
        Subtract_Command (Stack <int> & s)
            : Binary_Op_Command (s) { }
        
        virtual bool execute (void);
        virtual int evaluate (int n1, int n2) const;
    
    private:
        Stack <int> & s_ = Binary_Op_Command::binary_stack;
};

#endif      // !defined _SUB_COMMAND_H_