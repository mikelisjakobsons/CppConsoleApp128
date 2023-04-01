# CppConsoleApp128
A Visual C++ console project that focuses on using 128 bit integers.

It consists of three sourse files, each are all different.
The main C++ program is ConsoleApp128.cpp that utilises 128 bit integers, both signed and unsigned.
It has two sample calculating functions: 
      First is Mytest128() is to print out the value of 125 raised to 2nd, 4th, 8th, and 16th power.
      Second is _Uint128 nCr(intn, int r) that computes n Choose r with n reaching 131, which is maximum that unsigned int128 can take. 
      
The second program is its header file Int128.h that list all its int128 operator-routines, for both separately signed and unsigned,
where the operator are as follows: +, -, *, /, %, +=, -=, *=, /=, %=, &, |, ^, ==, !=, >, >=, <, <=.
It also defines for ostream << operator to output i28-bit integers using std::cout.

The third program, namely int128x64.asm, is written in its Intel-based 64-bit masm assembler for 64-bit achitecture computer that Micosoft uses.

This project resides in Community Edition of Visual Studio.
    
