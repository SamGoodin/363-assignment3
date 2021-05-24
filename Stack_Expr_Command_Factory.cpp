#include "Stack_Expr_Command_Factory.h"

Stack_Expr_Command_Factory::Stack_Expr_Command_Factory (Stack <int> & stack) :
    Expr_Command_Factory (),
    s (stack)
{

}

Num_Command * Stack_Expr_Command_Factory::create_number_command (int num)
{
    
}

Add_Command * Stack_Expr_Command_Factory::create_add_command (void)
{
    
}

Subtract_Command * Stack_Expr_Command_Factory::create_subtract_command (void)
{
    
}

Multiply_Command * Stack_Expr_Command_Factory::create_multiply_command (void)
{
    
}

Divide_Command * Stack_Expr_Command_Factory::create_divide_command (void)
{
     
}