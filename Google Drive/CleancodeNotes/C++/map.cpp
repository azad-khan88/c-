#include "lib.hpp"
/*
The bitsets are the array of bool. They can be directly created using a number 
and allows accessing each bit using the [] operator.
The count of the bits in the number can be calculated by count functions.
none,any,all can be used to check if none,any or all of the bits are set
the flip function will flip the bits from 0-1 and 1-0
& | ^ ~ << >> == >= <= can also be done on two bitsets
reset will set the bits to false.
to_string convert to string
to_ulong to long
and to_ullong to long long
*/



int main(){
    bitset<32> integer_number;
    bitset<32> integer_number2;
    integer_number=127;
    integer_number2=127;

    cout<<" The and operation between two numbers is" <<endl;
    auto integer_number3=integer_number2 & integer_number;
    cout<<integer_number3.to_ullong()<<endl;

    auto set_bits=integer_number.count();
    integer_number3=integer_number.flip();
    integer_number2=integer_number;
    cout<<integer_number3.to_ulong()<<endl;
    cout<<integer_number2.to_ulong()<<endl;
    return 0;
}