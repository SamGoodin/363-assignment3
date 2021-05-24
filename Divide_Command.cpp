#include "Divide_Command.h"

Divide_Command::Divide_Command (Stack <int> & s) :
    Binary_Op_Command (s)
{

}

int Divide_Command::evaluate (int n1, int n2) const
{
    return n1 / n2;
}

bool Divide_Command::execute (void)
{
    //moved code to binary_op execute
}