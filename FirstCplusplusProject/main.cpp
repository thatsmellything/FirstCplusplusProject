//
//  main.cpp
//  FirstCplusplusProject
//
//  Created by Judkins, Jensen on 1/22/19.
//  Copyright © 2019 Judkins, Jensen. All rights reserved.
//

#include <iostream> // gang signs are for library level imports, aka copiled code that already exists. +include is to import other files in your project

int main() {
    // insert code here...
    // colon colon means scope resolution, so that the c operation lives inside the standard library. Basically data member. << is the output stream indicator, aka stuff on the right side puts that stuff on the output. >> are for input.
    //cin uses the >> operator and takes in information. cin>>variable; It can only grab one input at a time
    //std is the standard library
    //namespace helps organize code sorta like a package
    //#include is like import for libraries. not for cpp only hpp and only do it once
    //# is the indication of a preprocessor commands. o no end in semicolons
    //;; scope resoution operator, ie thing o the right belongs to or is a part of the thing on the left
    //assert means if its not true then shut down the program. force quit
    //typedef basically renames ints lngs and doubles and such
    //const is for constant duh
    //pointer is an address of a variable or a thing in c++, basically the address on the stack of something
    //. its an operator to use the object
    // -> works just like a dot but for a pointer
    //* dereference operator, how to create a pointer and reference pointer
    //& gets you the address of something including pointers
    //** an array is just a pointer, so pointer pointer. Means its an array of pointers
    //lvalue stuff on the left of equation
    //rvalue stuff on the right of the equation
    //endl makes the end of the line basicallly. It makes a new line for new output.
    std::cout << "Back to C++! Hopefully I remember my stuff from two years ago.\n";
    return 0;
}
