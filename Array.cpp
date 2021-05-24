// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Array.h"
#include <stdexcept>         // for std::out_of_bounds exception

//---------------CONSTRUCTORS/DESTRUCTOR------------------
//
// Array
//
template <typename T>
Array <T>::Array (void) :
    Array_Base <T> ()
{

}

//
// Array (size_t)
//
template <typename T>
Array <T>::Array (size_t length) :
    Array_Base <T> (length)
{

}

//
// Array (size_t, char)
//
template <typename T>
Array <T>::Array (size_t length, T fill) :
    Array_Base <T> (length, fill)
{

}

//
// Array (const Array &)
//
template <typename T>
Array <T>::Array (const Array & array) :
    Array_Base <T> (array)
{

}

//
// ~Array
//
template <typename T>
Array <T>::~Array (void)
{

}

//------------------METHODS-------------------
//
// shrink
//
template <typename T>
void Array <T>::shrink (void)
{
    if (this->max_size() > this->size()) {
        T * arr = new T [this->size()];
        for (int i = 0; i < this->size(); i++) {
            arr[i] = this->data_[i];
        }
        delete [] this->data_;
        this->data_ = nullptr;
        this->data_ = arr;
        this->max_size_ = this->cur_size_;
    }

}

//
// resize
//
template <typename T>
void Array <T>::resize (size_t new_size)
{
    if (new_size > Array_Base <T>::max_size() || (new_size < Array_Base <T>::max_size() && new_size > Array_Base <T>::size())) {
        //Make allocation bigger, keep vals
        if (Array_Base <T>::size() == 0) {
            delete [] Array_Base <T>::data_;
            Array_Base <T>::data_ = nullptr;
            Array_Base <T>::data_ = new T[new_size];
        }
        else {
            T values[new_size];
            for (int i = 0; i < new_size; i++) {
                values[i] = Array_Base <T>::data_[i];
            }
            delete [] Array_Base <T>::data_;
            Array_Base <T>::data_ = nullptr;
            Array_Base <T>::data_ = new T[new_size];
            for (int i = 0; i < Array_Base <T>::size(); i++) {
                Array_Base <T>::data_[i] = values[i];
            }
        }
        Array_Base <T>::cur_size_ = new_size;
        Array_Base <T>::max_size_ = new_size;
    }
    else if (new_size < this->max_size_) {
        //Truncate
        T values[new_size];
        for (int i = 0; i < new_size; i++) {
            values[i] = this->data_[i];
        }
        delete [] this->data_;
        this->data_ = nullptr;
        T * tmp = new T[new_size];
        this->data_ = tmp;
        for (int i = 0; i < new_size; i++) {
            this->data_[i] = values[i];
        }
        this->cur_size_ = new_size;
        this->max_size_ = new_size;
    }
}