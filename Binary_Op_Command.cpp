#include "Binary_Op_Command.h"

Binary_Op_Command::Binary_Op_Command (Stack <int> & s) :
    Expr_Command (s),
    binary_stack (s)
{

}

int Binary_Op_Command::evaluate (int n1, int n2) const
{
    
}

bool Binary_Op_Command::execute (void)
{
    int n2, n1;
    n2 = binary_stack.top();
    binary_stack.pop();
    n1 = binary_stack.top();
    binary_stack.pop();
    int result = this->evaluate(n1, n2);
    binary_stack.push(result);
}

void Binary_Op_Command::setStack (Stack <int> & s)
{
    binary_stack = s;
}
