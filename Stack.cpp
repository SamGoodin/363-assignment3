// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//-----------------CONSTRUCTORS/DESTRUCTOR--------------
//
// Stack 
//
template <typename T>
Stack <T>::Stack (void)
{

}

//
// Stack (const Stack &)
//
template <typename T>
Stack <T>::Stack (const Stack & stack) :
    arr (stack.arr)
{
    
}

//
// ~Stack
//
template <typename T>
Stack <T>::~Stack (void)
{
    arr.~Array();
}

//---------------------OPERATOR OVERLOADING---------------------
//
// operator =
//
template <typename T>
const Stack <T> & Stack <T>::operator = (const Stack & rhs)
{
    if (this != &rhs) {
        arr = rhs.arr;
    }
    return *this;
}

//-------------------METHODS------------------------
//
// push
//
template <typename T>
void Stack <T>::push (T element)
{
    if (is_empty() == false) {
        arr.resize(size()+1);
        arr[size()-1] = element;
    }
    else {
        arr.resize(1);
        arr.set(0, element);
    }
}

//
// pop
//
template <typename T>
void Stack <T>::pop (void)
{
    if (is_empty()) {
        throw std::out_of_range("empty_exception error: No elements present in stack");
    }
    else {
        arr.resize(size()-1);
    }
}

//
// clear
//
template <typename T>
void Stack <T>::clear (void)
{
    arr.resize(0);
}
