#include "Multiply_Command.h"

Multiply_Command::Multiply_Command (Stack <int> & s) :
    Binary_Op_Command (s)
{

}

int Multiply_Command::evaluate (int n1, int n2) const
{
    return n1 * n2;
}

bool Multiply_Command::execute (void)
{
    //moved code to binary_op execute
}

