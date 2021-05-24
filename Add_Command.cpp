a#include "Add_Command.h"

Add_Command::Add_Command (Stack <int> & s) :
    Binary_Op_Command (s),
    s_ (s)
{

}

int Add_Command::evaluate (int n1, int n2) const
{
    return n1 + n2;
}

bool Add_Command::execute (void) 
{
    //moved code to binary_op execute
}
