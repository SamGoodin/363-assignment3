#include "Calculator.h"

bool Calculator::infix_to_postfix (const std::string & infix,
                                   Expr_Command_Factory & factory,
                                   Array <Expr_Command *> & postfix)
{
    std::istringstream input(infix);
    std::string token;
    Expr_Command * cmd = 0;
    Stack <Expr_Command *> temp;
    while (!input.eof()) {
        input >> token;
        if (token == "+") {
            cmd = factory.create_add_command();
            temp.push(cmd);
        }
        else if (token == "-") {
            cmd = factory.create_subtract_command();
            temp.push(cmd);
        }
        else if (token == "*") {
            cmd = factory.create_multiply_command();
            temp.push(cmd);
        }
        else if (token == "/") {
            cmd = factory.create_divide_command();
            temp.push(cmd);        
        }
        else if (token == "(") {

        }
        else if (token == ")") {

        }
        else if (token == "0" || token == "1" || token == "2" || token == "3" || token == "4" ||
            token == "5" || token == "6" || token == "7" || token == "8" || token == "9") {
            cmd = factory.create_number_command(std::stoi(token));
            temp.push(cmd);
        }

    }
    return true;
}