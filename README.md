# CppConsoleApp128

A Visual C++ console project that focuses on using 128 bit integers.
A signed 128-bit integer has a range from around -1.7e38 to +1.7e38, and its unsigned has a range from 0 to around 3.4e38. This is the double length of the ordinary Visual Studio long integer where that range is from around -9.26e18 to + 9.26e18, and its ordinary long integer is from 0 to around 1.85e19.

It consists of three source files, each are all different, and can be added in as file-items while making such project. But its repository also contains five more files, including README, are Visual-Studio generated files comprising a Visual Studio Solution.

The main C++ program is ConsoleApp128.cpp that utilises 128 bit integers, both signed and unsigned.
It has two sample calculating functions: 
      First is Mytest128() is to print out the value of 125 raised to 2nd, 4th, 8th, and 16th power.
      The 16th power of 125 (i.e. equals to 5**48) cannot be fit in an ordinary long integer, and therefore must use int128 to have that value.
      Second is _Uint128 nCr(intn, int r) that computes n Choose r with n reaching 131, which is maximum that unsigned int128 can take. 
      
The second program is its header file Int128.h that list all its int128 operator-routines, for both separately signed and unsigned,
where the operator are as follows: +, -, *, /, %, +=, -=, *=, /=, %=, &, |, ^, ==, !=, >, >=, <, <=.
It also defines for ostream << operator to output i28-bit integers using std::cout.

The third program, namely int128x64.asm, is written in its Intel-based 64-bit masm assembler for 64-bit achitecture computer that Micosoft uses.

This project resides in Community Edition of Visual Studio.
    
