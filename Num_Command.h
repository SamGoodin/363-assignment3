#ifndef _NUM_COMMAND_H_
#define _NUM_COMMAND_H_
 
#include "Expr_Command.h"

class Num_Command : public Expr_Command {

    public:
        Num_Command (Stack <int> & s, int n)
            : s_ (s), n_ (n) { }
        
        bool execute (void);
    
    private:
        Stack <int> & s_ = Expr_Command::expr_stack;
        int n_;
};

#endif      // !defined _NUM_COMMAND_H_