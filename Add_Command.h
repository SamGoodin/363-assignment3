#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

#include "Binary_Op_Command.h"

class Add_Command : public Binary_Op_Command {

    public:
        Add_Command (Stack <int> & s);
        
        virtual bool execute (void);
        virtual int evaluate (int n1, int n2) const;
    
    private:
        Stack <int> & s_ = Binary_Op_Command::binary_stack;
    
};

#endif      // !defined _ADD_COMMAND_H_