#include "Expr_Command_Factory.h"

Expr_Command_Factory::Expr_Command_Factory (void)
{
    
}

Expr_Command_Factory::~Expr_Command_Factory (void) 
{

}

Num_Command * Expr_Command_Factory::create_number_command (int num)
{
    return new Num_Command(s, num);
}

Add_Command * Expr_Command_Factory::create_add_command (void)
{
    return new Add_Command(s);
}

Subtract_Command * Expr_Command_Factory::create_subtract_command (void)
{
    return new Subtract_Command(s);
}

Multiply_Command * Expr_Command_Factory::create_multiply_command (void)
{
    return new Multiply_Command(s);
}

Divide_Command * Expr_Command_Factory::create_divide_command (void)
{
    return new Divide_Command(s);  
}